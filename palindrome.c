#include <stdio.h>
void main()
{
    
    long int n, rev_num= 0, remainder, ori_num;
    scanf("%ld", &n);
    ori_num = n;
    while( n!=0 )
    {
        remainder = n%10;
        rev_num = rev_num*10 + remainder;
        n /= 10;
    }
    if (ori_num== rev_num)
        printf("yes");
    else
        printf("no");
}
