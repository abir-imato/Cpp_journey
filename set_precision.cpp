#include <iostream>
#include <iomanip>   // iomanip is used to setprecision
using namespace std;
int main()
{
    double x = 3.14159;

    cout << fixed << setprecision(1) << x;
    return 0;
}