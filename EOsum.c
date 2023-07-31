#include<stdio.h>
int main()
{
    int n,i=1,esum=0,osum=0,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("The integer numbers from 1 to %d are\n",n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        if(i%2==0)
        esum=esum+i;
        else
        osum=osum+i;
    }
    printf("The odd sum=%d\n",osum);
    printf("The even sum=%d\n",esum);
    return 0;
