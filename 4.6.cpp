#include <stdio.h>

int main(){
	float x;
	int cost;
	printf("moi ban nhap so cong to dien(kWh)");
	scanf("%f",&x );
	if(0<=x && x< 50){
		cost = 10000;
		printf("ban da tieu %.2f tien dien thang nay", x * cost);
	}else if( 50 <= x && x < 100){
		cost = 15000;
		printf("ban da tieu %.2f tien dien thang nay", x * cost);
	}else if(100 <= x && x <150){
		cost = 20000;
	    printf("ban da tieu %.2f tien dien thang nay", x * cost);
	}else if (150 <= x && x < 200){
		cost = 25000;
		printf("ban da tieu %.2f tien dien thang nay", x * cost);
	}else{
		cost = 30000;
		printf("ban da tieu %.2f tien dien thang nay", x * cost);
	}
	return 0;
}
