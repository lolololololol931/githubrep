#include <iostream>
using namespace std;


//void show(int* ptr,int size ) {
//    for (int i = 0; i < size, i++;) {
//
//        cout << *(ptr + i) << " ";
//    }
//
//}
//
//int Suma(int* ptr, int size) {
//    int s = 0;
//    for (int i = 0; i < size; i++) {
//        s += *(ptr + i);
//    }
//
//    return s;
//}


char signOfNumber(int* number){
    return (*number < 0) ? '-' : (*number > 0) ? '+' : '0';

}


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
    //cout << *ar << endl;
    //cout << &ar[0] << endl;
    //for (int i = 0; i < size; i++) {
    //    /*cout << &ar+i << " ";*/
    //    cout << *(ar + i) << " ";
    //}


    //int* p1 = &ar[0], * p2 = &ar[2];
    //cout << endl << p1 << " " << p2 << endl;
    //cout << endl<< p2 - p1 << endl;//різниця в комірках
    //int* p = ar;
    //show(p, size);
    //int s = Suma(p, size);
    

    //char signOfNumber
    int userNum;
    cout << "Please, input your number: ";
    cin >> userNum;
    char result = signOfNumber(&userNum);
    cout << result;
}
