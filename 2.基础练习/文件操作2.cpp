#include<stdio.h>
/*FILE������stdio���еģ������ļ�ʱֻ�ܴ�д*/
int main(){
	FILE *fp;//�����ļ����͵�ָ����� 
	char fname[30];
	char outchar;
	
	printf("������Ҫ��ȡ���ļ�����");
	scanf("%s",fname);
	fp = fopen(fname,"r");
	if(fp != NULL){
		while((outchar=fgetc(fp)) != EOF)//����ļ��е������ַ� 
		putchar(outchar);
	}else
		printf("\n%s�ļ�������",fname);
	fclose(fp);
	return 0;
}
