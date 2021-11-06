/*思路：
	将n个人按照所需时间从小到大的顺序依次分配.
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
    int n,m;//n个人，m个水龙头
    int sum=0;//最小的等待时间之和
	scanf("%d%d",&n,&m);
	getchar();//处理换行
	int time[n];
    for(int i=0;i<n;i++)
		scanf("%d",&time[i]);
    paixu(time,n);//所需时间升序排 
    for(int i=1;i<n/m;i++){  
        for(int j=0;j<i*m;j++)
        	sum+=time[j];//累加时间   
   	}  
    for(int i=n/m*m;i<n;i++){  
        for(int j=i%m;j<n/m*m;j+=m)
         	sum+=time[j];
    }
	printf("%d",sum);
    return 0;     
}
