#include <stdio.h>

int main(){
//grade sys.
    int a;
    scanf("%d",&a);
    
    if(a > 90 && a <= 100){        //dont use 90<a<=100 it is wrong 
        printf("A");               // c read it left to right 
    }                              // so it is like first it check 90<a
    else if(a > 80 && a <= 90){    // the ans either 1 (true) or 0 (false)  
        printf("B");               // so it is convert like 0<=100
    }                              // when it check the second cond.
    else if(a > 70 && a <= 80){    // which is always true
        printf("C");
    }
    else if(a > 60 && a <= 70){
        printf("D");
    }
    else if(a > 50 && a <= 60){
        printf("E");
    }
    else if(a > 0 && a <= 50){
        printf("Fail");
    }
    else{
        printf("invalid");
    }
    
    return 0;
}