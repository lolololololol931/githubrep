#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251>null");
    /*cout << "вказівники\n";
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
    cout << *ptr << endl;*/

    int ar[] = { 1,8,9,4,10,7,10 };
    int size = sizeof(ar) / sizeof(ar[0]);
    cout << size << endl;
    cout << *ar << endl;
    cout << &ar[0] << endl;
    for (int i = 0; i < size; i++) {
        /*cout << &ar+i << " ";*/
        cout << *(ar + i) << " ";
    }

}
