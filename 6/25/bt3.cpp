#include<stdio.h>
int main(){
	printf("nhap 3 canh cua tam gia ABC\n");
	int a,b,c;
	do{
	printf("nhap canh a=");
	scanf("%d",&a);
	printf("nhap canh b=");
	scanf("%d",&b);
	printf("nhap canh c=");
	scanf("%d",&c);	
	}while(a<=0&&b<=0&&c<=0);
	
	if(a+b<c||a+c<b||c+b<a)printf("3 canh a,b,c khong tao thanh tam giac\n");
	else printf("3 canh a,b,b tao thanh tam giac ABC\n");
}
