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
	
	int kc=0,gt=x;
	for(int i=0;i<n;i++){
		int h = a[i]-x;
		if(h<0)h=-h;
		if(h<kc){
			kc=h;
			gt=a[i];
		}
	}
	printf("vi tri gan nhat %d",gt);
}
