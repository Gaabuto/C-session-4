#include <stdio.h>

int main(){
	int month;
	printf("moi ban nhap so thang bat ky ");
	scanf("%d", &month);
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang %d co 31 ngay", month);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang %d co 30 ngay", month);
			break;
		case 2:
			printf("thang 2 co the co 28, co the co 29 ngay");
			break;
		default:
			printf("so thang k hop le, vui long bam lai tu thang 1 den 12");
	}
	return 0;
}
