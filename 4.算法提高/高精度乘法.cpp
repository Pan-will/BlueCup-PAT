#include<stdio.h>
#include<string.h>
int main() {
	/*���������ַ�������ʽ����*/
    char numberN[10000], numberM[10000];
    scanf("%s",&numberN);
    scanf("%s",&numberM);
    /*�ó�������λ��*/
    int n = strlen(numberN);
	int m = strlen(numberM);
    int a[n],b[m];//��ų���ÿλ���ֵ����� 
    int i,j;
    /*�ַ�תΪ���� */
    for(i=0,j=n-1; i<n; i++,j--){
        a[i] = numberN[j] - '0';//��λ����λ��� 
    }
    for(i=0,j=m-1; i<m; i++,j--){
        b[i] = numberM[j] - '0';
    }
    /*���������鲢����ֵ*/ 
    int c[3000]={0};

    /*����:a[0] * b[0] = c[0]; a[0] * b[1] + a[1] * b[0] = c[1]������*/ 
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i + j] += a[i] * b[j];
        }
    }
    /*�����λ*/
    for (i = 0; i < n + m; i++) {
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    /*��һ��forѭ��ȷ�������λ��*/
    for (j = 2999; j > 0; j--) {
        if (c[j] != 0)
        break;
    }
	/*�������˳�����*/
    for (i = j; i >= 0; i--) {
    	printf("%d", c[i]);
    }
    return 0;
}
