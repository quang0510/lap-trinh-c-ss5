#include<stdio.h>
int main(){
	
    int a, b;
	for(a=1;a<=9;a++){
		printf("bang cuu chuong %d\n", a);
		for(b=1;b<=9;b++){
			printf("%d * %d = %d \n", a, b,a * b);
		}
	}
	return 0;
}
