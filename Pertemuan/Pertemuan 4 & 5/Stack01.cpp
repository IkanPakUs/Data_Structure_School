#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define MaxEl 5

struct stack {
    int t[MaxEl];
    int top;
};

stack s;
int x;
int length = MaxEl;
int popCount;


int createEmpty(){
   s.top = -1; 

   return 0;
}

bool isEmpty(){
    return (s.top == -1);

    popCount = 0;
}

bool isFull(){
    return (s.top == (MaxEl - 1));
}

int push(int x){
    if(!isFull()){
        s.top++;
        s.t[s.top] = x;
    }

    return 0;
}

int pop(){
    if (!isEmpty()){
        int a = s.t[s.top];
        s.top--;

        popCount++;

        cout << "Data yang dikeluarkan = " << a << endl;
    }

    return 0;
}

int dataShow(){

    for (int i = 0; i <= s.top; i++) {
        cout << s.t[i] << "  ";
    }

    cout << endl;

    return 0;
}

int teksShow(){
    if (popCount > 0) {
        cout << "Data setelah fungsi pop = ";

        dataShow();
    } else {
        cout << "Data pada array = ";

        dataShow();
    }
    
    return 0;
}

int main(){

    createEmpty();

    push(3);
    push(7);
    push(12);
    push(6);
    push(9);


    teksShow();
    
    pop();

    teksShow();

    getch();
}

