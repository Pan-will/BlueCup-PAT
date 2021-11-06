/*
思路：
	a、b、c、d、e、f用数组表示,置初值为0表都假，循环，依次设a-f为真话。
	注意，每次循环时，记得将上一个假设清0. 
*/
#include<stdio.h>
#include<string.h>
int main(){
	int a[6];//分别表示6个嫌疑人 
	for(int i=0;i<6;i++){
		memset(a,0,sizeof(a));//每个循环开始将数组清0 
		int sum=0;//表示说真话的人数,初始为0 
		a[i]=1;
		if(a[0]==1) sum++;//a说的话
		if(a[0]==0 || a[2]==0) sum++;//b说的话
		if(a[0]==1 && a[3]==1) sum++;//c说的话
		if(a[2]==0 && a[5]==0) sum++;//d说的话
		if(a[0]==1 && a[3]==1) sum++;//e说的话
		if(a[5]==0) sum++;//f说的话
		if(sum==3){
			printf("%c\n",'A'+i);
		}
	}
}
