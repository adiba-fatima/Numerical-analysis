//convert x to g(x) then x(n+1)=g(xn)
#include <iostream>
#include <cmath>
using namespace std;
double g(double x)
{
    return (cos(x)+1)/3;
}
int main()
{
    double x0=0;
    double x1;
    int i;
    cout<<"Iteration\tRoot Approximation\n";
    for(i=1; i<=5;i++)
    {
        x1=g(x0);
        cout<<i<<"\t\t"<<x1<< endl;
        x0=x1;
    }
    cout<<"Approximate root= "<<x1;
}
