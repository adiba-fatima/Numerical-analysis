//The root of a function is a value of the variable for which the function becomes zer
//compute midpoint c=(a+b)/2
//if f(a)*f(b)<0 ----> b=c else a=c. repeat until f(c)<tolerance
#include <iostream>
#include <cmath>
using namespace std;
//define function
double f(double x)
{
    return 3*x-cos(x)-1;
}
//bisection method
double bisection(double a, double b, double tolerance, int maxIteration)
{
    if(f(a)*f(b)>=0)
    {
        cout<<"Bisection failed. ";
        return 0;
    }
    double c;
    cout<<"Iteration\n";
    for(int i=1; i<=maxIteration;i++)
    {
        c=(a+b)/2;
        if(fabs(f(c))<tolerance)
        {
            cout<<"Root found";
            return c;
        }
        if(f(a)*f(c) <0)
        {
            b=c;
        }
        else
        a=c;
    }
    cout<< "Maximum iteration reached";
    return c;
}
int main()
{
    double a=0, b=1, tolerance =1e-6;
    int maxIteration=50;
    double root = bisection(a,b,tolerance,maxIteration);
    cout<<"Approximate root= "<<root<<endl;
    return 0;
}