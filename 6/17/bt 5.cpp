#include<stdio.h>
int main(){
	int n;
	do{
	printf("nhap n:");
	scanf("%d",&n);
	if(n<=0)printf("vui long nhap so duong\n");
	}while(n<=0);	
	int c=n,x,dv,s=0;
	for(int i=1;i<=n;i++){
		dv=c%10;
		x=c/10;
		c=x;
	if(s<=dv) s=dv;
	}printf("so lon nhat %d la: %d",n,s);
}
