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
    int n,r;//n���ˣ�r��ˮ��ͷ
    int sum=0;//��С�ĵȴ�ʱ��֮��
	scanf("%d%d",&n,&r);
	getchar();//������
	int time[n];
    for(int i=0;i<n;i++)
		scanf("%d",&time[i]);
    paixu(time,n);//����ʱ�������� 
    for(int i=1;i<n/r;i++){  
        for(int j=0;j<i*r;j++)
        	sum+=time[j];//�ۼ�ʱ��
   	}  
    for(int i=n/r*r;i<n;i++){  
        for(int j=i%r;j<n/r*r;j+=r)
         	sum+=time[j];
    }
	printf("%d",sum);
    return 0;     
}
