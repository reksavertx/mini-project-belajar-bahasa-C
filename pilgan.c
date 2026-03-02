#include <stdio.h>
#include <ctype.h>

int main() {

  char pilihan;

  printf("Siapakah nama asli Boss phii CEO mancer.work ? : ");

  printf("\n A. Bryan Dewa Wicaksana\n B. Kingsenyan\n C. Revo Arya\n D. Vitalik Buterin\n E. Sam Altman \nJawab: ");

  scanf("%s",&pilihan);

  switch(toupper(pilihan)){

    case 'B':
      puts("Anda Benar !!!");
      break;
      
    case 'A':
      puts("Anda Salah !!!");
      break;
      
    case 'C':
      puts("Anda Salah !!!");
      break;
      
    case 'D':
      puts("Anda Salah !!!");
      break;
      
    case 'E':
      puts("Anda Salah !!!");
      break;
       
    default:
      puts("Pilihannya cuma A sampai E woy !!!");

  }
  return 0;
}
