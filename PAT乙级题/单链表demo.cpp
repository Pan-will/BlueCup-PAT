#include<stdio.h>
struct link2 {
    int data;
    struct link2 *next;
}*head;

void creat(){
	head = new link2;
	head->next = NULL;  
	struct link2 *q,*tail;
	int i,n1,n2;
	tail = head;
	printf("������A����Ԫ�صĸ���:");
	scanf("%d",&n1);
	printf("������A����Ԫ��:\n");
	for(i=0;i<n1;i++){
		q = new link2;
		q->next = NULL;
		scanf("%d",&q->data);
		tail->next = q;
		tail = q;
	}
}

void Ouput(){  
	struct link2 *p;  
	p=head->next;  
	while(p){  
	    printf("%d  ",p->data);  
	    p=p->next;
	} 
	printf("\n");
}

int main(){    
	creat();
	Ouput();
	return 0;
}


