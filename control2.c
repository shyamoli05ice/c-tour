#include<stdio.h>
int main()
{
var marks;
	if(marks > 79) {
        printf("GP: ");
        printf("A+");
    }
    else if(marks > 74) printf("A");
    else if(marks > 69) printf("A-");
    else if(marks > 64) printf("B+");
    else if(marks > 59) printf("B");
    else if(marks > 54) printf("B-");
    else if(marks > 49) printf("C");
    else if(marks > 39) printf("D");
    else printf("F");
    }
