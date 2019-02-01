#include <stdio.h>
void main()
{
    long  n, i, no = 0;
    scanf("%ld", &n);
    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0)
        {
            no= 1;
            break;
        }
    }
        if (no == 0)
          printf("yes");
        else
          printf("no");
}
