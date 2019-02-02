#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int func(int a,int b){
    int c = a*b;
cout << c << endl;
};
int main()
{
    cout << "Hello world!" << endl;
    int a,b;
    cin >> a >> b;
    if(a > 20){
        exit(1);
    }
    else{
    func(a,b);
    return 0;
};}
