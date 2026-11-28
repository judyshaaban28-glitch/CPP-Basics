#include <iostream>

using namespace std;

int main()
{
    float x,y,s,l;

    cout<<"Please Enter the length:";
    cin>>x;

    cout<<"Please Enter the width:";
    cin>>y;

    s=x*y;
    l=2*(x+y);

    cout<<"Area="<<s<<endl;
    cout<<"perimeter="<<l;

    return 0;
}
