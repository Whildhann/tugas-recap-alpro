#include <stdio.h>

float rumusKecepatan (int jarak, int waktu){
    return(float) jarak/waktu;
}
float rumusJarak (int kecepatan, int waktu){
    return (float) kecepatan*waktu;
}
float rumusWaktu(int jarak, int kecepatan){
    return (float) jarak/kecepatan;
}

int main(){
    int jarak1, waktu1, kecepatan1;
    int jarak2, waktu2, kecepatan2;
    int jarak3, waktu3, kecepatan3;

    printf ("Masukkan jarak(meter) dan waktu(detik):");
    scanf ("%d", &jarak1);
    scanf ("%d", &waktu1);

    printf("Kecepatan yang didapat yaitu: %.2f\n", rumusKecepatan(jarak1,waktu1));

    printf ("Masukkan kecepatan(m/s) dan waktu(detik):");
    scanf ("%d", &kecepatan2);
    scanf ("%d", &waktu2);

    printf ("Jarak yang didapat yaitu: %.2f\n", rumusJarak (kecepatan2, waktu2));

    printf ("Masukkan jarak(meter) dan kecepatan(m/s):");
    scanf ("%d", &jarak3);
    scanf ("%d", &kecepatan3);

    printf ("Waktu yang didapat yaitu: %.2f\n", rumusWaktu (jarak3,kecepatan3));

    return 0;
}