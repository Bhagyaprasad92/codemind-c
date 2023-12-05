
#include<stdio.h>
int main(){
	int n1=0,n2=1,n3=0,n,flag=0;
	scanf("%d",&n);
	while(n3<=n){
		n3=n1+n2;
		if(n3==n){
			flag=1;
			break;
		}
		n1=n2;
		n2=n3;
	}
	if(flag==1){printf("True");
	}
	else
	printf("False");
}