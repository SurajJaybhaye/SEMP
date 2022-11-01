import socket


def client_program():
    host = socket.gethostname()  
    port = 7000  

    client_socket = socket.socket()  
    client_socket.connect((host, port))  
    message = input(" -> ")  
    while message.lower().strip() != 
        client_socket.send(message.encode())  
        data = client_socket.recv(1024).decode()  
        print('Received from server: ' + data)  
        message = input(" -> ") 
    client_socket.close()  
if __name__ == '__main__':
    client_program()
