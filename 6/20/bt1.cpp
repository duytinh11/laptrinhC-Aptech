#include<stdio.h>
int main(){
	int n;
	do{
	printf("nhap so phan tu mang : \n");
	scanf("%d",&n);
	}while (n<=0);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri a[%d]: \n",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("nhap gia tri x= \n");
	scanf("%d",&x);
	
	for(int i=0;i<n;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}

}
