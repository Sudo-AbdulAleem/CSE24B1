#include<stdio.h>
#include<stdbool.h>
int main(){
//int flg = 0;
int len = 0;
char ch;
printf("Enter A String\n");

//while(ch!='\n'){
while(1==1){
ch = getchar();
if(ch=='\n')
break;
len += 1;
}
printf("Total number of characters in the provided string is %d\n",len);
return 0;
}
