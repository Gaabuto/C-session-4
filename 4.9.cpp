#include <stdio.h>

int main(){
	int day, month, year;
	printf("moi ban nhap ngay: ");
	scanf("%d", &day);
	if(day>=1 && day<32){
		printf("moi ban nhap thang: ");
		scanf("%d",&month);
		if(month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12 ){
			printf("moi ban nhap nam: ");
			scanf("%d", &year);
			printf("hom nay la ngay %d, thang %d, nam %d", day,month,year);
		}else if((month == 4||month == 6||month == 9||month == 11) && day<31){
			printf("moi ban nhap nam: ");
			scanf("%d", &year);
			printf("hom nay la ngay %d, thang %d, nam %d", day,month,year);
		}else if(month == 2 && day < 30){
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
