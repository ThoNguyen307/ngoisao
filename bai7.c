#include<stdio.h>
void giaithua(){
    int n;
    long long gt=1;
    printf("nhập n giai thừa cần tính là :");
    scanf("%d",&n);
    if(n<0){
        printf("ko tính được nhập tào lao hoài đi");
    }
    else {
    for (int i=1;i<=n;i++){
        gt*=i;
    }
    printf("gii thừa của %d cần tính là: %d",n,gt);
}
}