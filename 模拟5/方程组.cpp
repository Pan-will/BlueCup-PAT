#include<stdio.h>
int main(){
	int x,y,z;
	int min=3000;
	for(int x=1;x<1000;x++){
		for(int y=1;y<1000;y++){
			for(int z=1;z<1000;z++){
				if((11*x+13*y+17*z==2471) && (13*x+17*y+11*z==2739)){
					if((x+y+z)<min){
						min=x+y+z;
						printf("%d\n",min);
					}
				}
			}
			
		}
	}
	return 0;
}
