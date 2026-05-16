#include <stdio.h>
#include <math.h>
int main(){
    // 2.​
    //      a.​ Write a program in C to calculate factorial value of a number.
    //      b.​ Write a program in C to calculate XY without using pow( ) function.
    //      c.​ Write a program in C to print all even and odd numbers between 1 and N.
    //      d.​ Write a program in C to Print multiplication table (1–10) using nested loops
    //      e.​ Write a program in C to calculate the number of digits present in a number.
    //      f.​ Write a program in C to calculate the product of digits of a number.
    //      g.​ Write a program in C to reverse a number.
    //      h.​ Write a program in C to check whether a number is palindrome or not.
    //      i.​ Write a program in C to determine whether a number is prime or not.
    //      j.​ Write a program in C to Implement menu-driven calculator using infinite loop and
    //         switch case.
    //      k.​ Write a C program to find HCF (GCD) of two numbers.
    //      l.​ Write a C program to find LCM of two numbers.
    //      m.​ Write a program to read N positive integer numbers; if any input is zero, program
    //         should take the input again but if any input is negative loop body should be
    //         terminated.
    //      n.​ Write a program to Keep taking input and stop when sum exceeds 100.
    //      o.​ Write a program in C to Find digital root of a number.The digital root of a number is
    //         the single-digit value obtained by repeatedly adding the digits of the number until
    //         only one digit remains. Example :Number = 456
    //         i.​ 4 + 5 + 6 = 15
    //         ii.​ 1 + 5 = 6
    //         iii.​ Digital root = 6
    //      p.​ Write a program in C to Convert decimal to binary using loop.

    //q a.
    int fact,m=1,a=1;
    printf("Enter the value\n");
    scanf("%d",&fact);
    for (int i = 0; i < fact; i++)
    {
        a=a*m;
        m++;
    }
    printf("the factorial is %d\n",a);

    //q b
    int x,y,l=1;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x,&y);
    for (int i1 = 0; i1 < y; i1++)
    {
        l=l*x;
    }
    printf("here is the result:%d\n",l);

    //q c
    int num;
    printf("enter the range from 1 to N:\n");
    scanf("%d",&num);
    if (num>0)
    {
        for (int i2 = 1; i2 <= num; i2++)
    {
        if (i2%2==0)
        {
            printf("even:%d\n",i2);
        }
        else
        {
            printf("odd:%d\n",i2);
        }
    }
    }
    else
    {
        printf("invalid input\n");
    }
    
    //q d
    int mul,v;
    printf("desire number table:\n");
    scanf("%d",&mul);
    for (int i3 = 1; i3 <= 10; i3++)
    {
        v=mul*i3;
        printf("%d * %d = %d\n",mul,i3,v);
    }

    //q e
    int dnum,count=0;
    printf("Enter the number:\n");
    scanf("%d",&dnum);
    int temp=dnum;
    while (temp!=0)
    {
        temp= temp/10;
        count++;
    }
    printf("The digits are: %d\n",count);

    //q f
    int numd;
    printf("Enter the number:\n");
    scanf("%d",&numd);
    int subs=numd;
    int product=1;
    while (subs!=0)
    {
        product*=(subs%10);
        subs/=10;
    }
    printf("%d\n",product);
    
    //q g+h
    int rnum,rev=0;
    printf("Enter number:\n");
    scanf("%d",&rnum);
    if (rnum < 0) {
        printf("Negative numbers are not palindromes\n");
    } 
    else {
    int srev=rnum;
    while (srev!=0)
    {
        rev=rev*10;
        rev=rev+(srev%10);
        srev=srev/10;
    }
    printf("%d\n",rev);
    if (rev==rnum)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome\n");
    }
    }

    //q i
    int inp;
    printf("Enter whatever:\n");
    scanf("%d", &inp);

    if (inp < 2) {
        printf("Invalid input\n");
    } 
    else {
        int isPrime = 1;  // assume prime first

        for (int k = 2; k * k <= inp; k++) {  // start at 2, go till √inp
            if (inp % k == 0) {
                isPrime = 0;  // found a divisor → not prime
                break;        // no need to check further
            }
            // NO else here! keep checking other divisors
        }

        // conclude AFTER the loop
        if (isPrime)
            printf("It is a prime number\n");
        else
            printf("It is not a prime number\n");
    }

    //q j
    int op;
    float fir, sec;

    printf("please select from the given list\n");
    while (1 < 2) {
        printf("1. Addition 2. Substration 3. Multiplication 4. Divition 5. exit\n");
        scanf("%d", &op);

        if (op == 5) {
            printf("chalo ghar\n");
            break;
        } else {
            printf("Enter the digits\n");
            scanf("%f %f", &fir, &sec);

            switch (op) {
                case 1:
                    printf("%.2f + %.2f = %.2f\n", fir, sec, fir + sec);
                    break;
                case 2:
                    printf("%.2f - %.2f = %.2f\n", fir, sec, fir - sec);
                    break;
                case 3:
                    printf("%.2f * %.2f = %.2f\n", fir, sec, fir * sec);
                    break;
                case 4:
                    if (sec == 0) {
                        printf("not possible");
                    } else {
                        printf("%.2f / %.2f = %.2f\n", fir, sec, fir / sec);
                        break;
                    }
                default:
                    printf("Andhe menu dekhle\n");
                    break;
            }
        }
    }
    //q k+l
    int img,img2,hcf=1,k1=2;
    printf("Enter the number\n");
    scanf("%d %d",&img,&img2);
    int div=img,div2=img2; 
    while (k1<=div || k1<=div2)
    {
        if (div%k1==0 && div2%k1==0)
        {
            div=div/k1;
            div2=div2/k1;
            hcf*=k1;
        }
        else
        {
            k1++;
        }
        
        
    }
    int lcm=(img*img2)/hcf;
    printf("%d\n",hcf);
    printf("%d\n",lcm);

    //q m
    int pnum, in;
    printf("how many numbers u want to store\n");
    scanf("%d", &in);
    for (int k = 1; k <= in; k++) {
        printf("Enter value\n");
        scanf("%d", &pnum);

        if (pnum < 0) {
            break;
        } 
        else if (pnum == 0) {
            printf("enter the integer again!!\n");
            k--;
        } 
        else {
            printf("your input is:\n");
            printf("%d\n", pnum);
        }
    }

    //q n
     int pl=0,number;
    while (pl<100)
    {
        printf("Enter the the number\n");
        scanf("%d",&number);
        pl+=number;
    }
    printf("Complete!!! \n sum = %d\n",pl);

    //q o
}