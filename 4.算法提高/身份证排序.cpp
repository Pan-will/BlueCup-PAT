#include<stdio.h>
#include<stdlib.h>
#include<vector>
char* substring(char* ch,int pos,int length)  
{  
    char* pch=ch;//����һ���ַ�ָ�룬ָ�򴫵ݽ�����ch��ַ��  
    char* subch=(char*)calloc(sizeof(char),length+1);//ͨ��calloc������һ��length���ȵ��ַ����飬���ص����ַ�ָ�롣  
    int i;//ֻ����C99��forѭ���вſ�����������������д�����棬��߼����ԡ�  
    pch=pch+pos;//��pchָ��ָ��posλ�á�  
    for(i=0;i<length;i++){  
        subch[i]=*(pch++);//ѭ��������ֵ���顣  
    }  
    subch[length]='\0';//�����ַ�����������  
    return subch;      //���ط�����ַ������ַ��  
}
int cmp(char a[],char b[]){
	char bira[] = substr(a,6,8);
	char birb = substr(b,6,8);
	if(bira!=birb) return bira>birb;
	else return a>b;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	char a[n];
	vector<char> a(n);
	for(int i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	sort(a.begin(),v.end,cmp);
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
}
