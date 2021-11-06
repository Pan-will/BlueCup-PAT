#include<stdio.h> 
int main(){
	int n,i,j,sum;
	char str[10];//定义字符数组，长度为10 
	scanf("%d",&n);
	for(i=10000;i<1000000;i++){
		/*将当前的i值转成字符赋给str,即str[5]="10000"*/
		sprintf(str, "%d", i);
		sum = 0;//初始化sum 
		for(j = 0; str[j]; j++)
		/*字符和数字是有区别的。要将字符变成数字，需要减去一个字符0*/
			sum += str[j] - '0';
		if(sum != n)
			continue;
		if(i < 100000 && str[0] == str[4] && str[1] == str[3])
			printf("%d\n", i);
		else if(i >= 100000 && str[0] == str[5] && str[1] == str[4] && str[2] == str[3])
			printf("%d\n", i);
	}
	return 0;
}
