#include <stdio.h>
int main(){
    //q1 Read a number and print whether it is positive, negative, or zero.
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if (a==0)
    {
        printf("The number is zero\n");
    }
    else if (a>0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is negative\n");
    }

    //q2 Read two numbers and print the larger one.
    int b,c;
    printf("enter the numbers\n");
    scanf("%d %d",&b,&c);
    if (c>b)
    {
        printf("c is geater\n%d\n",c);
    }
    else if (c==b)
    {
        printf("dont enter equal num\n");
    }
    else
    {
        printf("b is geater\n%d\n",b);
    }

    //q 3
}