#include<stdio.h>
int main(){
	int a,b,i;
	int state;//״̬ 
	int c;//��¼��ǰ��ֵ 
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		state=1;
		for(int j=2;j<i;j++)
			if(i%j==0){  //����������stateΪ0 
                state=0;  
                break;  
            }  
		if(state==1){//��Ϊ���� 
			printf("%d=%d\n",i,i);
		}else if(state==0){//��������
			printf("%d=",i);
			int j=2;
			c=i;
			while(1){
				while(c%j==0){
					printf("%d",j);
					c=c/j;
					if(c!=1)
						printf("*");
				}
				if(c==1){
					printf("\n");
					break;
				}
				j++;
			}
		}
	}
}
