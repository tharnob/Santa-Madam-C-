#include <iostream>
#include<math.h>
#define e 3.1416/180
using namespace std;
class convert
{

    float r,th,x,y;
public:
    void polar(float a,float b)
    {
        cin>>a>>b;
        r=a;
        th=b;

    }
    void cal()
    {
        x=r*cos(th*e);
        y=r*sin(th*e);
    }
    void show()
    {
        cout<<"X="<<x<<endl<<"Y="<<y<<endl;
    }

};

int main()
{
    convert c,d;
    float a,b;
    c.polar(a,b);
    c.cal();
    c.show();

}
