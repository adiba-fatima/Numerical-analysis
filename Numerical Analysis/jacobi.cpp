//iterative form, intial =0, loop
#include <iostream>
using namespace std;
int main()
{
    double x=0, y=0, z=0;
    double x1, y1, z1;
    int i;
    cout <<"Iteration\t x\t y\t z\n";
    for(i=1; i<=5;i++)
    {
        x1=(12-y-z)/10;
        y1=(13-2*x-z)/10;
        z1=(14-2*x-2*y)/10;
        cout<<i<<"\t\t"<<x1<<"\t"<<y1<<"\t"<<z1<<endl;
        x=x1;
        y=y1;
        z=z1;
    }
    return 0;
}
