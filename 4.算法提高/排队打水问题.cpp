/*˼·��
	��n���˰�������ʱ���С�����˳�����η���.
*/
#include<stdio.h>  
void paixu(int a[],int len){
	for(int i=0;i<len-1;i++){
		for(int j=0;j<len-1-i;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main(){  
    int n,m;//n���ˣ�m��ˮ��ͷ
    int sum=0;//��С�ĵȴ�ʱ��֮��
	scanf("%d%d",&n,&m);
	getchar();//������
	int time[n];
    for(int i=0;i<n;i++)
		scanf("%d",&time[i]);
    paixu(time,n);//����ʱ�������� 
    for(int i=1;i<n/m;i++){  
        for(int j=0;j<i*m;j++)
        	sum+=time[j];//�ۼ�ʱ��   
   	}  
    for(int i=n/m*m;i<n;i++){  
        for(int j=i%m;j<n/m*m;j+=m)
         	sum+=time[j];
    }
	printf("%d",sum);
    return 0;     
}
