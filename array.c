// copilot: disable
#include <stdio.h>
int main(){
    printf("lets start\n");
    // array
 int arr[5]={3,2,1,2,10};
 printf("%d\n%d\n",arr[2],sizeof(arr));
 //array input by loops (u can amnually but it takes times smart move is to use loops) 
    int marks[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);   // & means "address of"
    }

    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n ", marks[i]);
    }
    //2D array 
    int m[2][3]={{2,3,8},{5,8,9}},i,j;
    printf("here is your matrix\n");
    for (int i = 0; i < 3; i++) {        // rows
    for (int j = 0; j < 3; j++) {       // columns
        printf("%d", m[i][j]);
    }
    printf("\n");
}
    return 0;
 


}