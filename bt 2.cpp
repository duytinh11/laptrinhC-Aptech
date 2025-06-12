#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int i=n-1;
	
    if (n<=6) printf("vui long nhap n>6");
	else{
	while(i<n){
		if(i%6==0){
		 printf("so chia het cho 2 va 3 lon nhat va nho hon %d la: %d",n,i);
		break;
	}
		i--;
	}	
} 
}
