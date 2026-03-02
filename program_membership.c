#include <stdio.h>
#include <ctype.h>

int main () {
    // program membership sederhana
    char nama[150];
    double saldo;

    puts("=========== MEMBERSHIP COURSE ===========");
    
    printf("\nMasukkan Nama Anda : ");
    scanf("%s", &nama);
    puts("");

    puts("PASTIKAN SALDO ANDA DIATAS Rp2,000,000");
    printf("Masukkan Saldo anda saat ini : ");
    scanf("%lf", &saldo);

    if(saldo >= 2000000) {
        printf("\n\n=================== WELCOME TO MEMBERSHIP COURSE ===================\n\n");
        printf("PILIH PAKET MEMBERSHIP COURSE \n A) 1 Bulan = Rp500,000 \n B) 3 Bulan = Rp1,000,000 \n C) 6 Bulan = Rp1,800,000 \n D) 1 Tahun = Rp2,500,000 \n 0) Kayaknya gak jadi deh\n\n Pilih Dengan mengetikkan huruf kapital : ");
        
        char pilih, *paket;
        double harga;
        scanf(" %c", &pilih);

        if (pilih == 'A') {
            paket = "Membership Course 1 Bulan";
            harga = 500000;
            saldo-=harga;

        } else if (pilih == 'B') {
            paket = "Membership Course 7 Bulan";
            harga = 1000000;
            saldo-=harga;

        } else if (pilih == 'C') {
            paket = "Membership Course 6 Bulan";
            harga = 1800000;
            saldo-=harga;

        } else if (pilih == 'D') {

            if (saldo < 2500000) {
                printf("\nMaaf, sepertinya uangmu kurang %.2f deh kak %s \n", 2500000 - saldo, nama);
            } else {
                paket = "Membership Course 1 Tahun";
                harga = 2500000;
                saldo-=harga;
            }
            
        } else if (pilih == '0') {
            printf("\nYahh gak jadi beli, Semoga next bisa jadi beli paket membership yaa kak %s \n", nama);

        } else {
            printf("\n\nMaaf kamu mungkin salah memasukkan pilihan\n");
        }

        if (harga != 0) {
            printf("\n\n=========== STRUK PEMBELIAN ===========\n\n");
            printf("Nama : %s\n",nama);
            printf("TOTAL:  \n   Nama Barang : %s \n",paket);
            printf("   Harga Barang : %.2f \n", harga);
            
            printf("\nSaldo Awal: %.2f", harga + saldo);

            printf("\nSaldo Akhir: %.2f\n", saldo);

            printf("\n============= TERIMAKASIH =============\n");
            
        }

    } else {
        puts("Maaf Banget Saldo Kamu Tidak Cukup :(");
    }

    return 0;
}