#include<stdio.h>
#include<stdlib.h>
#include<vector>
char* substring(char* ch,int pos,int length)  
{  
    char* pch=ch;//定义一个字符指针，指向传递进来的ch地址。  
    char* subch=(char*)calloc(sizeof(char),length+1);//通过calloc来分配一个length长度的字符数组，返回的是字符指针。  
    int i;//只有在C99下for循环中才可以声明变量，这里写在外面，提高兼容性。  
    pch=pch+pos;//是pch指针指向pos位置。  
    for(i=0;i<length;i++){  
        subch[i]=*(pch++);//循环遍历赋值数组。  
    }  
    subch[length]='\0';//加上字符串结束符。  
    return subch;      //返回分配的字符数组地址。  
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
