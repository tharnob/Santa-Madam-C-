#include <iostream>
#include<math.h>
#include<iomanip>
#define e 3.1416/180
using namespace std;
class convert
{

    float r,the,x,y;
public:
    void polar(float a,float b)
    {
        cin>>a>>b;
        r=a;
        the=b;

    }
    void calculation()
    {
        x=r*cos(the*e);
        y=r*sin(the*e);
    }
    void show()
    {
        cout<<"X="<<setprecision(3)<<x<<endl<<"Y="<<setprecision(3)<<y<<endl;
    }

};

int main()
{
    convert c,d;
    float a,b;
    c.polar(a,b);
    c.calculation();
    c.show();

}
