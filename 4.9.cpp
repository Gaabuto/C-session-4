#include <stdio.h>

int main(){
	int day, month, year;
	printf("moi ban nhap ngay: ");
	scanf("%d", &day);
	if(day<32){
		printf("moi ban nhap thang: ");
		scanf("%d",&month);
		if(month<13){
			printf("moi ban nhap nam: ");
			scanf("%d", &year);
			printf("hom nay la ngay %d, thang %d, nam %d", day,month,year);
		}else{
			printf("sai roi!! moi ban nhap lai di");
		}
	}else{
		printf("sai roi, moi ban nhap lai di");
	}
	return 0;
}
