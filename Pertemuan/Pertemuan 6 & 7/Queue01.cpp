
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


// Property
int max_el;
struct Queue01{
    /* data */
    int arr[1];
    int head;
    int tail;
};

Queue01 queue;

string message;

// Method
void create(){
    queue.head = queue.tail = -1;

    cin >> max_el;
    queue.arr[max_el];
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
    } else {
        if(!isFull()){
            queue.tail++;
            queue.arr[queue.tail] = data;
        } else {
            message = " Antrian penuh!!";
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

        cout << "Data yang dikeluarkan = " << "[" << a << "] ";

    } else {
        cout << "Tidak bisa menghapus, antrian Kosong";
    }
    cout << endl;
}

void show(){

    for (int i = queue.head; i <= queue.tail; i++) {
        cout << "[" << queue.arr[i] << "] ";
    }
    cout << endl;

}

void teksShow(){

    if(!isEmpty()){
        cout << "Data pada array = ";

        show();
    } else {
        cout << "Antrian Kosong";
    } 
}

int main(){
    int data;
    int pilih;

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    teksShow();
}
