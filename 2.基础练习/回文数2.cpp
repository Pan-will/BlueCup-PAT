#include<stdio.h> 
int main(){
	int i,j;
	char str[10];
	for(i=1000;i<10000;i++){
		/*����ǰ��iֵת���ַ�����str,��str[5]="1000"*/
		sprintf(str, "%d", i);
		if(str[0] == str[3] && str[1] == str[2])
			printf("%d ", i);
	}
}
