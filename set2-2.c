#include<stdio.h>
void main()
{
    long long a,temp,r,sum=0;
    scanf("%lld",&a);
    temp=a;
    while(a>0)
    {
        r=a%10;
        sum=(sum*10)+r;
        printf("%lld\n",sum);
        a=a/10;
    }
    if(sum==temp)
    {
        printf("It is a palindrome\n");
    }
    else{
        printf("Non Palindrome\n");
    }

}
