#include <stdio.h>
#include <string.h>
int main(){
    printf("lets start\n");
    //print string
    char greeting[]="hello world";
    printf("%s\n", greeting);

    //input
    char input[20];
    fgets(input,sizeof(input),stdin);
    printf("%s",input);

    //2D array string
    char fruits[3][20] = {"Apple", "Banana", "Cherry"};

for (int i = 0; i < 3; i++)
    printf("%s\n", fruits[i]);

    // some string function
    

    return 0;
    
}