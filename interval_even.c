#include <stdio.h>
void main()
{
 
  int i,N,Q;
   scanf("%d",&N);
   scanf("%d",&Q);
  for(i=N;i<Q;i++)
  {
      if(i%2==0)
      {
          printf(" %d",i);
      }
  }
}
