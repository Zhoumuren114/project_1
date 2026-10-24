//¼ûP2966

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x,int n)
{
    if (n>1)
        return sqrt(n + f(x,n-1));
    return sqrt(x + 1);
}

int main()
{
    int n;
    double x;
    cin >> x >> n;
    cout <<fixed << setprecision(2)<<f(x, n);
    return 0;
}
