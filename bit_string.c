#include<stdio.h>
int main(){

	int array[10],bit_string[10],i;
	printf("Enter array elements : ");

	for(i=0;i<10;i++){
		scanf("%d",&array[i]);
	}

	for(i=0;i<10;i++){
		if(array[i]%2 != 0){
			bit_string[i] = 1;	
		}
		else{
			bit_string[i] = 0;
		}
	}

	printf("Bit string of odd numbers from above array : ");
	for(i=0;i<10;i++){
		printf("%d",bit_string[i]);
	}
	printf("\n");

}
