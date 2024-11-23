#include <stdio.h>

int main(){
	int n;
	printf("moi nhap 1 so nguyen bat ky: ");
	scanf("%d", &n);
	if(n%2==0){
		printf("so nay la so chan");
	}else{
		printf("so nay la so le");
	}
	return 0;
}
