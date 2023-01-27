#include<stdio.h>
 int main(){
    int size,i,largest,j;
    printf("enter size of array:- ");
    scanf("%d",&size);
    int a[size];
    printf("\n enter %d element of the array:\n",size);
   for(i=0;i<size;i++){
    scanf("%d",&a[i]);
   }
    printf("element of array are:-");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    largest=a[0]; 
    for(i=1;i<size;i++){
       if(largest<a[i]){
        largest=a[i];
       }

    }
    printf("\nlargest element of array is:-%d",largest);
    return 0;

 }