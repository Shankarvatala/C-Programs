#include<stdio.h>
main(){
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if(a>0){
        printf("%d is a positive number",a);
    }
    else{
        printf("negative number");
    }
}