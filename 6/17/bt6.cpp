#include<stdio.h>
int main(){
	int m;
	do{
		printf("nhap so phan tu trong mang:\n");
		scanf("%d",&m);
	}while(m<=0);
	
	int a[m];
	for(int i=0;i<m;i++){
		printf("nhap gia tri a[%d]:\n",i);
		scanf("%d",&a[i]);
	}
	
	int y=0,ym=0;
	for(int i=0;i<m;i++){
	if(a[i]>0){
	if(y==0)y=1;
	else y++;
	}else y=0;
	if(y>ym)ym=y;
}
	if(ym>0)printf("chuoi so duong lien tiep  la: %d\n",ym);
	else printf("khong co chuoi duong lien tiep nao");
}
