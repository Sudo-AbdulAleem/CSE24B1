#include<stdio.h>
int main(){
int len;
printf("Enter The Length Of Array: ");
scanf("%d",&len);
int a[len];
int i;

for(i=0;i<len;++i){
printf("Enter a[%d]:",i);
scanf("%d",&a[i]);
}
printf("\n");
int minval = a[0];
for (i=0;i<len;++i)
if(a[i]<minval)
minval=a[i];
printf("Minimum Value in the array is %d\n",minval);
printf("\n\n");
/*
printf("The given array was\n");
for(i=0;i<10;++i)
printf("%d\n",a[i]);
*/
return 0;
}
