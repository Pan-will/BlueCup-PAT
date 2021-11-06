#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    long num;//���� 
    int morality;//�·� 
    int talent;//�ŷ� 
}stu;

int cmp(const void *p5, const void *p6){
    stu *p1 = (stu*)p5;
    stu *p2 = (stu*)p6;
    int flag = 0;//0��,��0��Ϊ��
    if(p1->morality + p1->talent != p2->morality + p2->talent)//�ֲܷ��� 
        flag = (p2->morality + p2->talent) - (p1->morality + p1->talent);  //�Ӵ�С����
    else {
        if(p1->morality != p2->morality)  //�·ֲ����
            flag = p2->morality - p1->morality;//�·ִӴ�С 
        else
            flag = p1->num - p2->num; //����ȵ�����£�����׼��֤��������
    }
    return flag;
}

int main(int argc, char const *argv[]){
    int candNum, lowMark, highMark;//candNum���������� 
    scanf("%d%d%d", &candNum, &lowMark, &highMark);
    stu *p1 = (stu *)malloc(sizeof(stu) * candNum);
    stu *p2 = (stu *)malloc(sizeof(stu) * candNum);
    stu *p3 = (stu *)malloc(sizeof(stu) * candNum);
    stu *p4 = (stu *)malloc(sizeof(stu) * candNum);
    stu stud;//�����ṹ�����͵ı��� 
    int i, t1 = 0, t2 = 0, t3 = 0, t4 = 0;  //���ڼ�¼ÿ�࿼���ĸ���
    for(i = 0; i < candNum; i++){
        scanf("%ld %d %d", &stud.num, &stud.morality, &stud.talent);
        if(stud.morality >= lowMark && stud.talent >= lowMark){//��������ͷֲ���¼ȡ�ʸ� 
            if(stud.morality >= highMark && stud.talent >= highMark)//����������� 
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
