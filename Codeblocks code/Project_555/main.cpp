#include <iostream>
#include <windows.h>
using namespace std;

int main()
{ SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int a;
cout << "������� ����������� �����" << endl;
cin >> a;
if (a>9999 && a<100000){
    cout << "1 �����" << a/10000 << endl;
    cout << "2 �����" << (a/1000)%10 << endl;
    cout << "3 �����" << (a/100)%10 << endl;
    cout << "4 �����" << (a/10)%10 << endl;
    cout << "5 �����" << (a/1)%10 << endl;
} else{

cout << "�� ����� �� ����������� �����!" << endl;};
return 0;}
