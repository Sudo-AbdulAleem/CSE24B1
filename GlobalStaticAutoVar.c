#include<stdio.h>

int global_var=10;

void function1(){
auto int local_var=5;

static int static_var=0;
printf("Inside Function: \n");
printf("Local Variable: %d\n",local_var);
printf("Static Variable(Before Increment): %d\n",static_var);
++local_var;
++static_var;
printf("Static Variable(after increment):%d\n",static_var);
}

int main(){
printf("Global variable: %d\n",global_var);
for(int i=0;i<3;++i)
{
printf("Iteration %d: \n",i+1);
function1();
}
printf("Global Variable at the end: %d\n",global_var);
return 0;
}
