#include<stdio.h>
int main(){
int i;
i = 1;
while(i<=20){
if(i==5)
//break;
continue;
printf("%d\n",i);
i++;
}
printf("%d",i);
return 0;
}
