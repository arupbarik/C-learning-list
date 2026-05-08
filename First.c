#include <stdio.h>

int main()
{
    // Hi this is for the test
    printf("Hello World\n");
    printf("Arup\n");
    int a;  // variable declaration
    a = 5;
    int b;
    b = 7;
    int c;  
    c = 5;
    int d=3;
    printf("%d\n", a+b+c+d);  //%d is used to print integer variable
    char e= 'r';
    printf("%c\n",e);  //%c is used to print character variable 
    
    /*#include <stdio.h>
     int main() {
     printf("Size of int: %zu bytes\n", sizeof(int));
     printf("Size of char: %zu bytes\n", sizeof(char));
     printf("Size of double: %zu bytes\n", sizeof(double));
     return 0;
     }*/
    //%d is called format specifier
    //%d is for int,%f is for float,%c is for char
    int q=10;
    int g=20;
    printf("the value f is %d and the value of g is %d\n",q,g);
    
    // S=1+(1+2)+(1+2+3)+(1+2+3+4)+.......+(1+2+3+4+.....+n)
    
    //my code
    int n1,p=0,f=0,s=1;
    printf("Enter term:\n");
    scanf("%d",&n1);
    for (int i = 0; i < n1; i++)
    {
        f=f+p+s;
        p=p+s;
        s++;
    }
    printf("%d\n",f);

    //teachers code
    int n,sum,s1;
    printf("Enter term:\n");
    scanf("%d",&n);
    sum=0;
    for (int i1 = 1; i1 <= n; i1++)
    {
        s1=0;
        for (int j = 1; j <= i1; j++)
        {
            s1=s1+j;
        }
        sum=sum+s1;
    }
    printf("%d\n",sum);

    return 0;
}