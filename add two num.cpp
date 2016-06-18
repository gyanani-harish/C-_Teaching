#include <iostream>
using namespace std;
inline int abc (int a,int b)
{
    int c=a+b;
    return c;
}

main ()
{
    int x,y,z;
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    z=abc (x,y);
    cout<<z;
}
