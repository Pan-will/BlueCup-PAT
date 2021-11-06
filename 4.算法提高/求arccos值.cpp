/*
提示：要达到这种程度的精度需要使用double类型。
*/
#include<stdio.h> 
#include<math.h>
main(){
    double n;
    scanf("%lf",&n);
    printf("%.5lf",acos(n));
}
