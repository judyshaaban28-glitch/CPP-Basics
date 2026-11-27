#include <iostream>

using namespace std;

int main()
{
    int h,m,s,x,y,z,j;

    cout<<"Please Enter Hours:";
    cin>>h;

    cout<<"Please Enter minutes:";
    cin>>m;

    cout<<"Please Enter seconds:";
    cin>>s;

    x=h*3600;
    y=m*60;
    z=s*1;

    j=x+y+z;

    cout<<"The full number of seconds is:"<<j;
    return 0;
}
