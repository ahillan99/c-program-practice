#include<stdio.h>
int main ()
{
 int i,q,t,c,cout=0;
 scanf("%d %d",&q,&t);
 while(q<=t)
  {
     c=0;
     for(i=1;i<=q;i++)
       {
           if (q%i==0)
           {
             c++;
            }
       }
 if(c==4)
   {
     cout++;
    }
 q++;
  }
 printf("%d",cout);
}