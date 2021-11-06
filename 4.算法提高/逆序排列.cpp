 #include<stdio.h>
 int main(){
 	int a[20];
 	int i=0;
 	while(~scanf("%d",&a[i++])){ 
 		if(a[i-1]==0)//若当前输出值为0，则停止输入 
 			break;
	}
 	for(int j=i-2;j>=0;j--)//逆序输出 
		printf("%d ",a[j]);
	printf("\n");
	return 0;
 }
