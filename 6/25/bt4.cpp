#include<stdio.h>
int main(){
	printf("chuong trinh tinh tien dien dua tren kWh dien tieu thu\n");
	int n,x;
	do{
	printf("nhap so kWn dien tieu thu: \n");
	scanf("%d",&n);	
	}while(n<=0);
	
	if(n<=50){
		x=n*1678;
		printf("so tien dien la: %d dong\n",x);
	}
	else if(n<=100){
		x=50*1678 + (n-50)*1734;
		printf("so tien dien la: %d dong\n",x);
	}
	else if (n<=200){
		x=50*1678 + 50*1734 + (n-100)*2014;
		printf("so tien dien la: %d dong\n",x);
	}else{
		x=50*1678 + 50*1734 + 100*2536 + (n-200)*2536;
			printf("so tien dien la: %d dong\n",x);
	}
}
