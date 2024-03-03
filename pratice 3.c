#include<stdio.h>
int main ()
{
    int  a;
    scanf("%d",&a);
    if(a%10==3||a%10==8)
    {
        printf("Lucky Winner");
        
    }else
    {
        printf("Not a Lucky Winner");
        
    }
    return 0;
}