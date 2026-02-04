#include <stdio.h>

void main()
{
    int row,col;
    printf("Enter the no. of Rows:\n");
    scanf("%d",&row);
    printf("Enter the no. of Columns:\n");
    scanf("%d",&col);
    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
}