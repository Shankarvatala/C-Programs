#include<stdio.h>
main(){
    int n;
    printf("enter the value of n..");
    scanf("%d",&n);
    switch(n){
        case 1:printf("\nsunday");
               printf("\n yahh is weenked...!");
               break;
        case 2:printf("\nmonday");
               printf("\n ohh is weekday..! ");
               break;
        case 3:printf("\ntuesday");
               printf("\n ohh is weekday..!");
               break;
         case 4:printf("\nwensday");
               printf("\n ohh is weekday..!"); 
               break;
         case 5:printf("\nthursday");
               printf("\n ohh is weekday..!"); 
               break;
          case 6:printf("\nfriday");
               printf("\n ohh is weekday..!"); 
               break;
          case 7:printf("\nsaturday");
               printf("\n yahh is weekend..!"); 
               break;
          default:
               printf("\n invalid weekname");                                             

    }
}