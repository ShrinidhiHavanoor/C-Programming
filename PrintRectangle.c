#include<stdio.h>
#include<math.h>
int main()
{
    int row,col,i,j;
    printf("PRINT A RECTANGLE");
    printf("enter the number of rows you want to print:");
    scanf("%d",&row);
    printf("enter the number of columns you want to print:");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}