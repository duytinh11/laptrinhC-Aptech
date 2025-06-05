#include<stdio.h>


int main(){
	float Thunhap;
	printf("nhap Thunhap =");
	scanf("%f", &Thunhap);
	
	float Thue;

if(Thunhap <= 0){
		Thue = 0.0; 
		printf("Thue = %f", Thue); 
	} else {
		if(Thunhap <= 60000000){
            Thue = Thunhap * 0.05;
            printf("Thue =%f", Thue);
		} else {
            if(Thunhap <= 120000000){
                Thue = 3000000 + (Thunhap - 60000000) * 0.10; 
                printf("Thue =%f", Thue);
            } else {
                if(Thunhap <= 216000000){
                   
                    Thue = 9000000 + (Thunhap - 120000000) * 0.15;
                    printf("Thue =%f", Thue);
                } else {
                    if(Thunhap <= 384000000){
                        
                        Thue = 23400000 + (Thunhap - 216000000) * 0.20;
                        printf("Thue =%f", Thue);
                    } else {
                        if(Thunhap <= 624000000){
                            
                            Thue = 57000000 + (Thunhap - 384000000) * 0.25;
                            printf("Thue =%f", Thue);
                        } else {
                            if(Thunhap <= 960000000){
                
                                Thue = 117000000 + (Thunhap - 624000000) * 0.30;
                                printf("Thue =%f", Thue);
                            } else {
                                
                                Thue = 217800000 + (Thunhap - 960000000) * 0.35; 
                                printf("Thue =%f", Thue);
                            }
                        }
                    }
                }
            }
		}
	}
}
	

