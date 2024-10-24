#include<stdio.h>
main(){
    int a[10],i,n;
    printf("enter size of the arry");
    scanf("%d",&n);
    printf("enter elements into array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("elementsof array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;


    

}