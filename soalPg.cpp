#include <iostream>

using namespace std;

int main(){
    string namaMurid;
    string kelas;
    int totalNilai;
    char jawabanMurid;
    int jawabanBenar;
    int jumlahNilai;

    cout << "Silahkan masukan Nama Lengkap Anda : ";
    getline (cin, namaMurid);
    cout << "Silahkan masukan kelas : ";
    getline (cin, kelas);
    cout << "\n";

    cout << "Selamat Datang " << namaMurid << endl;
    cout << "Anda berada di kelas " << kelas << endl;
    cout << "\n";

    cout << "------ Soal Pilihan Ganda " << endl;
    cout << "Mata Pelajaran : Teknik Komputer" << endl;
    cout << "Jawablah soal pilihan ganda dengan memasukan huruf a b c d e" << endl;
    cout << "\n";

    totalNilai = 0;

    cout << "1. Yang dimaksud dengan server adalah?\n";
    cout << "a) Pemasok\n";
    cout << "b) Peladen\n";
    cout << "c) Pengingat\n";
    cout << "d) Pengintai\n";
    cout << "e) Perusak sistem\n";
    cout << "\n";

    cout << "Jawaban anda : ";
    cin >> jawabanMurid;

    if(jawabanMurid == 'b'){
        totalNilai = totalNilai + 1;
    }
    cout << "\n";

    cout << "2. Nama lain dari direktori adalah?\n";
    cout << "a) Folder\n";
    cout << "b) File\n";
    cout << "c) Program\n";
    cout << "d) Backup\n";
    cout << "e) Data\n";
    cout << "\n";

    cout << "Jawaban anda : ";
    cin >> jawabanMurid;

    if(jawabanMurid == 'a'){
        totalNilai = totalNilai + 1;
    }
    cout << "\n";

    cout << "3. Hak akses tertinggi di Sistem Operasi Linux adalah?\n";
    cout << "a) var\n";
    cout << "b) lib\n";
    cout << "c) root\n";
    cout << "d) bin\n";
    cout << "e) etc\n";
    cout << "\n";

    cout << "Jawaban anda : ";
    cin >> jawabanMurid;

    if(jawabanMurid == 'c'){
        totalNilai = totalNilai + 1;
    }
    cout << "\n";

    cout << "4. Sistem operasi windows yang terakhir sampai saat ini dalah windows ....\n";
    cout << "a) 10\n";
    cout << "b) 11\n";
    cout << "c) 8\n";
    cout << "d) 7\n";
    cout << "e) xp\n";
    cout << "\n";

    cout << "Jawaban anda : ";
    cin >> jawabanMurid;

    if(jawabanMurid == 'a'){
        totalNilai = totalNilai + 1;
    }
    cout << "\n";

    cout << "5. Sistem operasi yang digadang gadang paling aman untuk saat ini adalah?\n";
    cout << "a) Windows\n";
    cout << "b) Solaris\n";
    cout << "c) Linux\n";
    cout << "d) Open BSD\n";
    cout << "e) Semua jawaban salah\n";
    cout << "\n";

    cout << "Jawaban anda : ";
    cin >> jawabanMurid;

    if(jawabanMurid == 'd'){
        totalNilai = totalNilai + 1;
    }
    cout << "\n";

    cout << "Jawaban benar anda = " << totalNilai << endl;

    jumlahNilai = totalNilai * 2;
    cout << "Selamat anda mendapatkan nilai = " << jumlahNilai << endl;

    cin.get();
    return 0;
}
