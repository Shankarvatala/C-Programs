#include <stdio.h>
void main()
{
    int i, j, n=5;

    printf("enter the n value ..");
    //scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(i==2)
            break;
            printf("%d\n",i);

        }
    }
}