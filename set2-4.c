#include<stdio.h>
void main()
{
    int a,b,i,temp;
    scanf("%d %d",&a,&b);
    temp=a;
    a=a+1;
    printf("Odd numbers between %d and %d is\n",temp,b);
    for(i=a;i<b;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}
