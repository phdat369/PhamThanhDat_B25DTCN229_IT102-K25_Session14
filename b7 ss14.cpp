#include <stdio.h>
#include <math.h>
void so_nguyen_to(int n){
	int flag=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	if(flag==1 && n>1){
		printf("True");
	}
	else {
		printf("False");
	}
}
int main(){
	int n;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	so_nguyen_to(n);
}
