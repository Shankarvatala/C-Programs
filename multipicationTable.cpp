#include<stdio.h>
main(){
    int i, num;
    printf("enter the number of table");
    scanf("%d\n",&num);
    printf("Multiplication table of %d:\n", num);
    for(int i=1;i<=10;i++){
    printf("%d x %d = %d\n", num, i, num * i);
    }

}