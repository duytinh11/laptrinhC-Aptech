#include<stdio.h>
int main(){
	printf("pt ax+b=0 \n");
	int a,b;
	float x;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	
	if(a==0){
	if(b==0)printf("pt co vo so nghiem\n");
	else printf("pt vo nghiem\n");
}
	else{
		x=(-1.0*b)/a;
		printf(" pt co nghiem x=%f \n",x);
	}
}
