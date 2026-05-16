#include <stdio.h>
int main(){
//     3.​
// a.​ Write a program in C to print all Armstrong numbers between 1 and N.
// b.​ Write a program in C to print all Krishnamurti/Strong numbers between 1 and N.
// c.​ Write a program in C to print all perfect numbers between 1 and N.
// d.​ Write a program to print all prime numbers between 1 and N.
// e.​ S = (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
// f.​ S = 1! + 2! + 3! + 4! + 5! + ... + n!
// g.​ Print the following patterns:
//             1
//             23
//             456
//             7 8 9 10
//             11 12 13 14 15
// h.​ 1
//    22
//    333
//    4444
//    55555
// i.​ 1
//    12
//    123
//    1234
//    12345
//
// j.​ A
//    BB
//    CCC
//    DDDD
//    EEEEE
//
// k.​ 55555
//    45555
//    34555
//    23455
//    12345
// l.​
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
// a to f already done it

//q g+h
int i,j,n=1;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%d\t",n);
        n++;
    }
    printf("\n");
    //n++; //for ques h
}

//q j
// int i,j,m;
char c='A';
int m=c;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%c\t",m);
    }
    printf("\n");
    m++;
}

// q i
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%d\t",j);
    }
    printf("\n");
}

// q 


 
}