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
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file " << endl;
    if (infile.is_open()){
        {
            cout << baris << '\n';
        }
        //tutup file tersebut setelah selsai
        infile.close();
    }
    else cout << "Unable to open file";
    return 0;

}
