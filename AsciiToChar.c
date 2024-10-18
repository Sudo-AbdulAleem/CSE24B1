#include<stdio.h>
int main()
{
int value;
printf("Enter Value: ");
scanf("%d",&value);
char charac;
charac = (char)value;
printf("The character is %c\n", charac);
return 0;
}
