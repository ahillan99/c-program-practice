#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Age :\n");
    if(a>=0 && a<=3)
    {
        printf("TODDLER\nALLOWED");
    }else if(a>=4 &&a<=12)
    {
        printf("JUNIOR\nALLOWED");
    }
    else if(a>=13 &&a<=17)
    {
        printf("TEENAGER\nALLOWED");
    }else if(a>=18 && a<=100)
    {
        printf("NOT ALLOWED");
    }else
    {
        printf("INVALID");
    }
}