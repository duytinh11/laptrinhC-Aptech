#include<stdio.h>
int main(){
	int n,dv;
	do{
	printf("nhap n:");
	scanf("%d",&n);
	if(n<=0)printf("vui long nhap so nguyen duong\n");
	}while(n<=0);
	
	for(int i=0;i<n;i++)dv=n%10;
	if(dv%2==0)printf("%d la so chan",n);
	else printf("%d la so le",n);
}
