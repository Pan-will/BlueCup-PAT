/*
Anagrams����
	ÿһ��Ӣ����ĸ�������ִ�Сд�������ֵĴ���������ͬ�ġ�
Ҫ�������������ʣ��ж������������Ƿ���� Anagrams���� 
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char word1[100],word2[100];
	scanf("%s%s",&word1, &word2);
	int flag = 1;
	int w1 = strlen(word1);
	int w2 = strlen(word2);
	if(w1 = w2){
		for(int i=0;i<w1;i++){//ȫ��תΪСд��ĸ 
			word1[i]=tolower(word1[i]);
			word2[i]=tolower(word2[i]);
		}
		//����ĸ������ 
//		sort(word1[0],word1[79]);
//        sort(word2[0],word2[79]);
        for(int i=0;i<w1;i++){
        	if(word1!=word2){
        		flag=0;
        		break;
			}
		}
		if(flag){
			printf("Y");
		}else {
			printf("N");
		}
	}
	else{
		printf("N");
	}
	return 0;
}
