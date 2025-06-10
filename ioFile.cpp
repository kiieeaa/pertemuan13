#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris;
    // membuat file dalam mode menulis
    ofstream outfile;
    outfile.open("contohfile.txt");
    cout << " > = menulis file, \'q\' untuk keluar" << endl;

    while (true) {
        cout << "- ";
        getline(cin, baris);
        if (baris == "q") break;
        outfile << baris << endl;

    }

    outfile.close();
    ifstream infile;
    
}