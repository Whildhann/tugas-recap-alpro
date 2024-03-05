#include <stdio.h>

int kelilingpersegi(int angka){
    return 4 * angka;
}
int luaspersegi(int angka){
    return angka * angka;
}
int volumekubus(int angka){
    return angka * angka * angka;
}

int sisi;

int main(){
    int keliling;
    int luas;
    int volume;

    printf("Panjang sisi persegi: ");
    scanf("%d", &sisi);

    keliling = kelilingpersegi(sisi);
    luas = luaspersegi(sisi);
    volume = volumekubus(sisi);

    printf("Keliling perseginya adalah: %d\n",keliling);
    printf("Luas perseginya adalah: %d\n",luas);
    printf("Volume kubusnya adalah: %d",volume);
    return 0;
}