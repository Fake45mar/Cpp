#include <iostream>
#include<cstdlib>
#include<windows.h>

using namespace std;
class kilometr{
    public:
    void kilom(){
        float meter;
        double kil;
        cout << "How many meters would you like to transform?" << endl;
        cin >> meter;
    kil = meter*1000;
    cout << "Kilometers = " << kil << endl;}};
    class milimetr{
public:
    void milim(){
        float meter;
        float mil;
        cout << "How many meters would you like to transform?" << endl;
        cin >> meter;
    mil = meter*0.01;
    cout << "Milimeters =" << mil << endl;}};
int main(){
SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
int choose;
float meter;
kilometr obj;
milimetr test;
cout << "This program help you with transform meters to kilometers or milimeters" << endl;
cin.get();
cout << "You must choose 1 or 2" << endl;
cin >> choose;
switch(choose){
case 1:
    cout << "You switched kilometers"  <<  endl;
    obj.kilom();
    break;
case 2:
    cout << "You switched milimeters" << endl;
    test.milim();
    break;
    default:
        cout << "Impossible, you switched another case, choose 1(kilometers) or 2(milimeters)" << endl;
        }

return 0;
}

