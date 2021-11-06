#include<stdio.h>
#include<string.h>
int main() {
	/*将乘数以字符串的形式输入*/
    char numberN[10000], numberM[10000];
    scanf("%s",&numberN);
    scanf("%s",&numberM);
    /*得出乘数的位数*/
    int n = strlen(numberN);
	int m = strlen(numberM);
    int a[n],b[m];//存放乘数每位数字的数组 
    int i,j;
    /*字符转为数字 */
    for(i=0,j=n-1; i<n; i++,j--){
        a[i] = numberN[j] - '0';//低位至高位存放 
    }
    for(i=0,j=m-1; i<m; i++,j--){
        b[i] = numberM[j] - '0';
    }
    /*定义结果数组并赋初值*/ 
    int c[3000]={0};

    /*运算:a[0] * b[0] = c[0]; a[0] * b[1] + a[1] * b[0] = c[1]···*/ 
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i + j] += a[i] * b[j];
        }
    }
    /*处理进位*/
    for (i = 0; i < n + m; i++) {
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    /*用一个for循环确定结果的位数*/
    for (j = 2999; j > 0; j--) {
        if (c[j] != 0)
        break;
    }
	/*将结果按顺序输出*/
    for (i = j; i >= 0; i--) {
    	printf("%d", c[i]);
    }
    return 0;
}
