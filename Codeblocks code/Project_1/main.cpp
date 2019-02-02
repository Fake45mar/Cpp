#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{

   SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
 int *a = NULL;
int b = 5;
a = &b;
 cout << *a << endl;

return 0;

}
