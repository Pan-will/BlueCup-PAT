#include<stdio.h> 
int main(){
	int n,i,j,sum;
	char str[10];//�����ַ����飬����Ϊ10 
	scanf("%d",&n);
	for(i=10000;i<1000000;i++){
		/*����ǰ��iֵת���ַ�����str,��str[5]="10000"*/
		sprintf(str, "%d", i);
		sum = 0;//��ʼ��sum 
		for(j = 0; str[j]; j++)
		/*�ַ���������������ġ�Ҫ���ַ�������֣���Ҫ��ȥһ���ַ�0*/
			sum += str[j] - '0';
		if(sum != n)
			continue;
		if(i < 100000 && str[0] == str[4] && str[1] == str[3])
			printf("%d\n", i);
		else if(i >= 100000 && str[0] == str[5] && str[1] == str[4] && str[2] == str[3])
			printf("%d\n", i);
	}
	return 0;
}
