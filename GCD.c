#include<stdio.h>
int main(){
int u, v, temp;
printf("Enter value of u and v respectively\n");
scanf("%d %d",&u,&v);

while(v!=0)
{
temp = u%v;
u = v;
v = temp;
}
printf("Value: %d",u);
return 0;
}
