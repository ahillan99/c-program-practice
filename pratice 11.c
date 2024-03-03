#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter your Age :\n");
    scanf("%d",&a);
     printf("Enter your Height :\n");
    scanf("%d",&b);
    if(a>=10 && b>=140)
    {
        printf("Eligible to play");
    }else
    
    {
        printf("Not Eligible to play");
    }
}