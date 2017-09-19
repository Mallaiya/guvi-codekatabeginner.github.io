#include<stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
        printf("Alphabets\n");
    else
        printf("No Alphabets\n");
}
