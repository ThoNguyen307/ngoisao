#include<mylib.h>
void menu(){
    printf("*** MENU ***\n");
    printf("1- Tinh phuong trinh bac 2\n");
    printf("2- Tinh diem cuoi ky \n");
    printf("3- Tinh tien dien\n");
    printf("4- Bang cuu chuong\n");
    printf("5- Tinh giai thua\n");
    printf("6- Hien thi tam giac vuong bang so\n");
    printf("7- Nhap tuan tu tu 1 den n\n");
    printf("8- Tinh fibonaci\n");
    printf("9- Hien thi tam giac can *\n");
    printf("------------------\n");
    printf("chon STT chuc nang: \n");
    printf("------------------\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        Bai3();
        menu();
        break;
    case 2:
        Bai4();
        menu();
        break;
    case 3:
        Bai5();
        menu();
        break;
    case 4:
        Bai6();
        menu();
        break;
    case 5:
        Bai7();
        menu();
        break;
    case 6:
        Bai8();
        menu();
        break;
    case 7:
        Bai9();
        menu();
        break;
    case 8:
        Bai10();
        menu();
        break;
    case 9:
        Bai11();
        menu();
        break;
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
