#include<stdio.h>
#include<string.h>
#include<math.h>
int n;
int date[1000];
int gcd(int a, int b){  
    if(a%b==0) return b;  
    return gcd(b, a%b);  
}
int getmod1(){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*date[i]%10;
	}
	return ans;
}
void getmod2(){
	int ans = 10;
	for(int i=1;ans!=1&&i<=n;i++){
		int temp = gcd(ans,date[i]);
		date[i] = date[i]/temp;
		ans = ans/temp;
	}
}
int main(){
	scanf("%d",&n);
	if(n==0){
		printf("1");
		return 0;
	}
	for(int i=1;i<=n;i++){
		date[i]=i;
	}
	while(1){//��ֹͣѭ��֪���������������� 
		if(getmod1()){//�����ұߵ����ֲ�Ϊ0����������ֲ����� 
			printf("%d",getmod1()); 
			return 0;
		}else{//�����ұ�����Ϊ0,��������Ѱ�Ҳ�Ϊ0������ 
			getmod2();
		}
	}
	return 0;
}
