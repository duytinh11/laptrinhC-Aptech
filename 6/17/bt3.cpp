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
	int x;
	printf("nhap so x:\n");
	scanf("%d",&x);
	
	int y;
	for(int i=0;i<m;i++){
		if(x=a[i]) y++;
	}
	if(y=0) printf("%d khong co trong mang\n",x);
	else printf("%d co trong mang\n",x);
}
