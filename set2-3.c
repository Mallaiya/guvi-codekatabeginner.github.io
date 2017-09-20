#include<stdio.h>
void main()
{
    int num,count=0,i;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
      if(num%i==0)
      {
          count++;
          printf("%d",count);
          break;
      }
    }
    if(count==0)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not prime number");
    }
}
