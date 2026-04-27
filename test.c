#include <stdio.h>
#include <math.h>
int main(){
    printf("lets start\n");
    // int a;
    // scanf("\n%d", &a);
    // switch(a){
    //     case 23:
    //     printf("the value is 23");
    //     break;
    //     case 45:
    //     printf("the value is 45");          
    //     break;
    //     default:
    //     printf("the value is neither 23 nor 45");
    // }

    // smart traffic signal
   //   int n, s, e, w;
   //   printf("Enter vehicles on N S E W: ");
   //   scanf("%d %d %d %d", &n, &s, &e, &w);

   //      // N checked first = highest priority on tie
   //   if (n >= s && n >= e && n >= w)
   //        printf("You can go North!\n");
   //   else if (e >= s && e >= w)       // N already lost, so E is next priority
   //        printf("You can go East!\n");
   //   else if (s >= w)                 // N and E lost, S vs W
   //        printf("You can go South!\n");
   //   else
   //        printf("You can go West!\n");

    //Password Strength Checker
   //  int pwd;
   //  printf("enter your password:");
   //  scanf("%d",&pwd);
   //  if (pwd%7==0)
   //  {
   //    printf("Your password is Weak!!");
   //  }
   //  else if (pwd%5==0 && pwd%3==0)
   //  {
   //    printf("Your password is Moderate!!");
   //  }
   //  else if (pwd%11==0 && pwd%2!=0)
   //  {
   //    printf("Your password is Strong!!");
   //  }
   //  else{
   //    printf("Your password is Invalid!!");
   //  }

    //Triangle Intelligence System
   //  int a,b,c;
   //  printf("Enter your angles here:\n");
   //  scanf("%d %d %d",&a,&b,&c);
   //  int sum=a+b+c;
   //  if (sum==180 && a > 0 && b > 0 && c > 0 )
   //  {
   //    if (a==90 || b==90 || c==90)
   //    {
   //       printf("it is a right angle triangle");
   //    }
   //    else if (a<90 && b<90 && c<90)
   //    {
   //       printf("it is an acute angle triangle");
   //    }
   //    else
   //    {
   //       printf("it is an obtuse angle triangle");
   //    } 
   //  }
   //  else
   //  {
   //    if (a <= 0 || b <= 0 || c <= 0)
   //    {
   //       printf("Invalid: angles must be positive\n");
   //    }
   //    else
   //    {
   //       printf("Invalid: sum is not 180\n");
   //    }
   //  }
    
    //Electricity Billing with Slab Twist
    int units;
    float bill;
    printf("enter your units consumed:\n");
    scanf("%d",&units);
    if (units<=100)
    {
      bill= units*1;
    }
    else if (units<=200)
    {
      bill= (100*1)+(units-100)*2;
    }
    else if (units<=300)
    {
      bill= (100*1)+(100*2)+(units-200)*3;
    }
    else if (units>300)
    {
      bill= (100*1)+(100*2)+(100*3)+(units-300)*5;
    }
    
    if (units<=50 && units>0)
    {
      bill=100;
    }
    if (bill>500)
    {
      bill= bill*0.9;
    }
    printf("so your total bill is %.2f", bill);
    
    
    
    
    

    

    
    return 0; 
}