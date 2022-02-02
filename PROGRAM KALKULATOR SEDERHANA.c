#include <stdio.h>
#include <conio.h> //untuk membawa operator getch();

int main(){

float x, y, hasil;
char kabataku;

begin :
system("color 9"); // untuk memberikan warna pada tulisan program tinggal ganti angka saja yang anda mau
printf("\t\t\t+------------------------------+\n");
printf("\t\t\t| PROGRAM KALKULATOR SEDERHANA |\n");
printf("\t\t\t+------------------------------+\n\n");

awal :
printf("Angka 1 = ");
scanf("%f", &x);
printf("x / + - = ");
scanf(" %c", &kabataku);
printf("Angka 2 = ");
scanf("%f", &y);

if(kabataku == 'x') hasil = x * y;
else if(kabataku == '/') hasil = x / y;
else if(kabataku == '+') hasil = x + y;
else if(kabataku == '-') hasil = x - y;
else{
    printf("OPERASI MATEMATIKA YANG ANDA MASUKAN SALAH\n\n");
goto awal;
}

printf("------------ = \n");
printf("%.2f", hasil);
getch(); // fungsinya untuk menahan program sampai yang di atas getch, jika menekan enter maka program akan melanjutkan
system("cls"); // fungsinya untuk menghapus/membersihkan semua program di cmd yang di atasnya
goto begin;

    return 0;
}
