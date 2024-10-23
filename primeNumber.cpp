#include<stdio.h>
main(){
    int num=11;
    int count =0;
    
    // printf("enter the prime number\n");
    for(int i=2;i<=num;i++){
        if(num%i==0){ 
            count++;
        }
    }
    if(count==1){
        printf("Prime number");
    }
    else{
        printf("Not prime");
    }
    

}