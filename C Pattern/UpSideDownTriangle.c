#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=7;j>=i;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }



    return 0;
}