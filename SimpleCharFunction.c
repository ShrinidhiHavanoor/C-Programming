#include<stdio.h>

void main() //Function calling fun()
{
    char fun(void); //function declearation
    char ch;
    ch=fun();
    printf("ch=%c",ch);
}

char fun(void)  //function defintion 
{
    char c;
    printf("Enter the character  \n");
    scanf("%c",&c);
    return 'c';
}