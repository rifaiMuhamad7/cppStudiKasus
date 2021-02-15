#include <iostream>

using namespace std;

string namaPlayer;
string kelas;
char pilihanPlayer;
int totalSkorBenar;
int totalNilaiAkhir;
int totalSkorSalah;

int main(){ // start of main
    cout << "========== SOAL TEBAK BENAR & SALAH ===========\n";
    cout << "Soal tes untuk Siswa siswi SMK Teknik Komputer\n";

    cout << "Masukan nama anda : ";
    getline(cin, namaPlayer);
    cout << "Masukan kelas anda : ";
    getline(cin, kelas);
    cout << "Hallo selamat datang " << namaPlayer << endl;
    cout << "Anda berada di kelas " << kelas << endl;
    cout << "Jawablah pertanyaan dibawah ini dengan menekan huruf b atau s" << endl;
    cout << "\n";

    cout << "========== Program Dimulai\n";
    totalSkorBenar = 0;
    totalSkorSalah = 0;

    cout << "1. Apakah Denis Ritchi penemu bahasa pemograman C? benar [b] atau salah [s] : ";
    cin >> pilihanPlayer;

    if (pilihanPlayer == 'b') {
        cout << "Selamat jawaban anda benar\n";
        totalSkorBenar = totalSkorBenar + 1;
    } else if (pilihanPlayer == 's') {
        cout << "Maaf jawaban anda salah\n";
        totalSkorSalah = totalSkorSalah + 1;
    } else {
        cout << "Maaf anda memasukan pilihan yang salah, Silahkan masukan huruf b atau s saja.\n";
    }

    cout << "2. Apakah Linus Trovald Penemu Kernel Linux? benar [b] salah [s] : ";
    cin >> pilihanPlayer;

    if (pilihanPlayer == 'b') {
        cout << "Selamat jawaban anda benar\n";
        totalSkorBenar = totalSkorBenar + 1;
    } else if (pilihanPlayer == 's') {
        cout << "Maaf jawaban anda salah\n";
        totalSkorSalah = totalSkorSalah + 1;
    } else {
        cout << "Maaf anda memasukan pilihan yang salah, Silahkan masukan huruf b atau s saja.\n";
    }

    cout << "3. Bill Gates adalah penemu sistem operasi BSD. benar [b] atau salah [s] : ";
    cin >> pilihanPlayer;

    if (pilihanPlayer == 'b') {
        cout << "Maaf jawaban anda salah\n";
        totalSkorSalah = totalSkorSalah + 1;
    } else if (pilihanPlayer == 's') {
        cout << "Selamat Jawaban anda benar\n";
        totalSkorBenar = totalSkorBenar + 1;
    } else {
        cout << "Maaf anda memasukan pilihan yang salah, Silahkan masukan huruf b atau s saja.\n";
    }

    cout << "4. Sistem operasi Windows versi terakhir adalah windows 11. benar [b] atas salah [s] : ";
    cin >> pilihanPlayer;

    if (pilihanPlayer == 'b') {
        cout << "Maaf jawaban anda salah\n";
        totalSkorSalah = totalSkorSalah + 1;
    } else if (pilihanPlayer == 's') {
        cout << "Selamat Jawaban anda benar\n";
        totalSkorBenar = totalSkorBenar + 1;
    } else {
        cout << "Maaf anda memasukan pilihan yang salah, Silahkan masukan huruf b atau s saja.\n";
    }

    cout << "5. IP adalah singkatan dari Internet Protokol. benar [b] atau salah [s] : ";
    cin >> pilihanPlayer;

    if (pilihanPlayer == 'b') {
        cout << "Selamat Jawaban anda benar\n";
        totalSkorBenar = totalSkorBenar + 1;
    } else if (pilihanPlayer == 's') {
        cout << "Maaf jawaban anda salah\n";
        totalSkorSalah = totalSkorSalah + 1;
    } else {
        cout << "Maaf anda memasukan pilihan yang salah, Silahkan masukan huruf b atau s saja.\n";
    }
    cout << "\n";
    cout << "Hallo " << namaPlayer << " Dibawah ini adalah hasil jawaban anda " << endl;
    cout << "Hasil Jawaban benar = " << totalSkorBenar << endl;
    totalNilaiAkhir = totalSkorBenar * 2;

    cout << "Anda Mendapatkan Nilai = " << totalNilaiAkhir<< endl;

    if (totalSkorBenar >= 3){
        cout << "Selamat anda bisa melanjutkan tes berikutnya" << endl;
    } else if (totalSkorBenar <= 2){
        cout << "Maaf anda telah GAGAL dan tidak bisa melanjutkan tes berikutnya" << endl;
    } 

    cout << "========== Program Selesai\n";

    cin.get();
    return 0;
} // end main
