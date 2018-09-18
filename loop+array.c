#include<stdio.h>

// Print array value with index
// Sample
// x[0] = 4
// x[1] = 3
// ..

int main()
{

    int a=5,b=4,c=18,d=11,e=9,sum,i;
    int x[5] = { 4, 3, 18, 11, 9 };

    sum=x[0]+x[1]+x[2]+x[3]+x[4];

    //printf("sum of array :%d",sum);

    sum=a+b+c+d+e;
    //printf("alkjdl;ajs;lfjlasdkjfl;askjdf;lkasjdf %d",sum);

    for(i=0;i<5;i = i + 1)
    printf("x[%d] = %d\n",i, x[i]);



}
