#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/*
    Okey, di mini project kali ini kita akan membuat kalkulator sederhana yang
    menggunakan materi fungsi, array, input,looping, ubah tipe data, dll.
*/

void tampilkan_pesan() {
    printf(" A. Penjumlahan\n B. Pengurangan\n C. Perkalian\n D. Pembagian\n E. Hasil Bagi atau Modulus\n Pilih opsi : ");
}

// kita buat fungsi-fungsinya untuk operasi yaa guys.
int penjumlahan(int angka_pertama, int angka_kedua) {
    return angka_pertama + angka_kedua;
}

int pengurangan(int angka_pertama, int angka_kedua) {
    return angka_pertama - angka_kedua;
}

double perkalian(int angka_pertama, int angka_kedua) {
    double hasil = (double)angka_pertama * (double)angka_kedua; // mengantisipasi hasil perkalian yang sangat besar guys
    return hasil;
}

double pembagian(int angka_pertama, int angka_kedua) {
    double hasil = (double)angka_pertama / (double)angka_kedua;
    return hasil;
}

int modulus(int angka_pertama, int angka_kedua) {
    return angka_pertama % angka_kedua;
}

void proses(){
    char pilih;
    int angka1, angka2;

    printf("\n\n================= PROGRAM KALKULATOR 2 BILANGAN SEDERHANA =================\n\n");
    tampilkan_pesan();
    scanf("%c", &pilih);

    // buat input untuk memasukkan angka pertama
    printf("\n Masukkan angka pertama : ");
    scanf("%i", &angka1);

    // buat juga untuk memasukkan angka kedua yaa guys
    printf("\n Masukkan angka kedua : ");
    scanf("%i", &angka2);


    switch(toupper(pilih)) {
        case 'A':
            //diisi fungsi penjumlahan
            printf("\nHasil Penjumlahan %i + %i = %i ",angka1,angka2,penjumlahan(angka1,angka2));
            break;
        case 'B':
            // diisi fungsi pengurangan
            printf("\nHasil Pengurangan %i - %i = %i ",angka1,angka2,pengurangan(angka1,angka2));
            break;
        case 'C':
            printf("\nHasil Perkalian %i * %i = %.2f ",angka1,angka2,perkalian(angka1,angka2));
            break;
        case 'D':
            printf("\nHasil Penjumlahan %i / %i = %.2f ",angka1,angka2,pembagian(angka1,angka2));
            break;
        case 'E':
            printf("\nHasil Modulus dari %i dan %i adalah %i ",angka1,angka2,modulus(angka1,angka2)); // aku pake kata-kata karean kalo "%" entah kenapa error euy
            break;
        default:
            puts("Pilihannya dari A sampai E doang woyy !!! ");
    }
}

void main() {
    char isLanjut; //niru style mas faqihza kelas terbuka

    // untuk perulangan
    while(true) {    
        proses(); // ini fungsi yang panjang ---> lebih tepatnya nested function

        printf("\n\nApakah Masih pengen lanjut skuyy ? (Y/n) : ");
        scanf(" %c", &isLanjut);

        if (toupper(isLanjut) == 'N') {
            break;
        }
    }
    puts("MAKACIHH UDAH COBA PROGRAM SEDERHANAKUUUUUUU :)");
}