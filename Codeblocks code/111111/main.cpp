#include<windows.h>
#include<iostream>
#include<clocale>
using namespace std;
void myfunc(){
cout <<" " <<  "end";
}
int main()
{  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
string  y[10];
int c;
cout << "Выберите город" << endl;
for(int i=0;i<10;i++){
cin >> y[i];

cout <<  "  " << "Вы ввели"<<" " << y[i] <<". " << "Чтобы продолжить, Введите маршрут" << endl;
break;}
cin >> c;
switch(c){
case 2:
    cout << "Отходит в 6:30 с депо"<< endl << "в 6:45 Парк Горького";
    myfunc();
    break;
 default :
    cout << "Дорога в никуда";
    myfunc();
    break;}

return 0;
}
