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
	for(int i=0;i<m;i++)if(a[i]%2!=0) y=a[i];
	
	if(y==0) printf("khong co so le trong mang\n");
	else printf("so le cuoi cung cua mang la %d\n",y);
}

