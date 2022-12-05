#include<stdio.h>
void main(){
int array[10], i,k,temp;
printf("Enter elements of array : ");
for(i=0;i<10;i++){
 scanf("%d",&array[i]);
}

for(i=0;i<10;i++){
 for(k=i+1;k<10;k++){
  if(array[i] > array[k]){
   
   temp = array[i];
   array[i] = array[k];
   array[k] = temp;

  }
 }
}

printf("Elements after sorting : ");
for(i=0;i<10;i++){

 printf("%d\n",array[i]);

}
}
