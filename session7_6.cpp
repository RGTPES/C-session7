#include<stdio.h>
int main(){
	int array[5]={4,5,3,2,7};
	for(int i =0;i<5;i++){
		if(array[i]%2==0){
			array[i] +=3;
		}else{
			array[i] += 2;
		}
	printf("%d\n",array[i]);
	}
}
