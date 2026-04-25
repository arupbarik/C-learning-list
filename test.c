#include <stdio.h>
#include <math.h>
int main(){
    printf("lets start\n");
    // switch case
    int a;
    scanf("\n%d", &a);
    switch(a){
        case 23:
        printf("the value is 23");
        break;
        case 45:
        printf("the value is 45");          
        break;
        default:
        printf("the value is neither 23 nor 45");
    }
    // N no. factorial
    int n, i;
    long long fac = 1;
    printf("enter the value of n\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fac = fac * i;
        }
        printf("Factorial of %d is %lld\n", n, fac);
    }
    //test math functions
    float a;
    scanf("%f", &a);
    printf("the value of %.1f is %.1f\n", a, sqrt(a));

    return 0;
}