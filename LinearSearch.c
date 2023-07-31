//WRITE A PROGRAM TO FIND A NUMBER USING LINEAR SEARCH
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,data;
    printf("Enter the number of elements you want to use in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to find\n");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        printf("Element found at index %d",i);
        break;
    }
    if(i==n)
    printf("Element Not FOUND");
    return 0;
}