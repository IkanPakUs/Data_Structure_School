#include <iostream>
#include <conio.h>
#include <stack>

using namespace std;
 
int showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}
 
int main ()
{
    stack <int> s;
    s.push(10);
    s.push(30);
    s.push(20);
    s.push(5);
    s.push(1);
 
    cout << "The stack is : ";
    showstack(s);
 
    cout << "\ns.size() : " << s.size();
    cout << "\ns.top() : " << s.top();
 
 
    cout << "\ns.pop() : ";
    // s.pop();
    showstack(s);
    
    getch();
    return 0;
}