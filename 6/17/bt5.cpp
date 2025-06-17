#include<stdio.h>
int main(){
	int m;
	do{
		printf("nhap so phan tu trong mang:\n");
		scanf("%d",&m);
	}while(m<=0);
	int a[m];
	for(int i=0;i<m;i++){
		printf("nhap cac gia tri:\n");
		scanf("%d",&a[i]);
	}
	int y=0;
	for(int i=0;i<m;i++)
	if(a[i]>0) if(y==0||y>a[i]) y=a[i];
	 
	if(y>0)printf("so duong nho nhat %d\n",y);
	else printf("khong co so duong trong mang\n");
}

