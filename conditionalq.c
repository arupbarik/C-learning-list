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

    //q 3 Read a year and check if it is a leap year.
    int leap;
    printf("Enter year\n");
    scanf("%d",&leap);
    if (leap%4==0 && leap%100!=0 && leap%400==0)
    {
        printf("it is a leap year\n");
    }
    else
    {
        printf("it is a leap year\n");
    }

    //q4 Read a character and print whether it is a vowel or consonant.
    char vc;
    printf("Enter character\n");
    scanf("%c",&vc);
    if (vc=='a' || vc=='e' || vc=='i' || vc=='u' || vc=='o')
    {
        printf("it is a vowel\n");
    }
    else if (vc=='A' || vc=='E' || vc=='I' || vc=='U' || vc=='O')
    {
        printf("it is a Vowel\n");
    }
    
    else
    {
        printf("it is consonent\n");
    }

    //q5 Read three numbers and print them in ascending order without using an array.
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        int t = x; x = y; y = t;
    }
    if (x > z) {
        int t = x; x = z; z = t;
    }    
    if (y > z) {
        int t = y; y = z; z = t;
    }
    printf("%d %d %d\n", x, y, z);

    //q6 
}