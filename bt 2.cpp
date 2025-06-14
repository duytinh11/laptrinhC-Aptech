#include<stdio.h>
int main(){
	int a,b;

	do{ 
	printf("nhap a:");
	scanf("%d",&a);
	if(a<=0)printf("vui long nhap a>0\n");
	}while(a<=0);
	
	do{ 
	printf("nhap b:");
	scanf("%d",&b);
	if(b<=0)printf("vui long nhap b>0\n");
	}while(b<=0);
	
	int i=1,x,U,B;
	
	if(a>=b)x=a;
	else x=b;
	
	while(i<=a&&i<=b){
		if(a%i==0&&b%i==0)U=i;
		i++;
	}printf("UCLN(%d,%d)=%d\n",a,b,U);
	
	while(x>=a&&x>=b){
		if(x%a==0&&x%b==0){
		B=x;
		break;
		}
		x++;
	}printf("BCNN(%d,%d)=%d\n",a,b,B); 
}
