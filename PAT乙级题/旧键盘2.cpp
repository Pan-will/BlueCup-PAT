#include<stdio.h>
#include<string.h>
int main(){
	char s1[82];//正确的串 
	char s2[82];//输出的串 
	char sout[82];//坏的键 
	scanf("%s\n%s",s1, s2);  
	int count[200] = {0}; 
	//先把应该输出的下标位置值为1 
	for(int i=0;i<strlen(s1);i++){
		if(s1[i] >= 'a' && s1[i] <= 'z'){       
			count[s1[i]-32] = 1;
		}else{
			count[s1[i]] = 1;
		}
	}
	//再把实际输出的下标位置值为0 
	for(int i=0;i<strlen(s2);i++){
		if(s2[i] >= 'a' && s2[i] <= 'z'){ 
			count[s2[i] - 32] = 0;
		}else{
			count[s2[i]] = 0;
		}
	}
	//下标位大于0的，把字符赋给sout数组，且将相应下标位值置0 
	int j = 0;
	for(int i=0;i<strlen(s1);i++){
		if(s1[i] >= 'a' && s1[i] <= 'z' && count[s1[i]-32] > 0){              
			sout[j++] = (char)(s1[i] - 32);
			count[s1[i]-32] = 0;
		}else if(count[s1[i]] > 0){
			sout[j++] = s1[i];
			count[s1[i]] = 0;
		}
	}
	//遍历sout数组输出坏的键 
	for(int i=0; i<j; i++) { 
		printf("%c", sout[i]);
	}
	return 0;
}
