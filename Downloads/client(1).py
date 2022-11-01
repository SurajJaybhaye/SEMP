import threading
import socket
alias = input('Choose an alias >>> ')
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(('127.0.0.1', 59000))
import datetime

def getTime():
    now = datetime.datetime.now()
    str = now.strftime("%H:%M")
    return str
    
# now = datetime.datetime.now()

def client_receive():
    while True:
        try:
            message = client.recv(1024).decode()
            if message == "alias?":
                client.send(alias.encode())
            else:
                s = getTime()
                print(message, f"  -->{s}")
        except:
            # print('Error!')
            client.close()
            break


def client_send():
    while True:
        # s = getTime()
        msg = input("")
        # message = f'{alias}: {msg}   -->{s}'
        message = f'{alias}: {msg}'
        if msg == 'bye':
            client.close()
            break
        client.send(message.encode())
    


receive_thread = threading.Thread(target=client_receive)
receive_thread.start()

send_thread = threading.Thread(target=client_send)
send_thread.start()