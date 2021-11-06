#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    long num;//考号 
    int morality;//德分 
    int talent;//才分 
}stu;

int cmp(const void *p5, const void *p6){
    stu *p1 = (stu*)p5;
    stu *p2 = (stu*)p6;
    int flag = 0;//0假,非0均为真
    if(p1->morality + p1->talent != p2->morality + p2->talent)//总分不等 
        flag = (p2->morality + p2->talent) - (p1->morality + p1->talent);  //从大到小排序
    else {
        if(p1->morality != p2->morality)  //德分不相等
            flag = p2->morality - p1->morality;//德分从大到小 
        else
            flag = p1->num - p2->num; //都相等的情况下，按照准考证升序排序
    }
    return flag;
}

int main(int argc, char const *argv[]){
    int candNum, lowMark, highMark;//candNum表考生总数量 
    scanf("%d%d%d", &candNum, &lowMark, &highMark);
    stu *p1 = (stu *)malloc(sizeof(stu) * candNum);
    stu *p2 = (stu *)malloc(sizeof(stu) * candNum);
    stu *p3 = (stu *)malloc(sizeof(stu) * candNum);
    stu *p4 = (stu *)malloc(sizeof(stu) * candNum);
    stu stud;//声明结构体类型的变量 
    int i, t1 = 0, t2 = 0, t3 = 0, t4 = 0;  //用于记录每类考生的个数
    for(i = 0; i < candNum; i++){
        scanf("%ld %d %d", &stud.num, &stud.morality, &stud.talent);
        if(stud.morality >= lowMark && stud.talent >= lowMark){//均大于最低分才有录取资格 
            if(stud.morality >= highMark && stud.talent >= highMark)//均大于优秀分 
                p1[t1++] = stud;
            else if(stud.morality > highMark && stud.talent < highMark)
                p2[t2++] = stud;
            else
                p4[t4++] = stud;
        }
    }
    qsort(p1,t1,sizeof(stu),cmp);
    qsort(p2,t2,sizeof(stu),cmp);
    qsort(p3,t3,sizeof(stu),cmp);
    qsort(p4,t4,sizeof(stu),cmp);
    printf("%d\n", t1+t2+t3+t4);
    for(i = 0; i < t1; i++)
        printf("%ld %d %d\n", p1[i].num, p1[i].morality, p1[i].talent);
    for(i = 0; i < t2; i++)
        printf("%ld %d %d\n", p2[i].num, p2[i].morality, p2[i].talent);
    for(i = 0; i < t3; i++)
        printf("%ld %d %d\n", p3[i].num, p3[i].morality, p3[i].talent);
    for(i = 0; i < t4; i++)
        printf("%ld %d %d\n", p4[i].num, p4[i].morality, p4[i].talent);    
    return 0;
}
