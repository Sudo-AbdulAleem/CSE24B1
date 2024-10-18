#include<stdio.h>
int main(){

int num ,sum;
printf("Enter Number: ");
scanf("%d",&num);
sum=0;
for(int j = 0;j<=num;j++)
{
sum += j;
}
printf("%d\n",sum);
return 0;
}
