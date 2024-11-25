#include<stdio.h>
int main(){
	
	int a, i=1, tong=0;
	printf("moi ban nhap vao so nguyen duong ");
	scanf("%d", &a);
	for(i;i<=a;i++){
	    tong+=i;	
	}
	printf("tong cac so tu 1 den %d la : %d",a, tong);
	
	return 0;
	
}
