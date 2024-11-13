#include<stdio.h>
int main(){
char s1[]={'T','e','s','t',' '};
char s2[]={'W','o','r','k','s'};
char s3[10];
int i;

for(i=0;i<5;++i)
s3[i]=s1[i];
for(i=5;i<10;++i)
s3[i]=s2[i-5];

for(i=0;i<10;++i)
printf("s3[%d]=%c\n",i,s3[i]);
return 0;
}
