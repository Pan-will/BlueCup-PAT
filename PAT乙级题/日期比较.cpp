#include <stdio.h>
struct {
    int date,month,year;
}date1,date2;
int main(){
    printf("���������ڵ�һ�����ڣ���ʽ��date/month/year��");
    scanf("%d/%d/%d",&date1.date,&date1.month,&date1.year);
    printf("���������ڵڶ������ڣ���ʽ��date/month/year��");
    scanf("%d/%d/%d",&date2.date,&date2.month,&date2.year);
    if(date1.year<date2.year)
        printf("��һ���������ڵڶ�������");
    else if(date1.year>date2.year)
        printf("��һ�����������ڵڶ�������");
    else {
        if(date1.month<date2.month)
            printf("��һ���������ڵڶ�������");
        else
            if(date1.month>date2.month)
                    printf("��һ���������ڵڶ�������");
            else
            {
                if(date1.date<date2.date)
                    printf("��һ���������ڵڶ�������");
                else
                    if(date1.date>date2.date)
                            printf("��һ���������ڵڶ�������");
                    else
                        printf("��������Ϊͬһ��");
            }
    }

    return 0;
}
