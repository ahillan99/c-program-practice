#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=b-(a*2);
    d=d>0?d:0;
    
    if(c%2==1)
    {
        printf("no");
    }
    else if((d+a)*2<=c && (a+b)*2>=c)
    {
        printf("yes");
    }
    else
    {
    
    printf("no");
    }
}