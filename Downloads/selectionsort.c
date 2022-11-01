#include <stdio.h>
#include <stdlib.h>

void sort(int *arr, int n);
// void display(int *arr,int n);

int main(int argc, char** argv){

    char *(unsort) = argv[1];
    int n = atoi(argv[2]);
    int arr[n];
    
    // FILE* ptr=fopen("unsort.txt","w");
    // for (int i=0;i<n;i++){
    //   fprintf(ptr,"%d\n",rand());
    // }
    // fclose(ptr);
    
    FILE* ptr1=fopen("unsort.txt","r");
    for (int i = 0; i < n; i++)
    {
        fscanf(ptr1, "%d", &arr[i]);
    }
    fclose(ptr1);
    sort(arr,n);
    
    /*FILE* ptr2=fopen("sort.txt","w");
    for (int k=0;k<n;k++){
      fprintf(ptr2,"%d\n",arr[k]);
    }
    fclose(ptr2);
    
    return 0;*/

}

void sort(int *arr, int n){
    for (int i=0;i<n-1;i++){
    int min=i;
    for (int j=i+1;j<n;j++){
      if (arr[j]<arr[min]) {
        min=j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;      
  }
}

