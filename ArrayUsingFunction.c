#include<stdio.h>
void display(int u[], int n){
int i;
for(i=0;i<n;++i)
printf("%d\n",u[i]);
}

int main(){
int a[4]={25,87,98,56};
display(a,4);
return 0;
}
