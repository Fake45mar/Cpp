#include <iostream>

using namespace std;

int main()
{
    char c;
    cout << "Set letter low register" << c << endl;
    cin >> c;
    c = c-32;
    cout << "This is letter in high register-" << c << endl;


    return 0;
}
