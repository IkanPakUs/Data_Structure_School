#include <iostream>
#include <conio.h>

using namespace std;

#define max_el 9

int Arya[max_el];

void input(){
    int data;

    for (int i = 0; i < max_el; i++) {
        cout << "Masukan data pada array = ";
        cin >> data;

        Arya[i] = data;
    }
    cout << endl;
}

void show(){
    int i = 0;

    cout << "Data pada array = ";
    while (i < max_el) {
        cout << "[" << Arya[i] << "] ";
        i++;
    }
}


int main(){
    input();

    show();
    getch();
}