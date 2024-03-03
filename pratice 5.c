{
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