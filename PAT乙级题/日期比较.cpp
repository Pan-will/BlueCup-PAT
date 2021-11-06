#include <stdio.h>
struct {
    int date,month,year;
}date1,date2;
int main(){
    printf("请输入日期第一个日期（格式：date/month/year）");
    scanf("%d/%d/%d",&date1.date,&date1.month,&date1.year);
    printf("请输入日期第二个日期（格式：date/month/year）");
    scanf("%d/%d/%d",&date2.date,&date2.month,&date2.year);
    if(date1.year<date2.year)
        printf("第一个日期早于第二个日期");
    else if(date1.year>date2.year)
        printf("第一个日期晚于于第二个日期");
    else {
        if(date1.month<date2.month)
            printf("第一个日期早于第二个日期");
        else
            if(date1.month>date2.month)
                    printf("第一个日期晚于第二个日期");
            else
            {
                if(date1.date<date2.date)
                    printf("第一个日期早于第二个日期");
                else
                    if(date1.date>date2.date)
                            printf("第一个日期晚于第二个日期");
                    else
                        printf("两个日期为同一天");
            }
    }

    return 0;
}
