#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char name[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",name);
		if(strcmp(name,"WYS")==0)
			printf("KXZSMR\n");
			
		else if(strcmp(name,"CQ")==0)
			printf("CHAIQIANG\n");
			
		else if(strcmp(name,"LC")==0)
			printf("DRAGONNET\n");
			
		else if(strcmp(name,"SYT")==0)
			printf("STUDYFATHER\n");
			
		else if(strcmp(name,"SSD")==0)
			printf("STUDYFATHER\n");
			
		else if(strcmp(name,"LSS")==0)
			printf("STUDYFATHER\n");
		
		else if(strcmp(name,"LYF")==0)
			printf("STUDYFATHER\n");
		
		else
			printf("DENOMINATOR\n");
		
	}
	return 0;
}
