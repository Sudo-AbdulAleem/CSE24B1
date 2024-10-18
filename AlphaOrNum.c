#include<stdio.h>
int main(){

char ch;
printf("Enter a Character: ");
ch = getchar();

if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
printf("Its a Character\n");
else if((ch >= '0' && ch <= '9'))
printf("Its a numeral");
else
printf("Its A  special Character \n");

/*
int i;
printf("Enter Integer: ");
scanf("%d",&i);

if(i==4)
{
printf("4 printed\n");
printf("hehe\n");
}
else if(i == 3)
printf("hehe X3\n");
else
printf("No hehe\n");
*/
return 0;
}
