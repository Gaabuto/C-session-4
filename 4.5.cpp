#include <stdio.h>

int main(){
	int a,b,c;
	printf("moi ban nhap so thu 1: ");
	scanf("%d", &a);
	printf("moi ban nhap so thu 2: ");
	scanf("%d", &b);
	printf("moi ban nhap so thu 3: ");
	scanf("%d", &c);
	if (a>c && c>b || a<c && c<b) {
		printf("so %d nam trong khoang giua so %d va so %d", c, a, b);
	}else {
		printf("so %d khong nam trong khoang giua so %d va so %d", c, a, b);
	}
	return 0;
}
