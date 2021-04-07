#include <iostream>
#include <conio.h>

using namespace std;


//------ Property ------//

#define max_el 10

struct UTS{
    // data //
    int arr[max_el];
    int head;
    int tail;
};

UTS Arya;

string message;


//------ Method ------//

// Berfungsi membersihkan isi antrian
// agar siap digunakan lagi
void clear(){
    Arya.head = Arya.tail = -1;
}

// Berfungsi untuk mengecek apakah
// antrian berisi atau kosong
bool isEmpty(){
    return (Arya.tail == -1);
}

// Berfungsi untuk mengecek apakah
// antrian penuh atau belum
bool isFull(){
    return (Arya.tail == (max_el - 1));
}

// Berfungsi untuk memasukan data 
// kedalam antrian sesuai input
void enQueue(int data){

    if (isEmpty()){
        Arya.head = Arya.tail = 0;
        Arya.arr[Arya.tail] = data;
        message = "Data berhasil masuk";
    } else {
        if(!isFull()){
            Arya.tail++;
            Arya.arr[Arya.tail] = data;
            message = "Data berhasil masuk";
        } else {
            message = "Antrian penuh!!";

        }
    }
}

// Berfungsi untuk mengeluarkan data
// paling pertama dalam antrian
void deQueue(){
    if (!isEmpty()){
        int a = Arya.arr[Arya.head];

        for (int i = Arya.head; i < Arya.tail; i++) {
            Arya.arr[i] = Arya.arr[i + 1];
        }

        Arya.tail--;

        message = "Data berhasil dikeluarkan";

    } else {
        message = "Tidak bisa menghapus, antrian Kosong";

    }
    cout << endl;
}

// Berfungsi untuk mencetak isi
// data di dalam antrian
void show(){

    for (int i = Arya.head; i <= Arya.tail; i++) {
        cout << "[" << Arya.arr[i] << "] ";
    }

}

// Hanya dipergunakan sebagai pesan
// untuk memberitahu kondisi antrian
void teksShow(){

    if(!isEmpty()){
        cout << "Data pada array = ";

        show();
    } else {
        cout << "Antrian Kosong";
    } 
} 

// Hanya digunakan untuk tampilan
void garis()
{
    cout << "----------------------------------------------------------------" << endl;
}

int main(){
    int data;
    int pilih;

    clear();

    do {
        system("cls");
        garis();
        teksShow();
        cout << endl;
        garis();
        cout << "MAX : " << max_el;
        cout << " || Head : " << Arya.head << " || Tail : " << Arya.tail;
        cout << endl;
        garis();
        cout << "Pesan : " << message << endl;
        garis();
        cout << "   Menu Queue " << endl;
        garis();
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Clear" << endl;
        cout << "3. Close" << endl;
        garis();
        cout << "   Masukkan pilihan Anda: " ;
        cin  >> pilih;


        switch (pilih) {
        case 1:
            cout << "   Masukan data = ";
            cin >> data;
            enQueue(data);
            break;
        
        case 2:
            deQueue();
            break;

        case 3:
            clear();
            break;
        }


    } while (pilih != 4);
}