#include<stdio.h>
char lctu(char ch){
if (ch>='a' && ch<='z')
return ('A' +ch-'a');
else
return ch;
}

int main(){
//putchar(lctu(getchar()));
char c,d;
c = getchar();
d = lctu(c);
putchar(d);
return 0;
}
