#include<stdio.h>
#include<string.h>
int main(){
    char str[100000];
    char found[33]={"11etianmsurwdkgohvf1l1p1b1cyqz11"};/*保存了整颗树*/
    int cur,i,a;
    scanf("%s",str);
    for(cur=0,i=1;cur<strlen(str);cur++){/*遍历完输入的所有字符*/
        switch(str[cur]){/*搜索树*/
            case '*':
				i*=2;
				break;
            case '-':
				i=i*2+1;
				break;
            case '|':
				printf("%c",found[i]);
				i=1;
				break;
        }
    }
    printf("%c",found[i]);/*由于最后一组字母没有以|结束，这里用于将其直接输出*/
    return 0;
}
