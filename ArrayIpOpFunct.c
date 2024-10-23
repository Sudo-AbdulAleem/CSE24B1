#include<stdio.h>
void getarray(int a[],int l){
for(int i=0;i<l;++i){
printf("Enter Element No %d: ",i);
scanf("%d",&a[i]);
}
}

void display(int a[],int l){
for(int i=0;i<l;i++)
printf("Value of a[%d]=%d\n",i,a[i]);
}

int main(){
int b;
printf("Enter the number of Elements: ");
scanf("%d",&b);
int arr[b];
getarray(arr,b);
display(arr,b);
return 0;
}
