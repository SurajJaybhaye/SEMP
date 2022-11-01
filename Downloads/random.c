# include <stdio.h>
# include <stdlib.h>

int main(){
  FILE * fp;
  fp=open("unsort.txt"."w");
  if (fp==NULL){
    printf("Cant open");
  }
  for (int i=0;i<10000000;i++){
    fprintf(fp,"%d\n",rand());
  }
  return 0;
}
