# include <stdio.h>
void main()
{
    int array[20];
   int i,sum=0;
   int N,K;
   scanf("%d",&N);
   scanf("%d",&K);
    for (i=0;i<N;i++)
    {
     scanf("%d",&array[i]);
    }
   
   for(i=0;i<K;i++)
   {
       sum=sum+array[i];
   }
   printf("%d",sum);
}
