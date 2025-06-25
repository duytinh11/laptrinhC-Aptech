#include<stdio.h>
int main(){
		int n;
	do{
	printf("nhap dien cua hs: \n");
	scanf("%d",&n);
}while(n<0||n>10);

	if(n>=9)printf("hs xuat sac\n");
	else if(n>=8)printf("hs gioi\n");
	else if(n>=7)printf("hs kha\n");
	else if(n>=5)printf("hs trung binh\n");
	else("hs yeu\n");
}
