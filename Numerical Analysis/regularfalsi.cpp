// used to find root of a nonlinear eqn f(x)=0
#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return 3*x-cos(x)-1;
}
int main()
{
    double a=0, b=1;
    double c;
    int i;
    if(f(a)*f(b)>=0)
    {
        cout<<"Invalid intials"<<endl;
        return 0;
    }
    for(i=1; i<=5;i++)
    {
        
    }
}