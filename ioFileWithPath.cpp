#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;
    cout << " masukan nama file : ";
    cin >> NamaFile;
    // membuka file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= menuis file, \'q\' untuk keluar" << endl;
    //unlimited loop untuk menulis
}