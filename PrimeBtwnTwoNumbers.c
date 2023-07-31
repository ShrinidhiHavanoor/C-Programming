#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,m;
    n<m;
    i=n;
    printf("enter two numbers one greater than other\n");
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            break;
    }
    if(j>sqrt(i))
            printf("%d ",i);
}
return 0;
}