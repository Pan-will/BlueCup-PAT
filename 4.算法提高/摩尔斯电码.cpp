#include<stdio.h>
#include<string.h>
int main(){
    char str[100000];
    char found[33]={"11etianmsurwdkgohvf1l1p1b1cyqz11"};/*������������*/
    int cur,i,a;
    scanf("%s",str);
    for(cur=0,i=1;cur<strlen(str);cur++){/*����������������ַ�*/
        switch(str[cur]){/*������*/
            case '*':
				i*=2;
				break;
            case '-':
				i=i*2+1;
				break;
            case '|':
				printf("%c",found[i]);
				i=1;
				break;
        }
    }
    printf("%c",found[i]);/*�������һ����ĸû����|�������������ڽ���ֱ�����*/
    return 0;
}
