#include <stdio.h>
void tinh_tien_dien(n){
    bac1=500;
    bac2=550;
    bac3=650;
    muc1=100;
    muc2=350;
    muc3=650;
    if (n<=muc1){
        tiendien=n*bac1;
    } else if (n<=muc2){
        tiendien=(muc1*bac1)+((n-muc1)*bac2);
    } else {
        tiendien=(muc1*bac1)+(muc2*bac2)+((n-muc2)*bac3);
    }
    return tiendien;
};

int main(){
    float n;
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%f", &n);
    tinh_tien_dien(n);
}