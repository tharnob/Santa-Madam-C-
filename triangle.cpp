#include<iostream>
using namespace std;

class areaR
{
    int a;
    int b;
public:
    int R;
    areaR(int x, int y)
    {
        a=x;
        b=y;
        R=x*y;
    }
    friend int Tarea(int t, float r);


};

class areaT
{

    int h;
    int w;

public:
    int T;
    areaT(int x, int y)
    {
        h=x;
        w=y;
        float c=0.5;
        T=x*y*c;
    }

    friend int Tarea(int t, float r);
};

int  Tarea(areaR r, areaT t)
{
    cout <<r.R<<endl<<t.T<<endl;
    return r.R+t.T;
}

int main()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    areaR a(w,x);
    areaT b(y,z);
    cout<<Tarea(a,b);
    return 0;
}

