#include<stdio.h>

/*
Sample output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*
x
x x
x x x
x x x x
x x x x x
*/

int main()
{
    int i,j,k;
    /*for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            printf("1");
    }
    printf("\n");*/

    for(i=1;i<=5;i++) {
        for(j = 1; j<=i; j++) {
            printf("%d ",j);
        }

        printf("\n");
    }

    return 0;

    printf("x ");
    printf("\n");

    printf("x ");
    printf("x ");
    printf("\n");

    printf("x ");
    printf("x ");
    printf("x ");
    printf("\n");

    printf("x ");
    printf("x ");
    printf("x ");
    printf("x ");
    printf("\n");

    printf("x ");
    printf("x ");
    printf("x ");
    printf("x ");
    printf("x ");
    printf("\n");

    return 0;
}
