#include<stdio.h>
int main(){
int i,j,prod;
printf("Enter The Number: ");
scanf("%d",&j);
printf("The value you entered is: %d\n",j);
//putchar('\n');
for(i=1;i<11;i++)
{
prod = j * i;
printf("%d x %3d = %3d\n",j,i,prod);
}
return 0;
}
