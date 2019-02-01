#include <stdio.h>
void main()
{
    int n, rev_Int = 0, remainder, ori_Int;
    scanf("%d", &n);
    ori_Int = n;
    while( n!=0 )
    {
        remainder = n%10;
        rev_Int = rev_Int*10 + remainder;
        n /= 10;
    }
    if (ori_Int == rev_Int)
        printf("yes");
    else
        printf("no");
}
