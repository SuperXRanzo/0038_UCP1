//1. Berikan Contoh Deklarasi Variable. Berikan minimal 3 variable dengan tipe data yang berbeda
// if, else, for
//2. berikan contoh minimal satu implementasi dari condition statement
// Kaidah Pemrograman -> Kondisi -> dengan diuji
// -> Jika 1 Kondisi yang digunakan = Simple IF
// -> Jika 2 Kondisi yang digunakan = IF ELSE
// -> Jika ada lebih dari 2 kondisi = Netral IF
// -> Gabungan Kondisi yang menjadu sebuah syarat
//3. Berikan Contoh Implementasi Struct
// Struktur C 3
#include <iostream>
#include <string>
using namespace  std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    getline(cin, mhs.nim);
    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    cout << "Alamat Mahasiswa : " << endl;
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;

    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n NIM : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : ";
    cout << "\n \t Desa : " << mhs.alamat.desa;
    cout << "\n \t Kota : " << mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur;
}
//4. Berikan Contoh Dari Implementasi dari prosedur fungsi: Implementasi prosedur def sapa(): print("Anda LULUS!")
//5. Berikan Contoh Implementasi looping: Looping dengan for loop: Mencetak angka dari 1 hingga 5 for i in range(1, 6)
//6. Pada penerimaan mahasiswa baru tercatat ada 20 kandidat yang telah terdaftar. Kemudian diadakan tes tertulis untuk2 mata pelajaran yaitu
//   Matematika dan Bahasa Inggris. Nilai dari hasil tes tersebut kemudian diolah dengan menggunakan bantuan program komputer, dengan ketentuan sebagai berikut:
 
#include <iostream>
using namespace std;

int main()
{
    int NilaiMTK, NilaiBahasaInggris;
    string status;
    float Rerata;

    cout << "Nilai Matematika" << endl;
    cin >> NilaiMTK;
    cout << "Nilai Bahasa Inggris" << endl;
    cin >> NilaiBahasaInggris;

    Rerata = (NilaiMTK + NilaiBahasaInggris) / 2;

    if (NilaiMTK > 80 || Rerata > 70)
    {
        status = "Lulus";
        if (NilaiMTK >= 85)
    }
    else
    {
        status = "Tidak Lulus";
    }
    cout << "Nilai Matematika: " << NilaiMTK << endl;
    cout << "Nilai Bahasa Inggris" << NilaiBahasaInggris << endl;
    cout << "Status Kelulusan: " << status << endl;
}
