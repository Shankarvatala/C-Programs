#include <stdio.h>
main()
{
    int marks[10], subjects, sum = 0;
    float perc;
    printf("enter how many subjects");
    scanf("%d", &subjects);
    printf("enter marks of a student\n");
    for (int i = 0; i < subjects; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("marks of a stdent:\n");
    for(int i=0;i<subjects;i++){
        printf("%d\t",marks[i]);
    }
    printf("\n total marks of student:\n");
    for(int i=0;i<subjects;i++){
        sum=sum+marks[i];
    }
    printf("%d",sum);
    perc=(sum/(float)(subjects*100))*100;
    printf("percentage of a student is :%f",perc);
    return 0;
}