#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>

/*
  INI ADALAH MINI PROJECT IMLPLEMENTASI DARI PROGRAM STRUCT
  YANG SAYA AMBIL DARI SUMBER petanikode.com
*/
char user[64] = "reksavertx";
char pw[64] = "BismillahBugBitcoin";

struct viewMore
{
  bool KYC;
  int critical;
  int high;
  int medium;
  int low;
};

struct protokol 
{
  char* namaProtokol;
  bool verifiedProtokol;
  int maxBounty;
  struct viewMore viewmore;
};

void tampilkanInfoProtokol(struct protokol info) {


  printf("\nNama Protokol : %s\n", info.namaProtokol);
  printf("Protokol Terverifikasi : %s\n", info.verifiedProtokol ? "Iya" : "Tidak");
  printf("Max Saverity : %i USD\n", info.maxBounty);
  
  puts("=== VIEWMORE ===");
  printf("  Butuh KYC : %s\n", info.viewmore.KYC ? "Iya" :  "Tidak");
  printf("  Max Saverity Critical : %i USD\n", info.viewmore.critical);
  printf("  Max Saverity High : %i USD\n", info.viewmore.high);
  printf("  Max Saverity Medium : %i USD\n", info.viewmore.medium);
  printf("  Max Saverity Low : %i USD\n", info.viewmore.low);
}

bool validasi() {
  /*
    Kukasih function sekalian buat latihan RE sekalian buat latihan RE
  */

  char username[64]; //kalo pake char * .... jangan pake fgets
  char* password;
  bool verif = false;

  puts("======= VERIFIKASI =======");

  printf("\n\nMasukkan username : ");
  fgets(username, sizeof(username), stdin);
  username[strcspn(username, "\n")] = '\0'; //hapus \n dibelakang (kalo fgets ada \n dibelakang)

  password = getpass("Masukkan Password : ");
  
  if(strcmp(username, user) == 0 && strcmp(password,pw) == 0) {
    verif = true;
  }

  return verif;
}

int main() {
  bool verif;
  verif = validasi();

  if( verif != 1) {
    puts("UPSS SANDI SALAH");
    return 0;
  }
  // masukkan data struct
  struct protokol savertx;
  printf("\n\n=========== LIST BUG BOUNTY PROGRAM ===========\n\n");

  savertx.namaProtokol = "SAVERTX FINANCE";
  savertx.verifiedProtokol = true;
  savertx.maxBounty = 5000000;
  savertx.viewmore.KYC = false;
  savertx.viewmore.critical = 5000000;
  savertx.viewmore.high = 3000000;
  savertx.viewmore.medium = 1000000;
  savertx.viewmore.low = 500000;

  struct protokol xoverz = {
    .namaProtokol = "XOVERZAI TECH",
    .verifiedProtokol = true,
    .maxBounty = 10000000,
    .viewmore = {
      .KYC = true,
      .critical = 10000000,
      .high = 5000000,
      .medium = 2000000,
      .low = 400000
    }
  };


  tampilkanInfoProtokol(savertx);
  tampilkanInfoProtokol(xoverz);
  return 0;
}
