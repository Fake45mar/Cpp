#include <iostream>
#include <windows.h>
using namespace std;

int main()
{ SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int a;
cout << "Введите пятизначное число" << endl;
cin >> a;
if (a>9999 && a<100000){
    cout << "1 число" << a/10000 << endl;
    cout << "2 число" << (a/1000)%10 << endl;
    cout << "3 число" << (a/100)%10 << endl;
    cout << "4 число" << (a/10)%10 << endl;
    cout << "5 число" << (a/1)%10 << endl;
} else{

cout << "Вы ввели не пятизначное число!" << endl;};
return 0;}
