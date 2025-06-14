#include<stdio.h>
int main(){
	int n;
	do{
	printf("nhap n:");
	scanf("%d",&n);
	if(n<=0)printf("vui long nhap so duong");
	}while(n<=0);	
	int c=n,x;
	for(int i=1;i<=n;i++){
		x=c/10;
		c=x;
		if(x<10) break;
	}printf("so dau tien cua %n la: %d",n,x);
}
