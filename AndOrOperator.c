#include <stdio.h>
int main() {
int a = 5, b = 6;
int resultOne, resultTwo;
resultOne = ((a<b) && (b>a));
resultTwo = (a<b) || (a>b);
printf("Value of a is %d \nValue of b is %d\n",a,b);
printf("___________________________\n");
printf("Example of AND operator %d  \nCondition Says if a<b && b>a\n", resultOne);
printf("___________________________\n");
printf("Example of OR operator  %d \nCondition Says if a<b || a>b\n", resultTwo);
return 0;
}
