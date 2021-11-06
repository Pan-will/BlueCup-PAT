/*
	原则：
		先排除不用填充的情况;
		在由p1,p2求出要填充的字符串(也可以放在数组中);
		再由p3来判断是否需要倒置填充. 
*/ 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define maxmap 10000 
int p1,p2,p3;
int index;//表索引 
int lenz=0;//存放填充字符串的长度 
char str[maxmap],result[maxmap];
int main(){
	scanf("%d%d%d",&p1,&p2,&p3);
	scanf("%s",&str);//录入字符串 
	int len = strlen(str);//获取字符串长度 
	for(int i=0;i<len;i++){
		/*
		不需要填充的情况 :
			-在首尾,不用填充;
			-前后分别为数字和字母,不用填充; 
			-前后是连续的，不用填充.
		*/
		if(str[i] != '-' || !((str[i-1]>='0' && str[i+1]<='9') || (str[i-1]>='a' && str[i+1]<='z'))){
			result[index++]=str[i];
		}
		/*-前后差值大于25，说明分别为字母和数字，不需要填充*/
		else if(str[i+1]-str[i-1]>25){
			result[index++]=str[i];
		}
		else if(str[i+1]-str[i-1]<=0){
			result[index++]=str[i];
		}
		else{
			if(str[i-1]<=str[i]){//原字符不是正序也不需要填充的情况
				result[index++] = str[i];
			}
			else {//原字符是正序则需要填充 
				char insert;//表示填充的字符 
				if(p1==2 && str[i-1]>='a' && str[i-1]<='z'){//p1=2,填充大写 
					insert = str[i-1] - ('a'-'A')+1;
				}else{//否则按顺序填充就行 
					insert = str[i-1]+1;
				}
				if(p1==3){//p1=3,填充 * 
					insert = '*';
				}
				lenz = str[i+1]-str[i-1];//获得填充字符串的长度
				if(insert == '*'){//若填充字符为* 
					for(int k=1;k<lenz;k++){
						for(int j=0;j<p2;j++){//填充p2个字符 
							result[index++] = insert;
						}
					}
				}else{
					if(p3==2){//逆序填充 
						insert+=lenz-2;
						for(int k=1;k<lenz;k++,insert--){
							for(int j=0;j<p2;j++){
								result[index++] = insert;
							}
						}
					}
					if(p3==1){//原序填充 
						for(int k=1;k<lenz;k++,insert++){
							for(int j=0;j<p2;j++){
								result[index++] = insert;
							}
						}
					}
				}
			}
		}
	}
	printf("%s",result);
	return 0;
}
