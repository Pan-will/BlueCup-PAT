/*
	ԭ��
		���ų������������;
		����p1,p2���Ҫ�����ַ���(Ҳ���Է���������);
		����p3���ж��Ƿ���Ҫ�������. 
*/ 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxmap 10000 
int p1,p2,p3;
int index;//������ 
int lenz=0;//�������ַ����ĳ��� 
char str[maxmap],result[maxmap];
int main(){
	scanf("%d%d%d",&p1,&p2,&p3);
	scanf("%s",&str);//¼���ַ��� 
	int len = strlen(str);//��ȡ�ַ������� 
	for(int i=0;i<len;i++){
		/*
		����Ҫ������� :
			-����β,�������;
			-ǰ��ֱ�Ϊ���ֺ���ĸ,�������; 
			-ǰ���������ģ��������.
		*/
		if(str[i] != '-' || !((str[i-1]>='0' && str[i+1]<='9') || (str[i-1]>='a' && str[i+1]<='z'))){
			result[index++]=str[i];
		}
		/*-ǰ���ֵ����25��˵���ֱ�Ϊ��ĸ�����֣�����Ҫ���*/
		else if(str[i+1]-str[i-1]>25){
			result[index++]=str[i];
		}
		else if(str[i+1]-str[i-1]<=0){
			result[index++]=str[i];
		}
		else{
			if(str[i-1]<=str[i]){//ԭ�ַ���������Ҳ����Ҫ�������
				result[index++] = str[i];
			}
			else {//ԭ�ַ�����������Ҫ��� 
				char insert;//��ʾ�����ַ� 
				if(p1==2 && str[i-1]>='a' && str[i-1]<='z'){//p1=2,����д 
					insert = str[i-1] - ('a'-'A')+1;
				}else{//����˳�������� 
					insert = str[i-1]+1;
				}
				if(p1==3){//p1=3,��� * 
					insert = '*';
				}
				lenz = str[i+1]-str[i-1];//�������ַ����ĳ���
				if(insert == '*'){//������ַ�Ϊ* 
					for(int k=1;k<lenz;k++){
						for(int j=0;j<p2;j++){//���p2���ַ� 
							result[index++] = insert;
						}
					}
				}else{
					if(p3==2){//������� 
						insert+=lenz-2;
						for(int k=1;k<lenz;k++,insert--){
							for(int j=0;j<p2;j++){
								result[index++] = insert;
							}
						}
					}
					if(p3==1){//ԭ����� 
						for(int k=1;k<lenz;k++,insert++){
							for(int j=0;j<p2;j++){
								result[index++] = insert;
							}
						}
					}
				}
			}
		}
	}
	printf("%s",result);
	return 0;
}
