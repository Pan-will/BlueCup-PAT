#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h,i;
	int ans=0;
	for(a=1;a<=9;a++){
		for(b=1;b<=9;b++){
			for(c=1;c<=9;c++){
				for(d=1;d<=9;d++){
					for(e=1;e<=9;e++){
						for(f=1;f<=9;f++){
							for(g=1;g<=9;g++){
								for(h=1;h<=9;h++){
									for(i=1;i<=9;i++){
										if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i
										&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i
										&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i
										&&d!=e&&d!=f&&d!=g&&d!=h&&d!=i
										&&e!=f&&e!=g&&e!=h&&e!=i
										&&f!=g&&f!=h&&f!=i
										&&g!=h&&g!=i
										&&h!=i
										){
											double sum1 = b*1.0/c;
											double s1 = d*1.0*100+e*1.0*10+f;
											double s2 = g*1.0*100+h*1.0*10+i;
											double sum2 = s1/s2;
											if(a+sum1+sum2==10){
												printf("%d + %d/%d +%d%d%d/%d%d%d = 10\n",a,b,c,d,e,f,g,h,i);
												ans++;
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
	printf("%d",ans);
	return 0;
}
