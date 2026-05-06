#include <stdio.h>
#include <math.h>
int main(){
    printf("hello\n");

    // 1. Write programs in C to find the sum of the following series for problem number 1. (i) to 1.(v):
    //        a. S = 1 + 3 + 5 + 7 +-----upto N terms
    //        b. S = 1 + ½ +1/3 + ¼ + ------upto N terms
    //        c. S = 1*3 + 3*5 + 5*7 + … upto N terms
    //        d. S = 1 + 1/2^2 + 1/3^3 + …..+ 1/n^n
    //        e. S = 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms

    //q1(a)
    int n1,s=1,f=0;
    printf("Enter your number:\n");
    scanf("%d",&n1);
    for (int i = 0;i < n1; i++)
    {
        f+=s;
        s+=2;
    }
    printf("the answer is S: %d\n",f);

    //q1(b)
    int n2; 
    float f1=0,s1=1;
    printf("Enter your number:\n");
    scanf("%d",&n2);
    for (int i1 = 0;i1 < n2; i1++)
    {
        f1+=(1/s1);
        s1++;
    }
    printf("the answer is S: %.2f\n",f1);

    //q1(c)
    int n3; 
    int f2=0,s2=1;
    printf("Enter your number:\n");
    scanf("%d",&n3);
    for (int i2 = 0;i2 < n3; i2++)
    {
        f2=f2+s2*(s2+2);
        s2+=2;
    }
    printf("the answer is S: %d\n",f2);

    //q1(d)
    int n4; 
    float f3=0,s3=1;
    printf("Enter your number:\n");
    scanf("%d",&n4);
    for (int i3 = 0;i3 < n4; i3++)
    {
        double p= pow(s3,s3);
        f3+=(1/p);
        s3++;
    }
    printf("the answer is S: %.2f\n",f3);

    //q1(e)
    int n5; 
    float f4=0,s4=1;
    printf("Enter your number:\n");
    scanf("%d",&n5);
    for (int i4 = 0;i4 < n5; i4++)
    {
        // double p= pow(s4,3); //not necessary but u can add
        f4+=(1/s4);
        s4+=2;
    }
    printf("the answer is S: %.2f\n",f4);

    return 0;
}