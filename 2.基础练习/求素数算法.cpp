#include<stdio.h> 
#include<math.h>
//��ӡ1~200֮�������
main(){
	int m,i,k,h=0,leap=1;
	for(m=1;m<=200;m++)
	{ 
		k=sqrt(m+1);
		for(i=2;i<=k;i++)
			if(m%i==0)
			{
				leap=0;
				break;
			}
		if(leap) 
		{
			printf("%-4d",m);
			h++; //��ӡ�������� 
			if(h%10==0)
				printf("\n");
		}
		leap=1;
	}
	printf("\nThe total is %d",h); //��ӡ��������
}
