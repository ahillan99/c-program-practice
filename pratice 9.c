#include<stdio.h>
int main (){
    int a,j,i,c=0,b=0;
    scanf("%d",&a);
    for(i=1;b<a;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        {
            printf("%d",i);
            b++;
        }
    }
}