#include<stdio.h>
int main()
{
int year, rem4, rem100, rem400;
printf("Enter The Year You Want to Test: ");
scanf("%d",&year);
rem4 = year % 4;
rem100 = year % 100;
rem400 = year % 400;
if((rem4==0 && rem100!=0)||(rem400==0))
printf("Leap Year");
else
printf("Not a Leap Year");
putchar('\n');
return 0;
}
