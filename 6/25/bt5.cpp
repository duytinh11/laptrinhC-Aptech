#include<stdio.h>
#include<math.h>
int main(){
	printf("giai pt ax2+bx+c=0\n");
	int a,b,c;
	float x,x1,x2,delta;
	printf("nhap a= \n");
	scanf("%d",&a);	
	printf("nhap b= \n");
	scanf("%d",&b);	
	printf("nhap c= \n");
	scanf("%d",&c);		
	
	if(a==0){
		if(b==0){
			if(c==0) printf("pt vo so ngiem");
			else printf("phuong trinh vo nghiem");
		}else{
			x=(-1.0*c)/b;
			printf(" phuong trinh co ngiem x=%f ",x);
		}
		}else{
			delta=b*b-4*a*c;
			if(delta<0)printf("phuong trinh vo nghiem");
			else if(delta==0){
				x=(-1.0*b)/(2*a);
				printf("phuong trinh co nghiem kep x1=x2=%f\n",x);
			}else{
				x1= (-1.0*b + sqrt(delta))/(2*a);
				x2= (-1.0*b - sqrt(delta))/(2*a);
				printf("phuong trinh co 2 nghiem x1=%f, x2=%f",x1,x2);
			}
		}
	}
