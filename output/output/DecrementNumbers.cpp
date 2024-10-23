#include<stdio.h>
main(){
    int i,n;
    printf("print the 10 to 1 numbers");
    scanf("%d",&n);
    i=10;
    while(n>0){
        printf("%d\t",n);
        n--;
    }
}