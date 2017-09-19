#include<stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    int lowercase, uppercase;
    lowercase=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    uppercase=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
    if(lowercase||uppercase)
        printf("Vowels\n");
    else
        printf("Consonant\n");
}
