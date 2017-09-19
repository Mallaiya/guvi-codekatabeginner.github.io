#include<stdio.h>
void main()
{
    int i,n,a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);
}
