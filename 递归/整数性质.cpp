/*�����Ļ���������Ӧ��*/
#include<stdio.h>
int gcd(int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	/* 
	//�������� 
	for(int i=a;i>=1;i--){
		if(a%i==0 && b%i==0){
			printf("%d",i);
			break;
		}
	}
	*/
	/* 
	//շת����� ,while�� 
	while(a!=0){
		int t = a;
		a = b%a;
		b = t;
	}
	printf("%d",b);
	*/
	/*
	 //շת����� ,�ݹ鷨 
	 int t = gcd(a,b);
	 printf("%d",t);
	 */
	//��С������
	/*
		��С������ = a*b/���Լ�� 
	*/ 
}
int gcd(int a,int b){
	printf("%d %d\n",a,b);
	if(a==0) return b;
	return gcd(b%a,a);
}
