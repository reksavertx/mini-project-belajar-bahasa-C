#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char username_login[100], password_login[100];

    puts("=========== LOGIN ===========");
    printf("\n Masukkan username\t: ");
    scanf("%s",&username_login);
    
    printf("\n Masukkan password\t: ");
    fgets(password_login, sizeof(password_login),stdin);
    /*
    kalo pake scanf itu hanya bisa menampung 1x spasi.
    kalo pake fgets bisa berkali-kali. tapi minus akhirnya ada \n / enter
    jadi... kalo pake fgets di input harus hapus \n pake syntax.

    password_login[strcspn(password_login, "\n")] = 0; 
    */
    password_login[strcspn(password_login, "\n")] = 0; // menghapus neew line. 

    if(strcmp("reksavertx",username_login) == 0 && strcmp("Gabut euy 123",password_login) == 0) {
        
        puts("=========== ADMIN PAGE ===========");
        printf("Welcome %s \n", username_login);

    } else {
        puts("USERNAME ATAU PASSWORD YANG KAMU MASUKKAN SALAH !!!");
    }
    return 0;
}