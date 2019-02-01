#include <stdio.h>
void main()
{
    int n, i;
   int factorial = 1;

   
    scanf("%d",&n);

        for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("%d", factorial);
}
