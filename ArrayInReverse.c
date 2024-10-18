#include<stdio.h>
int main(){
int a[3];
int i;
printf("Enter Values:\n");
for(i=0;i<3;++i)
{
printf("a[%d]: ",i);
scanf("%d", &a[i]);
}
printf("Printing my array values. \n");
for(i=0;i<3;++i)
printf("a[%d]=%d\n",i,a[i]);

printf("Printing Array in Reverse order\n");
for(i=i-1;i>=0;--i)
printf("a[%d]=%d\n",i,a[i]);
return 0;
}
