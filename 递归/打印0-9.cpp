/*递归学习1:打印数字0-9*/
#include<stdio.h> 
void Dayin(int a,int b);
int main(){
	Dayin(0,9);
}
void Dayin(int begin,int end){
	if(begin>end) return;//递归出口 
	printf("%d\n",begin);
	Dayin(begin+1,end);
}
