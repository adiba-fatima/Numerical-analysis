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
    cout<<"Iteration: \tRoot Approximation\n";
    for(i=1; i<=5;i++)
    {
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        cout<<i<<"\t\t"<<c<<endl;
        if(f(c)==0)
        break;
        else if(f(a)*f(c)<0)
        {
            b=c;
        }
        else
        a=c;
    }
    cout<<"Aprroximate root: "<<c<<endl;
    return 0;
}