#include<stdio.h>
int main(){
	int a,b;

	printf("nhap mang a\n ");
		scanf("%d",&a);
		printf("nhap mang b\n");
		scanf("%d",&b);
		int arr[a][b];
	
	for(int i =0;i< sizeof(arr)/sizeof(arr[0]);i++){
		
		for(int j =0;j < sizeof(arr[i])/sizeof(int);j++){
			printf(" nhap phan tu vi tri %d %d\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i =0;i< sizeof(arr)/sizeof(arr[0]);i++){
		
		for(int j =0;j < sizeof(arr[i])/sizeof(int);j++){
			printf(" %d",arr[i][j]);
			
	}
	printf("\n");
}
}
