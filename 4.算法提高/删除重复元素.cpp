/*
思路：
	将字符串存入字符数组a中,设将值拷贝给数组b，遍历b的每个元
素，与a中的每个元素比较，有相同则b中对应元素置为-1。
输出b中不为-1的元素。 
*/ 
#include<stdio.h>
#include<string.h>
char a[100],b[100];
void Del(int index,int len){
	for(int i=0;i<len;i++){
		if(index == i) continue;//下标相同即同一个元素不比较，进入下一个循环 
		if(b[index] == a[i]) b[index]=-1;//有相同元素，置值为 -1 
	}
}
int main(){
	gets(a);
	memcpy(b,a,sizeof(a));//将a的元素拷贝给b 
	int len=strlen(a);//求a的长度
	for(int i=0;i<len;i++){
		Del(i,len);
	}
	for(int i=0;i<len;i++){//输出b中非-1的元素 
		if(b[i]!=-1){
			printf("%c",b[i]);
		}
	}
	return 0;
} 
