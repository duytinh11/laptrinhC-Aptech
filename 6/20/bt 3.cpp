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

	for(int i=0;i<n;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}	
	printf("doan [%d,%d] chua tat ca cac gia tri trong mang",a[0],a[n-1]);
}
