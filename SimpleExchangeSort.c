#include<stdio.h>

void exsort(int a[],int n){
int i,j,temp;
for(i=0;i<n;++i)
	for(j=i+1;j<n;++j){
		if (a[i]>a[j]){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}

void display(int k[], int n){
	for(int i=0;i<n;++i)
		printf("Array[%d]=%d\n",i,k[i]);
}

int main(){
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;++i){
printf("array[%d]: ",i);
scanf("%d",a+i);
}
printf("The given array when sorted is:\n");
exsort(a,n);
display(a,n);
return 0;
}
