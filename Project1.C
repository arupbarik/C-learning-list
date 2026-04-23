//calculate the area of the rectangle using inputs
#include <stdio.h>
int main(){
    printf("Area of the rectangle is\n");
    int a;
    int b;
    printf("length :");
    scanf("%d", &a);
    printf("width :");
    scanf("%d", &b);
    printf("Area : %d\n", a*b);

//calculate the area of the circle using inputs
    
    printf("Area of the circle\n");
    int r;
    float p=3.14159;
    printf("radius: ");
    scanf("%d",&r);
    printf("area: %f\n",r*r*p);

//calculate the Volume of the cylinder using inputs    
    
    printf("Volume of the cylinder is\n");
    int R,h;
    float pi=3.14;
    printf("radius: ");
    scanf("%d",&R);
    printf("height: ");
    scanf("%d", &h);
    printf("Volume: %f",R*R*h*pi);

//calculate the simple interrest using inputs    
   
    printf("simple interest\n");
    float P,N,T;
    printf("enter principle amount\n");
    scanf("%f",&P);
    printf("enter rate of interest\n");
    scanf("%f",&N);
    printf("enter the time period(in years)\n");
    scanf("%f",&T);
    printf("Interest: %f",(P*N*T)/100);


    return 0;

}