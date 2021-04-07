#include <iostream>
#include <conio.h>

using namespace std;

int cetak(int a[]){
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < 5; i++) {
        cout << a[i] << ",";
    }
    
}

int main(){
    // Kamus
    const int max_el = 5;
    int a[max_el];

    // Algoritma
    for (int i = 0; i < max_el; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cetak(a);
    getch();
    
}