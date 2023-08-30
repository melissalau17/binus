#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Fungsi untuk membersihkan stdin dari karakter tersisa
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

// Fungsi utama
int main() {
    int total_detik, jam, menit, detik;
    char pilihan;

    // Menampilkan judul program
    printf("=== Konversi Total Detik ke Jam, Menit, dan Detik ===\n");
    printf("================ Made By Kelompok 7 =================\n");
    do {
        // Meminta input total detik dari pengguna dengan validasi
        printf("\nMasukkan Total Detik: ");
        if (scanf("%d", &total_detik) != 1) {
            printf("Mohon maaf data yang anda masukan bukanlah berupa angka, mohon untuk input kembali!\n");
            clearInputBuffer();
            continue; // Mengulang loop
        }

        clearInputBuffer(); // Membersihkan stdin dari karakter tersisa

        // Menghitung jam, menit, dan detik
        jam = total_detik / 3600;
        total_detik %= 3600;
        menit = total_detik / 60;
        detik = total_detik % 60;

        // Menampilkan hasil konversi dengan format yang lebih menarik
        printf("\nHasil konversi:\n");
        printf("Jam    : %d jam\n", jam);
        printf("Menit  : %d menit\n", menit);
        printf("Detik  : %d detik\n", detik);
        printf("\n======= Total Waktu: %d jam, %d menit, %d detik ======= \n", jam, menit, detik);

        // Meminta pilihan untuk input ulang atau selesai
        printf("\nApakah Anda ingin mengkonversi lagi? (y/n): ");
        scanf(" %c", &pilihan);

        clearInputBuffer(); // Membersihkan stdin dari karakter tersisa

    } while (tolower(pilihan) == 'y'); // Mengulang loop jika pilihan adalah 'y'

    printf("Terima kasih telah menggunakan program ini. Sampai jumpa!\n");

    return 0;
}

