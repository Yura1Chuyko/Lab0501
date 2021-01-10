#include <iostream> 
#include <cmath>  
using namespace std;
double g(const double a, const double b, const double c);
int main()
{
    double x, y;
    cout << "x = "; cin >> x;     cout << "y = "; cin >> y;
    double k = (g(x * x, 1, y) - g(y * y, x, 1)) / (1 + g(sqrt(x), y, 1));
    cout << "k = " << k << endl;
    return 0;
}
double g(const double a, const double b, const double c)
{
    return (a * a + sin(b) + 1) / (1 + c * c);
}