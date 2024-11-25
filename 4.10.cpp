#include <stdio.h>

int main(){
	int a,b,c,x;
	printf("moi ban nhap so nguyen a: ");
	scanf("%d",&a);
	printf("moi ban nhap so nguyen b: ");
	scanf("%d", &b);
	printf("moi ban nhap so nguyen c: ");
	scanf("%d",&c);
	if(a>b){
	x = a;
	a = b;
        b = x;
}

if (b>c){
	x = c;
	c = b;
	b = x;
}
if (a>b){
	x = a;
	a = b;
	b = x;
}
printf("%d < %d < %d", a,b,c);
	return 0;
}
