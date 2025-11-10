#include <stdio.h>
#include <math.h>
void so_hoan_hao(int n){
	int tong=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			tong+=i;
		}
	}
	if(tong==n){
		printf("True");
	}
	else {
		printf("False");
	}
}
int main(){
	int a , b;
	printf("Nhap so nguyen a : ");
	scanf("%d",&a);
	so_hoan_hao(a);
	printf("\nNhap so nguyen b : ");
	scanf("%d",&b);
	so_hoan_hao(b);
}
