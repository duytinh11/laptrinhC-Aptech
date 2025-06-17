#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	if(n<0)n=-1*n;	
	
	int c=n,x,dv,s=0;
	
	for(int i=0;i<n;i++){
		dv=c%10;
		s=s+dv;
		x=c/10;
		c=x;
	}printf("tong cac so %d la: %d",n,s);
}
