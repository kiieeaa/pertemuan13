#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris;
    // membuat file dalam mode menulis
    ofstream outfile;
    //menunjuk sebuah nama file
    outfile.open("contohfile.txt");
    cout << " > = menulis file, \'q\' untuk keluar" << endl;


    //unlimmmited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari baris kedalam file
        outfile << baris << endl;

    }
    //selesai dalam menulis sekarang tutup file
    outfile.close();
    //membuka file dalam mode membaca
    ifstream infile;
    //menunjukan sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka
    if (infile.is_open()){
        //melakukan perulanggan setiap baris
        {
            //dan tampilkan ini
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selsai
        infile.close();
    }
    //jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;

}
