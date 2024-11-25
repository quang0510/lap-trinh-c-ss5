#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int a, b, tong, hieu, tich, thuong, luaChon;
	printf("moi ban nhap vao so thu nhat ");
	scanf("%d", &a);
	printf("moi ban nhap vao so thu hai ");
	scanf("%d", &b);
	printf("*************MENU**************\n");
	printf("1.tong cua hai so\n");
	printf("2.hieu cua hai so\n");
	printf("3.tich cua hai so\n");
	printf("4.thuong cua hai so\n");
	printf("5.thoat\n");
	printf("lua chon cua ban la :\n");
	scanf("%d", &luaChon);
	switch(luaChon){
		case 1:
		  tong=a+b;
		  printf("tong cua %d va %d la %d", a, b, tong);
		  break;
		case 2:
		  hieu=a-b;
		  printf("hieu cua %d va %d la %d", a, b, hieu);
		  break;
		case 3:
		  tich=a*b;
		  printf("tich cua %d va %d la %d", a, b, tich);
		  break;
		case 4:
		  thuong=a/b;
		  printf("thuong cua %d va %d la %d", a, b, thuong);
		  break;
		case 5:
		  printf("thoat");
		  exit(0);
		default:
		  printf("khong hop le");
	}
	return 0;
	
}
