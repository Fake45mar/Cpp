#include <iostream>
#include <windows.h>
using namespace std;  //(a+b-f/a)+ f * a * a � (a + b) ����� �, b, f �������� � ����������.
//������������ ���������������� ���������, ����� �������, ����� ���� �������, � ����� ������� ������

int main()
{ SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    int a,b,f,sum;
    cout << "������� a,b,f � ��� �������, � ����� ��� ��������" << endl;
    cin >> a >> b >> f;
    sum = (a+b-f/a)+f*a*a-(a+b);
    cout <<"���������� ��������� ���������" << "  " << sum << endl;
    return 0;
}
