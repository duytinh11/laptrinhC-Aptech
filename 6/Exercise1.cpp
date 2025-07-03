#include<stdio.h>

int main(){
	int n,tong=0;
	printf("nhap so nguyen duong n de tinh tong tu 1 den n \n");
	do{
		printf("nhap n= ");
		scanf("%d",&n);
		if(n<=0)printf("n>0 vui long nhap lai\n");
	}while(n<=0);
	for(int i=1;i<=n;i++){
		tong=tong+i;	
	}
	printf("Tong tu 1 den %d la %d \n",n,tong);
}
