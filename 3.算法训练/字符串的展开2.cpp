#include<stdio.h>
#include<string.h>
#define MAXSIZE 10000
char s[MAXSIZE];//ԭ�ַ��� 
char result[MAXSIZE];//������� 
int p,len, p1,p2,p3;//p��������len��ԭ�ַ������� 
void operate(int i){//���庯��������Ϊ����'-'��λ��i 
    int j, lenz;//lenz��ʾ�����ַ������� 
    char insert;//��ʾҪ�����ַ� 
    if(p1==2 && s[i-1]>='a' && s[i-1]<='z'){//p1=2:����д�ַ� 
        insert = s[i-1] - ('a'-'A') + 1;
    }else{//����˳��������
        insert = s[i-1] + 1;
    }
    if(p1 == 3){//p1=3:��� * 
        insert = '*';
    }
    lenz = s[i+1] - s[i-1];//�õ������ַ����ĳ��� 
    if(insert == '*'){//�������ַ�Ϊ* 
        for(i=1; i<lenz; i++){
            for(j=0; j<p2; j++){//���p2���ַ� 
                result[p++] = insert;
            }
        }
    }else{
        if(p3 == 1){//ԭ����� 
            for(i = 1; i < lenz; i ++, insert ++){
                for(j = 0; j < p2; j ++){
                    result[p++] = insert;
                }
            }
        }
        if(p3 == 2){//������� 
            insert += lenz - 2;
            for(i = 1; i < lenz; i ++, insert --){
                for(j = 0; j < p2; j ++){
                    result[p++] = insert;
                }
            }
        }
    }
}
int main(){
    int i;
    scanf("%d%d%d\n%s",&p1,&p2,&p3,s);//¼������ 
    len = strlen(s);//�õ�������ַ����ĳ��� 
    for(i=0; i<len; i++){//�ų�����Ҫ������� 
        if(s[i] != '-' || !(('0'<=s[i-1] && s[i+1]<='9') || ('a'<=s[i-1] && s[i+1]<='z'))){
            result[p++] = s[i];
        }else{
            if(s[i+1] > s[i-1]){//��������Ҫ��� 
                operate(i);//���� 
            }else{//����������Ҳ������� 
                result[p++] = s[i];
            }
        }
    }
    printf("%s", result);//������ 
    return 0;
}
