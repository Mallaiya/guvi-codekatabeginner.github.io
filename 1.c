#include<conio.h>
#include<stdio.h>

void main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive\n");
    }
    else if(a<0)
    {
        printf("negative\n");
    }
    else{
            printf("zero\n");
        }
}
