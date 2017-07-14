#include<iostream>
using namespace std;

class date
{
    int day,mon,yr;
    public:
        date(int d, int m, int y)
        {
            day=d;
            mon=m;
            yr=y;
        }
        void setD(int d,int m, int y);
        void getD();



};
void date::setD(int d, int m, int y)
{
    day=d;
    mon=m;
    yr=y;
}
void date::getD()
{
    cout<<day<<"-"<<mon<<"-"<<yr<<endl;
}
int main()
{
    date dt1(12,4,122);

    dt1.getD();
    int d,m,y;
    cin>>d>>m>>y;
    dt1.setD(d,m,y);
    dt1.getD();

}
