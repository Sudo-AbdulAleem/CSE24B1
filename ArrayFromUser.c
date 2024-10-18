#include<stdio.h>
int main(){
int j;
printf("No. of elements: \n");
scanf("%d",&j);
int a[j];
int i;
printf("Enter values: \n");
for(i=0;i<j;++i){
printf("a[%d]: ",i);
scanf("%d",&a[i]);
}
printf("Printing values\n");
for(i=0;i<j;++i)
printf("a[%d]=%d\n",i,a[i]);

printf("Printing Values In Reverse\n");
int n;
for(n=i-1;n>=0;n--){
printf("a[%d]=%d\n",n,a[n]);
}
return 0;
}
