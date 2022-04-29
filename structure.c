#include <stdio.h>
int main()
{ 
    struct student
    {
        int roll;
        char name[25];
        float per;
    };
    struct student s[100];
    int n,i;
    printf("enter the n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll no of student %d\n",i+1);
        scanf("%d",&s[i].roll);
        printf("enter name of student %d\n",i+1);
        scanf("%s",&s[i].name);
        printf("enter percentage of student %d\n",i+1);
        scanf("%f",&s[i].per);
    }
    printf("student details are\n");
    for(i=0;i<n;i++)
    {
        printf("student -%d roll no is %d\n",i+1,s[i].roll);
        printf("student -%d name is %s\n",i+1,s[i].name);
        printf("student -%d percentage is %f\n",i+1,s[i].per);        
    }
}
