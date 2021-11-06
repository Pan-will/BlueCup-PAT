/*
思路：
	a、b、c、d、e用数组表示,置初值为0表都假，循环，依次设a-e为真话。
	注意，每次循环时，记得将上一个假设清0. 
*/
#include<stdio.h>
#include<string.h>
int main(){
	int a[5];//分别表示五个红领巾 
	for(int i=0;i<5;i++){
		memset(a,0,sizeof(a));//每个循环开始将数组清0 
		int sum=0;//表示说真话的人数,初始为0 
		a[i]=1;
		if(a[0]==0 && a[4]==0) sum++;//a说的话
		if(a[2]==1 || a[4]==1) sum++;//b说的话
		if(a[2]==1 || a[3]==1) sum++;//c说的话
		if(a[1]==0 && a[2]==0) sum++;//d说的话
		if(a[4]==0) sum++;//e说的话
		if(sum==2){
			printf("%c ",'A'+i);
		}
	}
}
