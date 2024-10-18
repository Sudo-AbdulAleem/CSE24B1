#include<stdio.h>
int main(){
int num;
printf("Enter Any Number: ");
scanf("%d",&num);
int rem = num % 2;
if (rem == 0)
printf("It is even\n");
else
printf("It is odd\n");
return 0;
}
