#include<stdio.h>
long int funct(int a){
int i;
long int prod;
prod = 1;
for (i=1;i<=a;++i)
prod *= i;
return prod;
}

int main()
{
int x;
printf("Enter number: ");
scanf("%d",&x);
printf("%d! = %ld\n",x,funct(x));
return 0;
}

