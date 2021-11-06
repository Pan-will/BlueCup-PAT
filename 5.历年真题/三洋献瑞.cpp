#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h;//祥 瑞 生 辉 三 羊 献 气
	int sum1=0,sum2=0,sum=0;
	for(a=1;a<=9;a++){//首位不为0 
		for(b=0;b<9;b++){
			for(c=0;c<9;c++){
				for(d=0;d<9;d++){
					for(e=1;e<9;e++){// 首位不为0 
						for(f=0;f<9;f++){
							for(g=0;g<9;g++){
								for(h=0;h<9;h++){
									if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h
									&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h
									&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h
									&&d!=e&&d!=f&&d!=g&&d!=h
									&&e!=f&&e!=g&&e!=h
									&&f!=g&&f!=h&&g!=h){
										sum1 = a*1000+b*100+c*10+d;
										sum2 = e*1000+f*100+g*10+b;
										sum = e*10000+f*1000+c*100+b*10+h;
										if(sum1+sum2==sum){
											printf("%d+%d=%d",sum1,sum2,sum);
											printf("\n%d %d %d %d",e,f,g,b);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
