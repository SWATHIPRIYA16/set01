#include <stdio.h>
void main()
{
    int number, ori_Num, remainder, result = 0;
    scanf("%d", &number);
    ori_Num = number;
    while (ori_Num != 0)
    {
        remainder = ori_Num%10;
        result += remainder*remainder*remainder;
        ori_Num /= 10;
    }

    if(result == number)
        printf("yes");
    else
        printf("no");

    
}
