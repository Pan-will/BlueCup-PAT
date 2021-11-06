/*
递归思路：
	当数组a和b对应位置字符相同时,则直接求解下一个位置；
						  否则，取两种情况中的较大数值。 
*/
#include<stdio.h>
#include<string.h>
char a[101],b[101];//定义字符串数组
int lena,lenb,lenz=0;
int maxlong(int i,int j){
	if(i>=lena || j>=lenb) return 0;//出口 
	if(a[i] == b[j]) return 1+maxlong(i+1,j+1);//直接求解下一个位置
	else //取两种情况中的较大数值
		return maxlong(i+1,j) > maxlong(i,j+1) ? maxlong(i+1,j) : maxlong(i,j+1);
}
int main(){
	scanf("%s\n%s",&a,&b);//输入字符串
    lena=strlen(a);//获取字符串长度 
	lenb=strlen(b);
	printf("%d",maxlong(0,0));//输出子串长度
	return 0; 
}          
