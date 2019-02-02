#include <iostream>
#include <cstdlib>
using namespace std;
class power{
public:
    power(int a,int b){
    cout << a << b << endl;
    int c = a+b;
    cout << c;
    }
  };
int main(){
power obj(5,5);
return 0;
}
