#include<stdio.h> 
int main(){
	int i,N,a[100];
	int answer=0;//������
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	while(1){
		//��С���ѵ��ǹ�����ȣ����� 
	    for(i=1;i<N;i++)  
	    {  
	        if(a[i]!=a[0])  
	            break;
	    }
	    if(i==N)//��鵽���һλ������ 
	    	break;
	    /*�ָ����ֱ�һ��*/
	    int num=a[0];
	    for(i=0;i<N-1;i++){
	    	a[i] = (a[i]+a[i+1])/2;
		}
		a[i]=(a[i]+num)/2;
		/*��������Ϊż��*/
		for(i=0;i<N;i++){
			if(a[i]%2!=0){
				a[i]++;
				answer++;//���������� 
			}
		}
	}
	printf("%d",answer);
}
