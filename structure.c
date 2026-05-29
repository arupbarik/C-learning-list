#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char name[50];
    int age;
    int class;
};
int main(){
    printf("lets start\n");
    struct student s1;
    strcpy(s1.name,"Arup");
    s1.age=19;
    s1.class=1;
    printf("%s\t",s1.name);
    printf("%d\t",s1.age);
    printf("%d\n",s1.class);
    struct student s2;
    strcpy(s2.name,"Amit");
    s2.age=18;
    s2.class=2;
    printf("%s\t",s2.name);
    printf("%d\t",s2.age);
    printf("%d\n",s2.class);
}