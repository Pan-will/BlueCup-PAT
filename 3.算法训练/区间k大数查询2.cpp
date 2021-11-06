#include<stdio.h>
int main(){
	int N,m;//N表示序列长度 ,m示询问的个数 
	int l,r,K;//表示查询数列从第l个到第r个数之间 ，第K大的数是多少 
	scanf("%d",&N);
	int a[N],b[N],flag[N];/*数组b用来存放a中从第l个到第r个数，即查询区间*/
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		/*记录原序*/
		flag[i] = a[i];
	}
	scanf("%d",&m);//录入询问个数 
	int result[m];//result数组用来存放查询结果:应该用m个元素 
	for(int s=0;s<m;s++){
		/*输入查询数列从第l个到第r个数之间 ，第K大的数*/
		scanf("%d%d%d", &l, &r, &K);
		/*把a数组中从第l个到第r个数赋给数组b*/ 
		for(int j = 0, i = l-1; i < r; i++){
	        b[j++] = a[i];
	    }
	    /*将b数组冒泡降序*/ 
	    for(int p=0; p<r-l+1-1; p++){
			for(int q=0; q<r-l+1-1-p; q++){
				if(b[q]<b[q+1]){
					int t = b[q];
					b[q] = b[q+1];
					b[q+1] = t;
				}
			}
		}
		/*按条件将答案存入数组*/
		result[s] = b[K-1];
		/*a数组返回原序*/
		for(int i=0;i<N;i++){
			a[i] = flag[i];
		}
	}
	/*按条件输出*/ 
	for(int j=0;j<m;j++){
		printf("%d\n",result[j]);
	}
}
