#include<stdio.h>

int isPrime(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++)if(n%i==0)return 0;
	return 1;
	}

int main(){
	int n;
	printf("nhap so nguyen duong n co phai so nguyen to khong \n");
	do{
		printf("nhap n= ");
		scanf("%d",&n);
		if(n<=0)printf("n>0 vui long nhap lai\n");
	}while(n<=0);
	
	if(isPrime(n)==1) printf("%d la so nguyen to\n",n);
	else printf("%d khong la so nguyen to\n",n);
	
}
