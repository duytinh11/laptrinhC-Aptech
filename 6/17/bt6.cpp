#include<stdio.h>
int main(){
	int n;
	do{
	printf("nhap n:");
	scanf("%d",&n);
	if(n<=0)printf("vui long nhap so nguyen duong\n");
	}while(n<=0);
	
	int dv,s=n;
	for(int i=0;i<n;i++){
	dv=s%10;
	s=s/10;
	if(dv%2==0){printf(" %d co so chan",n);
	break;
	}else printf("%d toan so le",n);
}
}
