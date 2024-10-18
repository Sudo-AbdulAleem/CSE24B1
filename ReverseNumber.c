#include<stdio.h>
int main(){
int num,rem;
printf("Enter The Number: ");
scanf("%d",&num);
while(num != 0)
{
rem = num % 10;
printf("%d",rem);
num = num /10;
}
putchar('\n');
return 0;
}

