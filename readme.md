		/*=================================*/
		/*		基础部分			*/
		/*=================================*/
一：

.CPP——C++文件；

.C——C文件

二：C语言中浮点型一般分为 float——f 单精度型、double——lf 双精度型、long double长精度型，单精度浮点型小数点后面有效数字为6~7位和双精度浮点型小数点后面有效数字为15~16位

三：char s[N]——for(int i=0;s[i];i++)：可以用s[i]进行循环。

四：if(h%10 == 0) printf("\n");	  //一行输出10个

五：for循环：比较条件当第一次进入循环时在i=0之后执行，以后先i++，再执行判断条件。

六：return 0——结束程序；break——跳出循环；continue：结束此次循环进行下一次循环。

七：字符和数字是有区别的。要将字符变成数字，需要减去一个字符0。

八：字符数组的输入输出可以有两种方法：
 	1：逐个字符输入、输出（%c）
 	2：整个字符串一次输入、输出（%s）
      用%s输出字符串时，printf函数中的输出项是字符数组名，不是数组元素名。
      如果一个字符数组中包含多个’\0’，则遇第一个’\0’时输出就结束。可以用scanf函数输入一个字符串，scanf函数中的输入项c是已定义的字符数组名，输入的字符串应短于已定义的字符数组的长度。
	  比如输入China：系统自动在China后面加一个’\0’。

九：关于二维数组的输入：其实并不存在真正的“二维”，只不过是编译器自动的将它一行一行的保存。所以，二维数组的输入只要用双重循环即可。

十：strlen  计算字符串里面一共有多少个字符；sizeof  计算字符串占的总内存空间。

十一：
while(scanf("%d",&n)!=EOF)——接下去有输入就继续进行循环，可以用来输入多组数据；
while(scanf("%d",&n)，n)——语句就是先输入一个整数赋值给n（表达式1），然后while括号里的值是n（表达式2），若n为真则进行while循环，n为0时则不做处理；
while(scanf("%d",&n)&&n!=0)——当输入n为0时则不进行处理，若n为0则进入循环。

十二：
memset(&a, 0, sizeof(struct customer))函数：
头文件：memory.h；
作用：给指定的内存区域赋值；
在该语句中，&a指定待赋值的内存首地址；0是要赋的值；而sizeof(struct customer)用于该内存区域待赋值的长度。
例如：memset(a,0,sizeof(a));


memcpy(b,a,sizeof(a));
strcpy(b,a)；
二者作用：将字符串a的值拷贝给另一个字符串b;
头文件：string.h；

十三：四舍六入五成双。

十四：C语言中转换大小写字母，可用ctype.h头文件中声明的函数toupper和tolower。

十五：字符数组赋值函数：strcpy(maxname,name)；

十六：int *a = new int [n];	==	int a[n];

十七：itoa(n,xy,10)；——数值转换成字符串函数。
其中n,表示的是一个数值.
xy,表示的是转换后存放字符串的指针.
10表示基于10进制

atoi函数：将字符串转为integer类型；
atof函数：将字符串转为double类型；
头文件：#include<stdlib.h>



		/*=================================*/
		/*		进阶部分			*/
		/*=================================*/
一：循环改递归：
	1.关键是发现逻辑的相似性
		*若没有明显相似性需要主动构造
		*不能相似很可能是缺少参数
		*类比于递推公式
	2.不要忘记递归的出口——结束条件，否则会死循环。
	3.递归的参数是要变化的，从而产生出口。

二：C中几个类型转换的函数：
1. 函数名: atof 　
　功 能: 把字符串转换成浮点数；
   用 法: double atof(const char *nptr); 
2.函数名: atol 　
　功 能: 把字符串转换成长整型数 
　用 法: long atol(const char *nptr); 
3.C语言库函数名: atoi 
　功 能: 把字符串转换成整型数. 
　原型: int atoi(const char *nptr); 
函数说明: 参数nptr字符串，如果第一个非空格字符不存在或者不是数字也不是正负号则返回零，否则开始做类型转换，之后检测到非数字(包括结束符 \0) 字符时停止转换，返回整型数。

三：使程序运行后不自动退出：
while(1){
     ······；
}
或while(scanf("%d",&n)!=EOF)

四：回溯：碰壁即回头——聪明的枚举。重要的是分析出来约束集。
