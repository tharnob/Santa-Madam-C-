#include<iostream>
#include<math.h>
using namespace std;
class dist{
    int p,q;
public:
    void get()
{
    cout<<"Enter the  value of a point"<<endl;
    cin>>p>>q;
}
friend void calc(dist,dist);
};
void calc(dist a,dist b)
{    int c;
    float d;
    c=( pow(b.p-a.p,2)  +   pow(b.q-a.q,2) );
    d=pow(c,0.5);
    cout<<"Distance between point(A1,A1) and (B2,B2) is:"<<d <<endl;
}
int main()
{
    dist m,n;
    m.get();
    n.get();
    calc(m,n);
return 0;
}
