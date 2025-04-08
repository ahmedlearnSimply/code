#include <iostream>
using namespace std;
// scope : النطاق
// global variable
int x = 10;

int main()
{
    int x = 20;
    cout << ::x << endl;
    cout << x << endl;
}
