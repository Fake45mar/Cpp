#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
class water{
public:
    double wat(double litr){
    double bulk;
    bulk = litr*0.001;
    cout << bulk;
return bulk;}};


int main()
{ SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  double litr;
cout << "Введите количество литров" << endl;
cin >> litr;
water obj;
obj.wat(litr);
return 0;
}
