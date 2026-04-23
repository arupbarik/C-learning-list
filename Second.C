#include <stdio.h>
int main(){

    printf("now my turn\n ");
    //conditional instruction
    //if else statement
    int a;
    scanf("%d",&a);
    if(a>=25){
        printf("allowed\n");

    }
    else{
        printf("not allowed\n");
    }


    int b,c,Z;
    b=12,c=34,Z=(b+c);
    if(Z==100){
        printf("good\n");
    }
    else{
        printf("not good\n");
    }


    int e=0; int g=1;//logical operator
    printf("this is it e and g %d\n",e&&g);
    printf("this is it e and g %d\n",e||g);
    printf("this is it e %d\n",!e);


    int age;//else if clause
    scanf("%d",&age);
    if(age>60){
        printf("you can drive and senior citizen\n");
    }
    else if(age>18){
        printf("you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }

    int A; //switch case control
    scanf("%d",&A);
    switch(A){
        case 1:
         printf("you entered 1\n");
         break;
        case 2:
          printf("you entered 2");
        break;
        default: 
          printf("sorry");
    //break is used for not executing the next line only execute the matched line      
    }
    return 0;

}