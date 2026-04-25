#include <stdio.h>
int add(int a,int b);
int factorial(int n);
    int main(){
        printf("lets start\n");
    // test the functions
     int result=add(10,20);
     printf("%d\n",result);
     // test the recursion
     int n;
     scanf("%d",&n);  
     printf("%d", factorial(n)); 
        return 0;
    }
int add(int a,int b){
    return a+b;

}
int factorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}