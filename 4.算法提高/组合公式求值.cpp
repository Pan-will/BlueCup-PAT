#include<stdio.h>
long long jiecheng(long long n){/*µÝ¹éÇó½×³Ëº¯Êý*/ 
	if(n==0 || n==1) return 1;
	return n*jiecheng(n-1);
}
 
long long zuhe(long long n,long long m){
	if(n==m){
		return 1;
	}else if(m==1){
		return n;
	}else if(m==n-1){
		return n;
	}else{
		long long fenmu=1;
		long long fenzi=1;
		fenmu = jiecheng(m);
		for(long long i=0;i<m;i++){
			fenzi *= n;
			n--;
		}
		return fenzi/fenmu;
	}
}
/*Çói^3*/
long long cimi(long long di){
	return di*di*di;
}

int main(){
	long long n,m;
	long long one=0,two=0,three=0;
	long long sum=0;
	scanf("%lld%lld",&n,&m);
	for(long long i=0;i<=n;i++){
	    one = zuhe(n,i);
	    two = zuhe(n,m);
	    three = cimi(i);
	    sum=sum+one*two*three;  
	}   
	printf("%lld",sum%987654321);
	return 0;
} 
