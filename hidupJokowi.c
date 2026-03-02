#include <stdio.h>
#include <ctype.h>

int main() {

  int jumlah;
  char ulangi = 'Y';

  while(toupper(ulangi) == 'Y') {

    puts("=========== PROGRAM LOOP HIDUP JOKOWI ===========");
    printf("Berapa kali kamu ingin memunculkan kata Hidup Jokowi ?\n Jawab : ");
    scanf("%i", &jumlah);

    for (int hitungan = 1; hitungan <= jumlah; hitungan++) {
      printf("\nHIDUP JOKOWI !!!!! ke-%i", hitungan);
    }

    
    //tanya apakah ingin menampilkan teks "HIDUP JOKOWI !!!" lagi ?
    printf("\n\nApakah kamu masih ingin menampilkan teks HIDUP JOKOWI !!! lagi ?  (Y/n) : ");
    scanf("%s", &ulangi);

    if(toupper(ulangi) == 'N') {
      break;
    }
  }

  puts("Makasih Udah mau melestarikan kata HIDUP JOKOWI :) ");

  return 0;
}
