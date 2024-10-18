#include<stdio.h>
#include<ctype.h>
#include<math.h>
int main(){

float a,b,c;
float x1, x2, D;
printf("A: ");
scanf("%f",&a);
printf("B:");
scanf("%f",&b);
printf("C: ");
scanf("%f",&c);
D=sqrt(pow(b,2)-4*a*c);
x1 = (-b+D)/(2*a);
x2 = (-b-D)/(2*a);
printf("%f %f\n",x1,x2);
return 0;
}

