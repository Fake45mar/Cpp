#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

class kilogram{
public:
    void kilogr(){
    cout << "Write which weight you must transform" << endl;
     float gram;
     cin >> gram;
    float kil = gram*0.001;
    cout << "Kilograms =" << kil << endl;;
    }};
    class miligram{
public:
    void miligr(){
    cout << "Write which weight  you must transform" << endl;
    float gram;
    cin >> gram;
    float mil = gram*1000;
    cout << "miligrams =" << mil << endl;}};

int main()
{
    int choose;
    cout << "What do you want to do?" << endl;
     /*1) if choose = 1
    you will get weight(grams)--->kilograms
   2) if choose = 2
   you will get weight(grams)--->miligrams*/
   cin >> choose;
   switch(choose){
   case 1:
       cout << "You chose grams into kilograms" << endl;
       kilogram obj;
       obj.kilogr();
       break;
   case 2:
    cout << "You chose grams into miligrams" << endl;
    miligram obj_1;
    obj_1.miligr();
    break;}
    return 0;
}

