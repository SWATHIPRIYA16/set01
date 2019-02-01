# include <stdio.h>
void main()
{
    int year;
     scanf("%d",&year);
    if(year>1900)
    {
    if(year%4==0)
    {
     printf("yes");
    }
    else
    {
     printf("no");
    }
    }
}
