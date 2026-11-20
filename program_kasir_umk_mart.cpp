#include <iostream>

using namespace std;

int main() {
    char lanjut;

    // Perulangan utama untuk melayani pelanggan secara terus-menerus
    do {
        int jumlahBarang;
        double hargaBarang, totalBelanja = 0, uangBayar, kembalian;

        cout << "=== PROGRAM KASIR UMK MART ===" << endl;

        // a. Input barang
        cout << "Masukkan jumlah barang yang dibeli: ";
        cin >> jumlahBarang;

        for (int i = 1; i <= jumlahBarang; i++) {
            cout << "Masukkan harga barang ke-" << i << ": Rp ";
            cin >> hargaBarang;
            totalBelanja += hargaBarang;
        }

        cout << "Total belanja: Rp " << totalBelanja << endl;

        // b. Pembayaran
        cout << "\nMasukkan uang pembayaran: Rp ";
        cin >> uangBayar;

        while (uangBayar < totalBelanja) {
            cout << "Uang kurang, ulangi!" << endl;
            cout << "Masukkan uang pembayaran: Rp ";
            cin >> uangBayar;
        }

        kembalian = uangBayar - totalBelanja;
        cout << "Kembalian: Rp " << kembalian << endl;

        // c. Pelanggan berikutnya
        cout << "\nAda pelanggan berikutnya? (y/n): ";
        cin >> lanjut;
        cout << endl;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Program selesai. Terima kasih!" << endl;

    return 0;
}
