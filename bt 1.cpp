#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int i=n-1;
if (i<=6) printf("nhap n>6");
else{

	while(i<n){
		if(i%6==0) printf("%d,",i);
		i--;
	}	
	printf("so le nho hon %d la:%d",n,i);
}
}
