#include <stdio.h>

int main(){
	int a,b,c;
	printf("moi ban nhap chieu dai canh a: ");
	scanf("%d", &a);
	printf("moi ban nhap chieu dai canh b: ");
	scanf("%d", &b);
	printf("moi ban nhap chieu dai canh c: ");
	scanf("%d", &c);
	if( a+b>c && a+c>b && b+c>a){
		printf("3 canh nay co the tao thanh hinh tam giac hinh tam giac");
	}else{
		printf("3 canh nay khong the tao thanh hinh tam giac");
	}
	return 0;
}
