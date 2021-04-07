#include <iostream>
#include <conio.h>

using namespace std;


// Property

#define max_el 5

struct Queue01{
    /* data */
    int arr[max_el];
    int head;
    int tail;
};

Queue01 queue;

string message;
int totalvar = 0;
double averagevar;


// Method
void create(){
    queue.head = queue.tail = -1;
}

bool isEmpty(){
    return (queue.tail == -1);
}

bool isFull(){
    return (queue.tail == (max_el - 1));
}

void enQueue(int data){

    if (isEmpty()){
        queue.head = queue.tail = 0;
        queue.arr[queue.tail] = data;
        message = "Data berhasil masuk";
    } else {
        if(!isFull()){
            queue.tail++;
            queue.arr[queue.tail] = data;
            message = "Data berhasil masuk";
        } else {
            message = "Antrian penuh!!";

        }
    }
}

void deQueue(){
    if (!isEmpty()){
        int a = queue.arr[queue.head];

        for (int i = queue.head; i < queue.tail; i++) {
            queue.arr[i] = queue.arr[i + 1];
        }

        queue.tail--;

        message = "Data berhasil dikeluarkan";

    } else {
        message = "Tidak bisa menghapus, antrian Kosong";

    }
    cout << endl;
}

void total(){
    int temp;

    for (int i = 0; i <= queue.tail; i++) {
        int temp = queue.arr[i];
        totalvar += temp;
    }
    
    message = to_string(totalvar);
    totalvar = 0;
}

void average(){
    int total = 0;

    for (int i = 0; i <= queue.tail; i++) {
        int temp = queue.arr[i];
        total += temp;
    }

    averagevar = total / (queue.tail + 1);

    message = to_string(averagevar);
    averagevar = 0;
}

void maxLow(int status) {
    int temp;
    int hasil = 0;

    if(status == 0) {
        for (int i = 0; i <= queue.tail; i++) {
        temp = queue.arr[i];
            if(temp >= hasil) {
                hasil = temp;
            }
        }

    } else if(status == 1) {
        int temp = queue.arr[0];
        int temp_2;
        
        for (int i = 0; i <= queue.tail; i++) {
        temp_2 = queue.arr[i];
            if(temp <= temp_2 ) {
                hasil = temp;
            } else {
                temp = temp_2;
                hasil = temp_2;
            }
        }
    }
    
    message = to_string(hasil);
    hasil = 0;
}

void show(){

    for (int i = queue.head; i <= queue.tail; i++) {
        cout << "[" << queue.arr[i] << "] ";
    }

}

void teksShow(){

    if(!isEmpty()){
        cout << "Data pada array = ";

        show();
    } else {
        cout << "Antrian Kosong";
    } 
} 

void garis()
{
    cout << "-----------------------------------------------------" << endl;
}

int main(){
    int data;
    int pilih;

    create();

    do {
        system("cls");
        garis();
        teksShow();
        cout << endl;
        garis();
        cout << "MAX : " << max_el;
        cout << " || Head : " << queue.head << " || Tail : " << queue.tail;
        cout << endl;
        garis();
        cout << "Pesan : " << message << endl;
        garis();
        cout << "   Menu Queue " << endl;
        garis();
        cout << "1. Enqueue" <<endl;
        cout << "2. Dequeue" <<endl;
        cout << "3. Total" <<endl;
        cout << "4. Rata-rata" <<endl;
        cout << "5. Terbesar" <<endl;
        cout << "6. Terkecil" <<endl;
        cout << "7. Close"   <<endl;
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
            total();
            break;

        case 4:
            average();
            break;

        case 5:
            maxLow(0);
            break;
        
        case 6:
            maxLow(1);
            break;
        }


    } while (pilih != 7);
}