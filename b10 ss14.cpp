#include <stdio.h>
#include <math.h>
int n;
int array[100];
int a;
void menu(){
	printf("\n|--------------------------------------------------|");
	printf("\n|                       MENU                       |");
	printf("\n|--------------------------------------------------|");
	printf("\n|1.Nhap so phan tu can nhap va gia tri cac phan tu |");
	printf("\n|2.In ra gia tri cac phan tu dang quan li          |");
	printf("\n|3.Them 1 phan tu vao vi tri chi dinh              |");
	printf("\n|4.Sua 1 phan tu o vi tri chi dinh                 |");
	printf("\n|5.Xoa 1 phan tu o vi tri chi dinh                 |");
	printf("\n|6.Sap xep cac phan tu                             |");
	printf("\n|  a.Tang dan                                      |");
	printf("\n|  b.Giam dan                                      |");
	printf("\n|7.Tim kiem phan tu nhap vao                       |");
	printf("\n|  a.Tim kiem tuyen tinh                           |");
	printf("\n|  b.Tim kiem nhi phan                             |");
	printf("\n|8.Thoat                                           |");
	printf("\n|--------------------------------------------------|");
}
void chuc_nang_1(){
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
}
void chuc_nang_2(){
	printf("\nCac phan tu trong mang la : ");
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
void chuc_nang_3(int k,int x){
	for(int i=n-1;i>=x;i--){
		array[i+1]=array[i];
	}
	array[x]=k;
	++n;
}
void chuc_nang_4(int z,int j){
	for(int i=0;i<n;i++){
		if(i==j){
			array[i]=z;
		}
	}
}
void chuc_nang_5(int g){
	for(int i=g;i<n-1;i++){
		array[i]=array[i+1];
	}
	--n;
}
void chuc_nang_6a(){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
		}
	}
	for(int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
}
void chuc_nang_6b(){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(array[j]<array[j+1]){
			temp=array[j+1];
			array[j+1]=array[j];
			array[j]=temp;
		}
		}
	}
	for(int i=0;i<n;i++){
		printf(" %d ",array[i]);
	}
}
void chuc_nang_7a(int y){
	int count=0;
	for(int i=0;i<n;i++){
		if(array[i]==y){
			count++;
		}
	}
	if(count>0){
		printf("Phan tu co trong mang ");
	}
	else {
		printf("Phan tu khong co trong mang ");
	}
}
void chuc_nang_7b(int y){
	int low=0;
	int high=n-1;
	int count=0;
	while(low<=high){
		int mid=(low+high)/2;
		if(array[mid]==y){
			count++;
			break;
		}
		else {
			if(y<array[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
	}
	if(count>0){
		printf("Phan tu co trong mang ");
	}
	else {
		printf("Phan tu khong co trong mang ");
	}
}
int main(){
	do{
		menu();
		printf("\nChon chuc nang : ");
		scanf("%d",&a);
		if(a>8 || a<1){
			printf("\nLoi,vui long nhap lai : ");
			scanf("%d",&a);
		}
		switch(a){
			case 1:
				chuc_nang_1();
			break;
			case 2:
				chuc_nang_2();
			break;
			case 3:
				int k;
				int x;
				printf("Nhap phan tu can them vao mang : ");
				scanf("%d",&k);
				printf("Nhap vi tri chen phan tu : ");
				scanf("%d",&x);	
				chuc_nang_3(k,x);
			break;
			case 4:
				int z;
				int j;
				printf("Nhap phan tu muon thay the : ");
				scanf("%d",&z);
				printf("Nhap vi tri thay the : ");
				scanf("%d",&j);
				chuc_nang_4(z,j);
			break;
			case 5:
				int g;
				printf("Nhap vi tri muon xoa : ");
				scanf("%d",&g);
				chuc_nang_5(g);
			break;
			case 6:
				char c;
				printf("Chon chuc nang a hoac b : ");
				scanf(" %c",&c);
				if(c=='a'){
					chuc_nang_6a();
				}
				else if(c=='b'){
					chuc_nang_6b();
				}
			break;
			case 7:
				char t;
				printf("Chon chuc nang a hoac b : ");
				scanf(" %c",&t);
				if(t=='a'){
					int y;
					printf("Nhap phan tu can tim : ");
					scanf("%d",&y);
					chuc_nang_7a(y);
				}
				else if(t=='b'){
					int y;
					printf("Nhap phan tu can tim : ");
					scanf("%d",&y);
					chuc_nang_7b(y);
				}
			break;
			case 8:
			return 0;				
		}
	}while(a!=8);
}
