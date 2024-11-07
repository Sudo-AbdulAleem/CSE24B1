#include<stdio.h>
int power(int x, int n){
if(n==0)
return 1;
else
return x*power(x,n-1); 
}

int main(){
int x,n;
printf("Enter values of X and N respectively: ");
scanf("%d %d",&x,&n);
printf("%d\n",power(x,n));
return 0;
}
