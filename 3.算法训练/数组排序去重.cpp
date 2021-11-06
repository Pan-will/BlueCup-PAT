#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	/*冒泡升序*/
	for(int i=0; i<10-1; i++){
		for(int j=0; j<10-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	int index=1;//下标 
	int b[10];//存放不重复元素的数组
	b[0] = a[0];
	for(int i=1;i<10;i++){
		if(a[i] != a[i-1]){//如果当前遍历的元素和前一个元素不相等
			b[index++] = a[i];//存到b中 
		}
	}
	for(int i=0;i<index;i++){
		printf("%d ",b[i]);
	}
}
