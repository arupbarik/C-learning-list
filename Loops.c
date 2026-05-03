#include <stdio.h>
  int main(){
    //this is for loops only
    printf("lets start!\n");
    //while loops
    int i=0;
    while(i<4){
        printf("hi\n");
        i=i+1;// i++ can be use instead of this
    }
    int b;
    for (b=0;b<15;b++){
      if (b==12){
        //continue;
        //break; //break is use for exit the loop
      }
       printf("%d\n",b);

    }
    return 0;
  }