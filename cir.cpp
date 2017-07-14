#include<iostream>
using namespace std;
class area
{
    float m,n,o;
   public:
       void  cir_rec_tri(float a)
       {
          m=3.1416*a*a;
          cout<<"area of circular: " <<m;
       }
        void  cir_rec_tri(float a, float b)
       {
          n=a*b;
          cout<<"area of  regtangle: " <<n;
       }
        void  cir_rec_tri(float a, float b,float c)
       {
          o=c*a*b;
          cout<<"area of  trangle: " <<o;
       }
    };
    int main()
{
    area a1;
    int d;
    float r,l,w,f,h,k;
    cout<<"1.Area of circle"<<endl;
    cout<<"2.Area of rectangle"<<endl;
    cout<<"3.Area of triangle"<<endl;
    cout<<"Enter your choice:";
    cin>>d;
    switch(d)
    {
    case 1:
        cout<<"Radius:";
        cin>>r;
        a1.cir_rec_tri(r);
        break;
    case 2:
        cout<<"Length:";
        cin>>l;
        cout<<"Width:";
        cin>>w;
        a1.cir_rec_tri(l,w);
        break;
    case 3:
        cout <<"Base:";
        cin>>f;
        cout<<"Height:";
        cin>>h;
        a1.cir_rec_tri(f,h,0.5);
        break;
    default:
        cout<<"wrong input";
        break;

    }
    return 0;
}
