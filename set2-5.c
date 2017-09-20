#include<stdio.h>
void main()
{
    int a,b,i,temp;
    scanf("%d %d",&a,&b);
    a=a+1;
    temp=a;
    printf("Even numbers between %d and %d is\n",a,b);
    for(i=a;i<b;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
}
