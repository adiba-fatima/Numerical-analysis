#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return 3*x-cos(x)-1;
}
int main()
{
    double x0=0,x1=1;
    double x2;
    int i;
    cout<<"iteration\tRoot Approximation\n";
    for(i=1;i<=5;i++)
    {
        x2=x1-f(x1)*(x1-x0)/(f(x1)-f(x0));
        cout<<i<<"\t\t"<<x2<<endl;
        x0=x1;
        x1=x2;
    }
    cout<<"\nApproximate Root = "<<x2<<endl;
    return 0;
}