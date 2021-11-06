#include<stdio.h> 
#include<string.h>
int a[10];
int check(int p1,int p2){
	if(a[p1]==a[p2]-1 || a[p1]==a[p2]+1)
		return 0;
	else
		return 1;
}
int check1(){
	if(check(a[0],a[1])==0) return 0;
	if(check(a[2],a[3])==0) return 0;
	if(check(a[3],a[4])==0) return 0;
	if(check(a[5],a[6])==0) return 0;
	if(check(a[6],a[7])==0) return 0;
	if(check(a[8],a[9])==0) return 0;
	if(check(a[2],a[5])==0) return 0;
	if(check(a[5],a[8])==0) return 0;
	if(check(a[0],a[3])==0) return 0;
	if(check(a[3],a[6])==0) return 0;
	if(check(a[6],a[9])==0) return 0;
	if(check(a[1],a[4])==0) return 0;
	if(check(a[4],a[7])==0) return 0;
	if(check(a[0],a[4])==0) return 0;
	if(check(a[3],a[7])==0) return 0;
	if(check(a[2],a[6])==0) return 0;
	if(check(a[5],a[9])==0) return 0;
	if(check(a[0],a[2])==0) return 0;
	if(check(a[1],a[3])==0) return 0;
	if(check(a[3],a[5])==0) return 0;
	if(check(a[4],a[6])==0) return 0;
	if(check(a[6],a[8])==0) return 0;
	if(check(a[7],a[9])==0) return 0;
	return 1;
}
int main(){
	int count=0;
    for(a[0]=0;a[0]<10;a[0]++){
	    for(a[1]=0;a[1]<10;a[1]++){
		    if(a[1]==a[0]) continue;
		    for(a[2]=0;a[2]<10;a[2]++){
			    if(a[2]==a[0]||a[2]==a[1]) continue;
			    for(a[3]=0;a[3]<10;a[3]++){
				    if(a[3]==a[0]||a[3]==a[1]||a[3]==a[2]) continue;
				    for(a[4]=0;a[4]<10;a[4]++){
					    if(a[4]==a[0]||a[4]==a[1]||a[4]==a[2]||a[4]==a[3]) continue;
					    for(a[5]=0;a[5]<10;a[5]++){
						    if(a[5]==a[0]||a[5]==a[1]||a[5]==a[2]||a[5]==a[3]||a[5]==a[4]) continue;
						    for(a[6]=0;a[6]<10;a[6]++){
							    if(a[6]==a[0]||a[6]==a[1]||a[6]==a[2]||a[6]==a[3]||a[6]==a[4]||a[6]==a[5]) continue;
							    for(a[7]=0;a[7]<10;a[7]++){
								    if(a[7]==a[0]||a[7]==a[1]||a[7]==a[2]||a[7]==a[3]||a[7]==a[4]||a[7]==a[5]||a[7]==a[6]) continue;
								    for(a[8]=0;a[8]<10;a[8]++){
									    if(a[8]==a[0]||a[8]==a[1]||a[8]==a[2]||a[8]==a[3]||a[8]==a[4]||a[8]==a[5]||a[8]==a[6]||a[8]==a[7]) continue;
									    for(a[9]=0;a[9]<10;a[9]++){
									    	if(a[9]==a[0]||a[9]==a[1]||a[9]==a[2]||a[9]==a[3]||a[9]==a[4]||a[9]==a[5]||a[9]==a[6]||a[9]==a[7]||a[9]==a[8]) continue;
									    	if(check1()) count++;
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
    printf("%d",count);
	return 0;
}
