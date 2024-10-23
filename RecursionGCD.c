#include<stdio.h>
int gcd(int x, int y){
if(y==0)
return x;
else
return (gcd(y,x%y));
}

int main(){
int u,v;	
printf("Enter the values of U and V respectively\n");
scanf("%d %d",&u,&v);
printf("GCD of %d & %d is %d\n",u,v,gcd(u,v));
return 0;
}
