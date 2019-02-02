#include <iostream>
#include <windows.h>
using namespace std;  //(a+b-f/a)+ f * a * a — (a + b) Числа а, b, f вводятся с клавиатуры.
//Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны

int main()
{ SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    int a,b,f,sum;
    cout << "Введите a,b,f в том порядке, в каком тут написано" << endl;
    cin >> a >> b >> f;
    sum = (a+b-f/a)+f*a*a-(a+b);
    cout <<"Полученное выражение равняется" << "  " << sum << endl;
    return 0;
}
