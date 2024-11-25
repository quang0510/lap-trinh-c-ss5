#include<stdio.h>
int main(){
	
	int a, i=1;
	printf("moi ban nhap vao so nguyen duong tu 1 den 10 : ");
	scanf("%d", &a);
	printf("bang cua chuong cua %d la :\n", a);
	for(i;i<=10;i++){
		printf("%d * %d = %d\n", a, i, a*i);
	}
	
	return 0;
}
