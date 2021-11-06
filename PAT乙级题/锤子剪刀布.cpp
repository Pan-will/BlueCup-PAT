#include<stdio.h>
int maxnum(int a,int b,int c){
	if(a>=b && a>c) return a;
	else if(b>a && b>=c) return b;
	else if(c>a && c>b) return c;
}
main(){
	int jiawin[3]={0};//甲方C J B赢的次数,必须赋初值为0 
	int yiwin[3]={0};//乙方C J B赢的次数
	int pingju=0;//平局次数 
	char jia,yi;
	int n;
	scanf("%d",&n);
	
	int jia_cw=0,jia_jw=0,jia_bw=0;
	int yi_cw=0,yi_jw=0,yi_bw=0; 
	getchar();
	for(int i=0;i<n;i++) {
		scanf("%c %c",&jia,&yi);
		getchar();
		if(jia == yi) pingju++;
		else if(jia=='C' && yi=='J'){
			jiawin[0]++;
			jia_cw += 1;
		} 
		else if(jia=='J' && yi=='B'){
			jiawin[1]++;
			jia_jw += 1;
		} 
		else if(jia=='B' && yi=='C'){
			jiawin[2]++;
			jia_bw += 1;
		} 
		else if(yi=='C' && jia=='J'){
			yiwin[0]++;
			yi_cw += 1;
		} 
		else if(yi=='J' && jia=='B'){
			yiwin[1]++;
			yi_jw += 1;
		} 
		else if(yi=='B' && jia=='C'){
			yiwin[2]++;
			yi_bw += 1;
		} 
	}
	int jiawinSum = jiawin[0] + jiawin[1] + jiawin[2];
	int yiwinSum = yiwin[0] + yiwin[1] + yiwin[2];
	printf("%d %d %d\n",jiawinSum,pingju,n-jiawinSum-pingju);
	printf("%d %d %d\n",yiwinSum,pingju,n-yiwinSum-pingju);
	
//	char shoushi[]={'C','J','B'};//统计赢得较多的手势 
//	printf("%c %c",shoushi[maxnum(jia_cw,jia_jw,jia_bw)],shoushi[maxnum(yi_cw,yi_jw,yi_bw)]);
	
	char cs[]={'C','J','B'};
    int maxIndex1=0,maxIndex2=0;//统计赢得较多的手势的下标 
    for(int i=0;i<3;i++){  
        if(jiawin[i]==jiawin[maxIndex1] && cs[i]<cs[maxIndex1]) //胜的次数一样，但是字母靠前  
            maxIndex1=i;  
        else if(jiawin[i]>jiawin[maxIndex1])  
            maxIndex1=i;  
    }  
    for(int i=0;i<3;i++){  
        if(yiwin[i]==yiwin[maxIndex2] && cs[i]<cs[maxIndex2]) //胜的次数一样，但是字母靠前  
            maxIndex2=i;  
        else if(yiwin[i]>yiwin[maxIndex2])  
            maxIndex2=i;  
    }  
    printf("%c %c",cs[maxIndex1],cs[maxIndex2]); 
}
