#include <iostream>

using namespace std;

int main()
{
    int h,m,r,s,j;

    cout<<"Please Enter the full number of seconds:";
    cin>>j;

    h=j/3600;
    m=j%3600;
    r=m/60;
    s=j%60;

    cout<<"The number of hours is:"<<h<<endl;
    cout<<"The number of minutes is:"<<r<<endl;
    cout<<"The number of seconds is:"<<s<<endl;

    return 0;
}
