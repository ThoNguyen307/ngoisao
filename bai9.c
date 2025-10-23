#include<stdio.h>
void Bai9(){
	int i,n,x;
	printf("Nhap n: "); scanf("%d",&n);
	tt:
	printf("Vui long nhap tuan tu tu 1 den %d\n",n);
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		if(i!=x) goto tt;
	}
}