#include<stdio.h>
#include<math.h>
void main()
{
    int a,f,i,c=0,temp,sum=0,ams,z=1;
    scanf("%d",&a);
    temp=a;
    ams=a;
    while(a>0)
    {
       a= a/10;
       c++;
    }
    while(temp>0)
    {
        f=temp%10;
        for(i=0;i<c;i++)
        {
         z=z*f;
        }

        sum=sum+z;
        temp=temp/10;
        z=1;
    }
    if(sum==ams)
    {
       printf("It is amstrong\n");
    }
    else
        printf("Not amstrong");
}
