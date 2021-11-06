#include<stdio.h>
#include<string.h>
void a1(int num[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(num[i]%5 == 0 && num[i]%2 == 0){
			sum += num[i];
		}
	}
	if(sum == 0) printf("N ");
	else printf("%d ",sum);
}
/*注意点1:A2的和最后可能是0
	所以不能通过判断结果是否为0判断是否输出N */
void a2(int num[],int n){
	int leap=1; 
	int sum=0;
	int item=0;//记录除5余1的个数 
	for(int i=0;i<n;i++){
		if(num[i]%5 == 1){
			item++;
			if(leap == 0){
				sum -= num[i];
				leap = 1;
				continue;
			}
			if(leap == 1){
				sum += num[i];
				leap = 0;
				continue;
			}
		}
	}
	if(item == 0) printf("N ");
	else printf("%d ",sum);
}

void a3(int num[],int n){
	int number=0;
	for(int i=0;i<n;i++)
		if(num[i] % 5 == 2)
			number++;
	if(number == 0) printf("N ");
	else printf("%d ",number);
}

void a4(int num[],int n){
	float sum=0;
	int item=0;
	for(int i=0;i<n;i++){
		if(num[i]%5 == 3){
			sum += num[i];
			item+=1;
		}
	}
	if(sum == 0) printf("N ");
	else printf("%.1lf ",1.0*sum/item);
}

void a5(int num[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(num[i] % 5 == 4 && num[i]>max){
			max = num[i];
		}
	}
	if(max == 0) printf("N");
	else printf("%d",max);
}

main(){
	int n;
	scanf("%d",&n);
	int num[2000];
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	a1(num,n);
	a2(num,n);
	a3(num,n);
	a4(num,n);
	a5(num,n);
}
