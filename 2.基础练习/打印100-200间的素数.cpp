#include<stdio.h> 
#include<math.h>
int main(){
	int m,i,k,h=0,leap=1;
	for(m=1;m<=200;m++){
		k=sqrt(m+1);//ֻ������ȷ��ѭ�������� 
		for(i=2;i<=k;i++)
			if(m%i == 0){
				leap=0;
				break;
			}
		if(leap==1){ //����ʡ��дΪ��if(leap)
			printf("%d\t",m);
			h++;//��¼������� 
			if(h%10 == 0)
				printf("\n");//һ�����10���� 
		}
		leap = 1;
	}
	printf("\n\nThe Total is %d",h);
}
