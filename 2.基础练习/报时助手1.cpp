/*
0:zero, 1: one, 2:two, 3:three, 4:four, 5:five
6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven
12:twelve, 13:thirteen, 14:fourteen, 15:fifteen
16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen
20:twenty, 30:thirty��40:forty��50:fifty��

���ڴ���20С��60�����֣����ȶ���ʮ������Ȼ���ټ��ϸ�λ����
	��31���ȶ�30�ټ�1�Ķ�����������thirty one����
������Ĺ���:
	21:54������twenty one fifty four��;
	9:07������nine seven��;
	0:15������zero fifteen����
*/
#include<stdio.h>  
int main(){  
    char a[21][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};  
    char b[6][20]={"","","twenty","thirty","forty","fifty"};
    int h,m;
    scanf("%d%d",&h,&m);
    if(m==0){
        if(h<=20)
        	printf("%s o'clock",a[h]);
        else
        	printf("%s %s",b[h/10],a[h%10]);
    }else{
        if(h<=20){
            if(m<=20){
                printf("%s %s",a[h],a[m]);
            }else{
                printf("%s %s %s",a[h],b[m/10],a[m%10]);  
            }
        }else{
            if(m<=20){  
                printf("%s %s %s",b[h/10],a[h%10],a[m]);  
            }else{
                printf("%s %s %s %s",b[h/10],a[h%10],b[m/10],a[m%10]);  
            }  
        }  
    }  
    return 0;  
}
