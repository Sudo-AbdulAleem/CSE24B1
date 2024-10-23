#include<stdio.h>

long int fact(int x){
if(x<=1)
return 1;
else
return (x*fact(x-1));
}

int main(){
int n;
printf("Enter n:");
scanf("%d",&n);
printf("%d! = %ld\n",n,fact(n));
return 0;
}
