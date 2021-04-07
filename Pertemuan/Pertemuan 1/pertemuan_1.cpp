#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    // Kamus
    int nilai;

    // Algoritma
    cout << "Masukan Bilangan = ";
    cin >> nilai;

    if (nilai % 2 == 0) {
        cout << "Genap";
    } else {
        cout << "Ganjil";
    }

    getch();
    
}