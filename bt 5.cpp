#include<stdio.h>
#include<math.h>
int main(){
	
	fload a;
	printf("nhap a =");
	scanf("%f", &a);
	
	fload b;
	printf("nhap b =");
	scanf("%f", &b);
	
	fload c;
	printf("nhap c =");
	scanf("%f", &c);
	
	float x;
	float x1;
	float x2;
	float x3;
	
	if(a==0){
		if(b==0){
			if(c==0){ printf("phuong trinh vo so nghiem");
				
			}else {	printf("phuong trinh vo nghiem");
				
			}
		
		}else{
			x= -c/(float)b;
		printf(" x= %f",x);
		
		}
	}else{
	float delta;
	delta = b*b - 4*a*c;
	
	if(delta >0){
		x1=(-b + sqrt(delta))/(2*a);
		x2=(-b - sqrt(delta))/(2*a);
		printf("phuong trinh có 2 nghiem")
		printf(" x1= %f",x1);
		printf(" x2= %f",x2);
	}else{
		if(delta==0){
			x3= -b/(2*a);
			printf("phuong trinh co nghiem kep x= %f",x3);
		}else{printf("phuong trinh vo nghiem");
		}
		
	}
}
