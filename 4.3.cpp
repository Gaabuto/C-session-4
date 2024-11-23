#include <stdio.h>

int main(){
	int x;
	printf("moi nhap 1 so nguyen bat ky: ");
	scanf("%d", &x);
	if(x%3==0){
		printf("so %d chia het cho 3\n",x);
	}else{
		printf("so %d k chia het cho 3\n",x);
	}
		if(x%5==0){
		printf("so %d chia het cho 5\n",x);
	}else{
		printf("so %d k chia het cho 5\n",x);
	}
	if (x%3==0 && x%5==0){
		printf("so %d chia het cho ca 3 va 5", x);
	}else{
		printf("so %d khong chia het cho ca 3 va 5", x);
	}
	
	return 0;
}
