#include<stdio.h>
int main(){
int a[5];
int i,n;
n=5;

for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
printf("%d",a[i]);
}
printf("%d",sizeof(a));
return 0;
}
