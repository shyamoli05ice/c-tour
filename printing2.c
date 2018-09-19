#include<stdio.h>
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
       for(j = 0; j<=5-i;j++) {
            printf("%d ",(6-i)-j);
        }

        printf("\n");
    }

    return 0;
}
