#include<stdio.h>
#include<ctype.h>
int main(){

int i = 0;
while(i<5)
{
char lower,upper;
printf("Enter Lower Case Character: ");
scanf(" %c",&lower);
printf("%c\n",toupper(lower));
i++;
}
return 8;
}
