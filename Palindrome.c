#include<stdio.h>
int main(){
    // Taking string input from user
    char str[100];
    printf("(This program is cAsE sEnSiTiVe)\nEnter a string: ");
    scanf("%[^\n]s", str);
    printf("The string you entered is:");
    int length = printf("%s",str);
    putchar('\n');

    // Reversing the string
    int j=0; 
    int i=length-1;
    char rev[100];
    i = length-1;
    while(i>=0){
        rev[j] = str[i];
        j++;
        i--;
    }
    // rev[j]='\0';

    //Printing the reversed string
    printf("The given string when reversed is:");
    int lenrev = printf("%s",rev);
    putchar('\n');

    // Checking if the string is palindrome
    int result=0;
    int flag = 0;
    while(result!=length){
        char alpha = str[result];
        char beta = rev[result];
        //printf("%c %c Ascii: %d %d\n", alpha,beta,alpha,beta);
        if (alpha != beta){
            printf("\nThe Given String is Not a Palindrome\n");
            flag = 1;
            break;
            }
        result++;
    }
    if (flag == 0)
    printf("\nThe Given String is a Palindrome\n");

    //This condition does not work for some mysterious reasons
    printf("\n\nDont bother looking at this result\nIt doesn't work???\n");
    if(rev==str)
    printf("Palindrome\n");
    else
    printf("Not plaindrome\n");
    return 0;
}
