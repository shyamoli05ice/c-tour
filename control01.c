#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num>=80 && num<=100)
        printf("A+");
    else
    if(num>=70 && num<80)
        printf("A");
            else
    if(num>=60 && num<70)
        printf("A-");
            else
    if(num>=50 && num<60)
        printf("B");
            else
    if(num>=40 && num<50)
        printf("C");
            else
    if(num>=33 && num<40)
        printf("D");
        else
            printf("F");
    return 0;
}
