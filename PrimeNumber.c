#include<stdio.h>
#include<stdbool.h>

bool is_prime(int n){
int divisor;
if(n<=1)
return false;
for(divisor=2;divisor<n;++divisor)
if(n%divisor==0)
return false;
return true;
}

int main(){
int n;
printf("Enter Number: ");
scanf("%d",&n);
if(is_prime(n))
printf("Prime\n");
else
printf("Not Prime\n");
return 0;
}