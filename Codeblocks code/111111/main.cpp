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
cout << "�������� �����" << endl;
for(int i=0;i<10;i++){
cin >> y[i];

cout <<  "  " << "�� �����"<<" " << y[i] <<". " << "����� ����������, ������� �������" << endl;
break;}
cin >> c;
switch(c){
case 2:
    cout << "������� � 6:30 � ����"<< endl << "� 6:45 ���� ��������";
    myfunc();
    break;
 default :
    cout << "������ � ������";
    myfunc();
    break;}

return 0;
}
