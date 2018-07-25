#include <stdio.h>
void insertsort(int a[]){
	for(int i = 1 ; i<5 ; i++){//scan up
		if(a[i] < a[i-1]){//new pass
			int temp = a[i],j = i;//float current element
			while(j>0 && a[j] < a[j-1]){//pass down				
					a[j] = a[j-1];//swap if needed keep passing
					a[j-1] = temp;
					j--;
				}
		}		
	}
	for(int i = 0;i<5;i++){
	printf("%d ",a[i]);
	}
		printf("\n ");
}
void main(){
	int a[5];
	printf("Enter 5 numbers\n");
	for(int i = 0;i<5; i++){
		scanf("%d",&a[i]);
	}
	insertsort(a);
}
