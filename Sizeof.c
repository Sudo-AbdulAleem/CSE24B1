#include <stdio.h>
int main() 
{
/*//char programming = 'Clang'; not more then 1 
char programming = 'C';
printf("%c\n", programming);


char ch;
scanf("%d",&ch);
Any char on Keyboard
printf("character %c",ch);
*/

char ch = 'c';
float fl = 0.2;
long int abc;
long int abcd;
double db =.036;
printf("char %c, address: %p\n",ch,&ch);
printf("double %lf, addr: %p\n",db,&db);
printf("longint %ld\n", sizeof(abc));
printf("Addr of Long Int %p\n", &abc);
printf("Addr of Abcd %p\n",&abcd);
/*
char ch;
//char a[10] = 'BIAS';
//printf("a %c",a[10]);
printf("Enter a Character: ");
scanf("%c", &ch);
printf("Character:%c , Address:%d\n", ch,ch);
// Null of C is \0 with ASCII = 0
*/
return 0;
}
