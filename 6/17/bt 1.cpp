#include<stdio.h>
int main(){
	int n;
	
	do{
	printf("nhap n:\n");
	scanf("%d",&n);
	if(n<=0)printf("nhap n>0\n");
	}while(n<=0);
	
	int i=1,s=0;
	while(i<n){
		if(n%i==0)s=s+i;
		i++;
	}
	printf("tong uoc cua %d la: %d",n,s);
}
