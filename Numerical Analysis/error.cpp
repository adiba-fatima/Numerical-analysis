#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double true_value, approx_value;
    cout<<"Enter true value: ";
    cin>>true_value;
    cout<<"Enter approx value: ";
    cin>>approx_value;
    double absolute_error = fabs(true_value-approx_value);
    double relative_error = absolute_error/fabs(true_value);
    double percentage_error = relative_error *100;
    cout<<"Absolute error: "<<absolute_error<<endl;
    cout<<"Relative error: "<<relative_error<<endl;
    cout<<"Percentage error: "<<percentage_error<<"%"<<endl;
    return 0;
}