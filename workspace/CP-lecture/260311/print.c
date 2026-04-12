#include<stdio.h>

int main(){

    char university[20];
    char department[20];
    char name[10];
    int st_number;

    printf("학교 : ");
    scanf("%s", university);
    printf("학과 : ");
    scanf("%s", department);
    printf("이름 : ");
    scanf("%s", name);
    printf("학번 : ");
    scanf("%d", &st_number);

    printf("------------------\n");
    printf("학교 : %s\n", university);
    printf("학과 : %s\n", department);
    printf("이름 : %s\n", name);
    printf("학번 : %d\n", st_number);
    printf("------------------\n");

    return 0;
}