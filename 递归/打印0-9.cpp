/*�ݹ�ѧϰ1:��ӡ����0-9*/
#include<stdio.h> 
void Dayin(int a,int b);
int main(){
	Dayin(0,9);
}
void Dayin(int begin,int end){
	if(begin>end) return;//�ݹ���� 
	printf("%d\n",begin);
	Dayin(begin+1,end);
}
