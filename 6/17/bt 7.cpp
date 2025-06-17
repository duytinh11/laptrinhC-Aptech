#include<stdio.h>
int main(){
	int m;
	do{
		printf("nhap sp phan tu mang: \n");
		scanf("%d",&m);
	}while(m<=0);
	
	int a[m];
	for(int i=0;i<m;i++){
		printf("nhap gia tri a[%d]: \n",i);
		scanf("%d",&a[i]);
	}
	
	int y=0,s=0;
	for(int i=0;i<m;i++){
		if(a[i]>0)y=y+a[i];
		else y=0;
		if (y>s)s=y;
	}
	if(s>0)printf("gia tri lon nhat cua chuoi duong lien tiep la: %d\n",s);
	else printf(" khong co so duong nao");
}
