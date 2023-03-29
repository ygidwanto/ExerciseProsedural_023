#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menentukan status kandidat berdasarkan nilai
string getStatus(int nilaiMatematika, int nilaiRataRata) {
    if (nilaiRataRata >= 70 || nilaiMatematika > 80) {
        return "Diterima";
    }
    else {
        return "Ditolak";
    }
}
