#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // 1) Variabel
    string nama = "Muhammad Zarrar";
    int umur = 19;            // integer
    double tinggi_cm = 175.9; // float/double
    bool ada_pacar = false;   // boolean

    cout << "Nama: " << nama << "\n";
    cout << "Umur: " << umur << " tahun, Tinggi: " << tinggi_cm << " cm\n";
    cout << "Ada pacar? " << (ada_pacar ? "Ya" : "Tidak") << "\n\n";

    // 2) Operator (aritmatika dan perbandingan singkat)
    int a = 10;
    int b = 3;
    cout << "-- Operator --\n";
    cout << a << " + " << b << " = " << (a + b) << "\n";
    cout << a << " - " << b << " = " << (a - b) << "\n";
    cout << a << " * " << b << " = " << (a * b) << "\n";
    cout << a << " / " << b << " = " << (static_cast<double>(a) / b) << " (pembagian biasa)\n";
    cout << a << " / " << b << " = " << (a / b) << " (pembagian bulat, int)\n";
    cout << a << " % " << b << " = " << (a % b) << " (sisa bagi)\n";
    cout << a << " ^ " << b << " = " << (a * a * a) /* contoh pangkat sederhana untuk b=3 */ << " (contoh pangkat)\n";
    cout << a << " > " << b << "? " << (a > b ? "true" : "false") << "\n";
    cout << "Apakah 'Muhammad' ada di nama? "
         << (nama.find("Muhammad") != string::npos ? "Ya" : "Tidak") << "\n\n";

    // 3) Branching (if / else)
    cout << "-- Branching --\n";
    string status;
    if (umur >= 21)
    {
        status = "Dewasa penuh (>=21)";
    }
    else if (umur >= 18)
    {
        status = "Dewasa (18-20)";
    }
    else
    {
        status = "Belum dewasa";
    }
    cout << "Status umur: " << status << "\n";

    // contoh gabungan kondisi
    if (umur >= 18 && ada_pacar)
    {
        cout << "Boleh ikut acara khusus untuk dewasa dengan pasangan.\n\n";
    }
    else
    {
        cout << "Tidak memenuhi syarat acara pasangan dewasa.\n\n";
    }

    // 4) Looping: for dan while
    cout << "-- Looping for --\n";
    vector<string> hobi = {"ngoding", "main gitar", "ngopi"};
    for (size_t i = 0; i < hobi.size(); ++i)
    {
        cout << (i + 1) << ". " << hobi[i] << "\n";
    }

    cout << "\n-- Looping while --\n";
    int count = 1;
    while (count <= 5)
    {
        if (count == 3)
        {
            cout << "melewati nomor 3 (continue)\n";
            ++count;
            continue;
        }
        cout << "Perulangan ke-" << count << "\n";
        if (count == 4)
        {
            cout << "berhenti lebih awal (break)\n";
            break;
        }
        ++count;
    }

    return 0;
}
