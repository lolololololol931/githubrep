#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>null");
    cout << "вказівники\n";
    int a = 2, b = 5;
    cout << &a << " " << &b << endl;

    int* ptr = nullptr;
    ptr = &a;
    cout << ptr<<endl;
    *ptr = 11;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << a << endl;
    ptr = &b;
    cout << *ptr << endl;

}
