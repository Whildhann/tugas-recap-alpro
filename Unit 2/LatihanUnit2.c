#include <stdio.h>

int main (){
    int jmlhtransaksi;
    int nmnltransaksi;
    int totaltransaksi = 0;

    printf ("Berapa banyak transaksi yang anda lakukan??: ");
    scanf("%d",&jmlhtransaksi);
    if (jmlhtransaksi <= 0){
        printf ("Tidak ada transaksi hari ini\n");
    }

    printf ("Nominal transaksi yang anda lakukan: \n");

    for (int i=0;i<jmlhtransaksi;i++){
        scanf ("%d",&nmnltransaksi);
        totaltransaksi += nmnltransaksi;
    }

    printf("Total pengeluaran anda: %d\n",totaltransaksi);

    return 0;
}