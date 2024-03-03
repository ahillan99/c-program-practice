#include<stdio.h>
int main ()
[9:27 pm, 03/03/2024] Ahillan Ece Hostel: {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>50&&b>60&&c>100)
    {
        printf("10");
    }
    else if(a>50 && b>60)
        {
            printf("9");
        }
    else if(b>60 && c>100)
    {
        printf("8");
    }
    else if (a>50 && c>100)
    {
        printf("7");
        
    }
    else if(a>50||b>60||c>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
 }
[9:28 pm, 03/03/2024] Ahillan Ece Hostel: {
    int N;
  scanf("%d",&N);
  if(N==3 || N%8==3)
  {
      printf("%dUB",N+3);
  }else if(N==6||N%8==6)
  {
      printf("%dUB",N-3);
      
  }else if(N==2||N%8==2)
  {
      printf("%dMB",N+3);
      
  }else if(N==5||N%8==5)
  {
      printf("%dMB",N-3);
      
  }else if(N==1||N%8==1)
  {
      printf("%dLB",N+3);
      
  }else if(N==4||N%8==4)
  {
      printf("%dLB",N-3);
      
  }else if(N==7||N%8==7)
  {
      printf("%dSU",N+1);
      
  }else 
  {
      printf("%dSL",N-1);
      
  }
  
}