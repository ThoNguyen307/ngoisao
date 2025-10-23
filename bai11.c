#include<stdio.h>
void Bai11(){
	int i,j, y, n=4;
	for(i=0;i<n;i++){
		for(y=0;y<=((n-i)*2+1)/2;y++)
			printf(" ");
		for(j=1;j<=2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
}
