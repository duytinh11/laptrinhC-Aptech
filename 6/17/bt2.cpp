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
	int x=0,y=0;
	float s;
	for(int i=0;i<m;i++){
		if(i%2==0&&a[i]%2!=0){
			x=x+a[i];
			y++;
}
}		if(y>0){
		s=(float)x/y;
		printf("TBC cua ca so le o vi tri chan la: %f",s);
			}else printf("khong co so le o vi tri chan");
}
	
	
