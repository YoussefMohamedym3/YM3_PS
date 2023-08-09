#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a , b , c ;
    cin>> a >> b >> c;
    double r = (2*a + 3*b)*5*c ;



   cout << fixed << setprecision(6) << r << endl;
    return 0;
}

