/*���ܣ�¼��n��ѧ���ɼ���д���ļ��в�����Ļ����ʾ*/
//fprintf()��������д��fpָ����ļ���
//fscanf()�������ݴ�fpָ����ļ��ж������ݣ� 
/*
5
xiaoyi 1001 66
xiaoer 1002 67
xiaosan 1003 68
xiaosi 1004 69
xiaowu 1005 70
*/
#include<stdio.h>
int main(){
	FILE *fp;
	long num;
	int i,n,score;
	char name[30];
	fp = fopen("bbb.txt","w");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %ld %d",&name,&num,&score);
		fprintf(fp,"%s %ld %d\n",name,num,score);
	}
	fclose(fp);
	printf("\n�ո�¼�������Ϊ��\n\n"); 
	fp = fopen("bbb.txt","r");
	for(i=0;i<n;i++){
		fscanf(fp,"%s %ld %d",&name,&num,&score);
		printf("%s %ld %d\n",name,num,score);
	}
	fclose(fp);
	return 0;
}
