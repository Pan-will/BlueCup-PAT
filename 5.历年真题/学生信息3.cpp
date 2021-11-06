#include<stdio.h>
#include<string.h> 
//结构体 
struct student
{
    char name[20];
    char sex[10];
    int age;
    int score;
};
int main()
{
    int n;
    scanf("%d",&n);
    student stu[1000];
    for(int i=0;i<n;i++)
    {
    	scanf("%s %s %d %d",&stu[i].name,&stu[i].sex,&stu[i].age,&stu[i].score);
    }
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        if(stu[i].score>stu[j].score)
        {
            char str[20];
            strcpy(str,stu[i].name);
            strcpy(stu[i].name,stu[j].name);
            strcpy(stu[j].name,str);
            
            strcpy(str,stu[i].sex);
            strcpy(stu[i].sex,stu[j].sex);
            strcpy(stu[j].sex,str);
            
            int t;
            t=stu[i].score;
            stu[i].score=stu[j].score;
            stu[j].score=t;
            
            t=stu[i].age;
            stu[i].age=stu[j].age;
            stu[j].age=t;
            i=-1;//如果进行了排序那么前面的可能还需排序。 
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %s %d %d\n",stu[i].name,stu[i].sex,stu[i].age,stu[i].score);
    }
    return 0;
}
