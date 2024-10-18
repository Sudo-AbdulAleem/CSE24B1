#include<stdio.h>
int maxi(int x, int y){
return ((x>y)?x:y);
}

int main(){
int x,y,z;
printf("Enter resp:\n");
scanf("%d %d %d",&x,&y,&z);
printf("%d\n",maxi(maxi(x,y),z));
return 0;
}
