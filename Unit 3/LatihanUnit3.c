#include <stdio.h>

int ary[];

int main() {
    int banyakary;
    int jumlhary;

    printf("Penjumlahan Isi Array \n");
    printf("Berapa banyak array yang anda inginkan??: ");
    scanf("%d",&banyakary);
    printf("Mohon masukkan angka sebanyak array yang anda tulis tadi: \n");
    for(int i=0; i < banyakary; i++){
        scanf("%d",&ary[i]);
    }

    for(int i=0; i < banyakary; i++){
        jumlhary += ary[i];
    }

    printf("Hasil penjumlahan dari isi array adalah %d", jumlhary);
    return 0;
}
