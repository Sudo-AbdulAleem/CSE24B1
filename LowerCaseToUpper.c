#include<stdio.h>
#include<ctype.h>
int main(){
char lower;
printf("Enter a lowercase character: ");
lower = getchar();
putchar(toupper(lower));
putchar('\n');
return 0;
}
