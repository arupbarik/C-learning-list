#include <stdio.h>
int x=0;
int main(){
    //q1 Declare an int, float, and char. Print all three with correct format specifiers.
    int a=10;
    float b=58;
    char c='A';
    printf("%d\n",a);
    printf("%.2f\n",b);
    printf("%c\n",c);

    //q2 What is the output? int x = 5; x = x + 3; printf("%d", x);
    int x = 5; 
    x = x + 3; 
    printf("%d\n", x);// output is 8

    //q3 Find the size of int, float, double, and char using sizeof(). Print each.
    printf("The size of %d is %zu\n",a,sizeof(a));
    printf("The size of %.2f is %zu\n",b,sizeof(b));
    printf("The size of %c is %zu\n",c,sizeof(c));

    //q4 Swap two integers using a third temporary variable.
    int i,j;
    printf("Enter two numbers\n");
    scanf("%d %d",&i,&j);
    printf("so the i is %d and the j is %d\n",i,j);
    int temp;
    temp=i;
    i=j;
    j=temp;
    printf("after swap the value of i is %d and j is %d\n",i,j);

    //q5 Swap two integers without using a third variable.
    int k,l;
    printf("Enter two numbers\n");
    scanf("%d %d",&k,&l);
    printf("so the k is %d and the l is %d\n",k,l);
    k=l+k;
    l=k-l;
    k=k-l;
    printf("after swap the value of k is %d and l is %d\n",k,l);

    //q6 What is implicit type conversion? Show an example where int divided by int gives a wrong result, then fix it.
    int y,z;
    y=1,z=10;
    printf("so the example of wrong result is %d\n",y/z);
    printf("so the fix is %f\n",(float)y/z);

    //q7 Print the minimum and maximum value of an int on your machine without using limits.h.
    unsigned int u = ~0u;         // all bits = 1 (as unsigned)
    int max_int = u >> 1;         // shift right 1: sign bit becomes 0 → largest positive int
    int min_int = ~max_int;       // flip all bits → smallest negative int

    printf("Max int: %d\n", max_int);   // 2147483647
    printf("Min int: %d\n", min_int);   // -2147483648

    //q8 What is the difference between int x = 0 declared inside main vs outside main? Write a program showing both.
    // x=0;
    printf("%d\n", x);

    //q9 Without using printf's %d, extract and print each decimal digit of a positive integer using only arithmetic.
    //int n1 = 4;  // example: 4829
    // But we need to print in correct order, so first count digits
    // Simpler approach: use a small array just for reversal

    int n1 = 4829;
    char digits[20];
    int count = 0;

    if (n1 == 0) {
    putchar('0');  // edge case
    } else {
        while (n1 > 0) {
            digits[count++] = '0' + (n1 % 10);  // '0'+3 = '3' as a char
            n1 /= 10;
        }
        // digits are stored in reverse, print backwards
        for (int i1 = count - 1; i1 >= 0; i1--)
            putchar(digits[i1]);
    }
    putchar('\n');

    //q10 Write a program to check if your machine is little-endian or big-endian.
    int n = 1;
    // In memory, n occupies 4 bytes.
    // If little-endian: bytes are [01, 00, 00, 00]  ← the 1 is in the first byte
    // If big-endian:    bytes are [00, 00, 00, 01]  ← the 1 is in the last byte

    char *ptr = (char *)&n;  // point to the first byte of n

    if (*ptr == 1)
    printf("Little-endian\n");
    else
    printf("Big-endian\n");
}