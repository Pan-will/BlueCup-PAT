/*
	思路：都转换成小写，在长度相等的情况下，
		  分别遍历记录下每个字母出现的次数。
		  最后比较各个数字是否相等。
	
	字符串数组长度：100 ——单词长度不会超过80。 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>//C语言转换大小写头文件 
int main(){
	char c1[100],c2[100];//定义字符串数组 
	int a[26],b[26];//记录出现次数 
	memset(a,0,sizeof(a));//赋初值0 
	memset(b,0,sizeof(b));
	scanf("%s%s",c1,c2);
	int len1,len2;
	len1=strlen(c1);//求字符串c1长度
	len2=strlen(c2);
    int i;
	if(len1 != len2){//长度不等则输出N 
		printf("N");
	}else{
		/*遍历c1*/
		for(i = 0; i < len1; i++){
//			str1[i] = tolower(c1[i]);//转换成小写 
			if(c1[i] == 'a'||c1[i] == 'A')
                a[0]++;
            else if(c1[i] == 'b'||c1[i] == 'B')
                a[1]++;
            else if(c1[i] == 'c'||c1[i] == 'C')
                a[2]++;
            else if(c1[i] == 'd'||c1[i] == 'D')
                a[3]++;
            else if(c1[i] == 'e'||c1[i] == 'E')
                a[4]++;
            else if(c1[i] == 'f'||c1[i] == 'F')
                a[5]++;
            else if(c1[i] == 'g'||c1[i] == 'G')
                a[6]++;
            else if(c1[i] == 'h'||c1[i] == 'H')
                a[7]++;
            else if(c1[i] == 'i'||c1[i] == 'I')
                a[8]++;
            else if(c1[i] == 'j'||c1[i] == 'J')
                a[9]++;
            else if(c1[i] == 'k'||c1[i] == 'K')
                a[10]++;
            else if(c1[i] == 'l'||c1[i] == 'L')
                a[11]++;
            else if(c1[i] == 'm'||c1[i] == 'M')
                a[12]++;
            else if(c1[i] == 'n'||c1[i] == 'N')
                a[13]++;
            else if(c1[i] == 'o'||c1[i] == 'O')
                a[14]++;
            else if(c1[i] == 'p'||c1[i] == 'P')
                a[15]++;
            else if(c1[i] == 'q'||c1[i] == 'Q')
                a[16]++;
            else if(c1[i] == 'r'||c1[i] == 'R')
                a[17]++;
            else if(c1[i] == 's'||c1[i] == 'S')
                a[18]++;
            else if(c1[i] == 't'||c1[i] == 'T')
                a[19]++;
            else if(c1[i] == 'u'||c1[i] == 'U')
                a[20]++;
            else if(c1[i] == 'v'||c1[i] == 'V')
                a[21]++;
            else if(c1[i] == 'w'||c1[i] == 'W')
                a[22]++;
            else if(c1[i] == 'x'||c1[i] == 'X')
                a[23]++;
            else if(c1[i] == 'y'||c1[i] == 'Y')
                a[24]++;
            else if(c1[i] == 'z'||c1[i] == 'Z')
                a[25]++;
		}

	    /*遍历c2*/
	    for(i = 0; i < len2; i++){
//	    	c2[i] = tolower(c2[i]);//转换为小写 
	    	if(c2[i] == 'a' || c2[i] == 'A')
                b[0]++;
            else if(c2[i] == 'b'||c2[i] == 'B')
                b[1]++;
            else if(c2[i] == 'c'||c2[i] == 'C')
                b[2]++;
            else if(c2[i] == 'd'||c2[i] == 'D')
                b[3]++;
            else if(c2[i] == 'e'||c2[i] == 'E')
                b[4]++;
            else if(c2[i] == 'f'||c2[i] == 'F')
                b[5]++;
            else if(c2[i] == 'g'||c2[i] == 'G')
                b[6]++;
            else if(c2[i] == 'h'||c2[i] == 'H')
                b[7]++;
            else if(c2[i] == 'i'||c2[i] == 'I')
                b[8]++;
            else if(c2[i] == 'j'||c2[i] == 'J')
                b[9]++;
            else if(c2[i] == 'k'||c2[i] == 'K')
                b[10]++;
            else if(c2[i] == 'l'||c2[i] == 'L')
                b[11]++;
            else if(c2[i] == 'm'||c2[i] == 'M')
                b[12]++;
            else if(c2[i] == 'n'||c2[i] == 'N')
                b[13]++;
            else if(c2[i] == 'o'||c2[i] == 'O')
                b[14]++;
            else if(c2[i] == 'p'||c2[i] == 'P')
                b[15]++;
            else if(c2[i] == 'q'||c2[i] == 'Q')
                b[16]++;
            else if(c2[i] == 'r'||c2[i] == 'R')
                b[17]++;
            else if(c2[i] == 's'||c2[i] == 'S')
                b[18]++;
            else if(c2[i] == 't'||c2[i] == 'T')
                b[19]++;
            else if(c2[i] == 'u'||c2[i] == 'U')
                b[20]++;
            else if(c2[i] == 'v'||c2[i] == 'V')
                b[21]++;
            else if(c2[i] == 'w'||c2[i] == 'W')
                b[22]++;
            else if(c2[i] == 'x'||c2[i] == 'X')
                b[23]++;
            else if(c2[i] == 'y'||c2[i] == 'Y')
                b[24]++;
            else if(c2[i] == 'z'||c2[i] == 'Z')
                b[25]++;
		}
		
		//比较a、b数组的元素是否相等，相等输出Y,否则输出N
	    for(i=0;i<26;i++){
	    	if(a[i] != b[i]){
	    		printf("N");
	    		break;
			}
		}
		if(i>=26){
			printf("Y");
		}
	}
	return 0;
}
