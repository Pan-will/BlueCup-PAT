#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char s[20];
	int i = 0, t = 0, temp = 0;
	scanf("%s",s);
	t = strlen(s);//得到字符串长度 
	long long answer=0;
	for(int i=0;i<t;i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i]=int(s[i]-'A')+10+'0';
		answer+=((s[i]-'0')*(pow(16,t-1-i)));
	}
	printf("%lld",answer);
	return 0;
}
