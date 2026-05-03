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
    int i=10;
    int j=i;
    printf("the value i is %d and the value of j is %d",i,j);
    

    return 0;
}