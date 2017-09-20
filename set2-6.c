#include<stdio.h>
void main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    printf("Prime number between %d and %d is\n",a,b);
    a++;
    while(a<b)
    {
        for(i=2;i<=a/2;i++)
        {
            c=0;
            if(a%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
         printf("%d\n",a);

        }
        a++;
    }
}
