#include<stdio.h>
void main()
{
	int i,array[5],search,flag=0;
	printf("Enter elements to array : \n");
	for(i=0;i<5;i++){

		scanf("%d",&array[i]);

	}

	printf("Enter the number to be searched : ");
	scanf("%d",&search);

	for(i=0;i<5;i++){

		if(array[i] == search){

			flag=i+1;
			break;

		}

	}

	if(flag != 0 ){

		printf("\n\n%d found at position %d.",search,flag);

	}

	else{

		printf("\n\n%d not found.",search);	

		}

}
