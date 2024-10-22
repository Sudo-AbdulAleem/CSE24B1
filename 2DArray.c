#include<stdio.h>
int main(){
int values[3][4]={00,00,00,00,11,11,11,11,22,22,22,22};
for(int r=0;r<3;r++)
{
for(int c=0;c<4;c++)
{
printf("Values[%d][%d]=%2d    ",r,c,values[r][c]);
}
printf("\n");
}
return 0;
}
