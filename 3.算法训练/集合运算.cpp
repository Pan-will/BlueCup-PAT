/*
	B在A中的余集:表示A中有B中没有的元素。 
*/
#include<stdio.h>
#include<string.h>
#define max 1000
int jiao[max]={0},bing[max+max]={0},yu[max]={0},all[max+max]={0};//分别表交集、并集、余集、和集 
int lena,lenb;//a和b数组的长度 
void MPup(int a[],int len){//冒泡升序 
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
	int index=0;//下标 
	for(int i=0;i<len;i++){
		if(all[i+1] == all[i]){//如果当前遍历的元素和前一个元素相等
			jiao[index++] = all[i];//存到bing中 
		}
	}
	for(int i=0;i<index;i++){
		printf("%d ",jiao[i]);
	}
}
void showbing(int all[],int len){//求并集 
	int index=1;//下标 
	bing[0] = all[0];
	for(int i=1;i<len;i++){
		if(all[i] != all[i-1]){//如果当前遍历的元素和前一个元素不相等
			bing[index++] = all[i];//存到bing中 
		}
	}
	for(int i=0;i<index;i++){
		printf("%d ",bing[i]);
	}
}
void showyu(int a[],int b[]){
	int index=0;//表索引   
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
	MPup(a,lena);//a排序 
	scanf("%d",&lenb);
	int b[lenb];
	for(int i=0;i<lenb;i++){
		scanf("%d",&b[i]);
		all[lena+i]=b[i];
	}
	MPup(b,lenb);//b排序 
	MPup(all,lena+lenb);//和集排序 
	showjiao(all,lena+lenb);//求交集 
	printf("\n");
	showbing(all,lena+lenb);//求并集 
	printf("\n");
	showyu(a,b);//求余集
	return 0;
}
