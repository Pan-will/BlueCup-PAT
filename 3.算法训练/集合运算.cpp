/*
	B��A�е��༯:��ʾA����B��û�е�Ԫ�ء� 
*/
#include<stdio.h>
#include<string.h>
#define max 1000
int jiao[max]={0},bing[max+max]={0},yu[max]={0},all[max+max]={0};//�ֱ�������������༯���ͼ� 
int lena,lenb;//a��b����ĳ��� 
void MPup(int a[],int len){//ð������ 
	for(int i=0; i<len-1; i++){
		for(int j=0; j<len-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
void showjiao(int all[],int len){
	int index=0;//�±� 
	for(int i=0;i<len;i++){
		if(all[i+1] == all[i]){//�����ǰ������Ԫ�غ�ǰһ��Ԫ�����
			jiao[index++] = all[i];//�浽bing�� 
		}
	}
	for(int i=0;i<index;i++){
		printf("%d ",jiao[i]);
	}
}
void showbing(int all[],int len){//�󲢼� 
	int index=1;//�±� 
	bing[0] = all[0];
	for(int i=1;i<len;i++){
		if(all[i] != all[i-1]){//�����ǰ������Ԫ�غ�ǰһ��Ԫ�ز����
			bing[index++] = all[i];//�浽bing�� 
		}
	}
	for(int i=0;i<index;i++){
		printf("%d ",bing[i]);
	}
}
void showyu(int a[],int b[]){
	int index=0;//������   
    for(int i=0;i<lena;i++){  
        int count=0;
        for(int j=0;j<lenb;j++)  
            if(a[i]!=b[j])  
                count++;  
        if(count==lenb)
            yu[index++]=a[i];  
    }  
	for(int i=0;i<index;i++){
		printf("%d ",yu[i]);
	}
}
int main(){
	scanf("%d",&lena);
	int a[lena];
	for(int i=0;i<lena;i++){
		scanf("%d",&a[i]);
		all[i]=a[i];
	}
	MPup(a,lena);//a���� 
	scanf("%d",&lenb);
	int b[lenb];
	for(int i=0;i<lenb;i++){
		scanf("%d",&b[i]);
		all[lena+i]=b[i];
	}
	MPup(b,lenb);//b���� 
	MPup(all,lena+lenb);//�ͼ����� 
	showjiao(all,lena+lenb);//�󽻼� 
	printf("\n");
	showbing(all,lena+lenb);//�󲢼� 
	printf("\n");
	showyu(a,b);//���༯
	return 0;
}
