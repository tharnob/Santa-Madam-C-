#include<iostream>
using namespace std;

class date
{
    int day,month,year;
    public:
        date(int d, int m, int y)
        {
            day=d;
            month=m;
            year=y;
        }
        void setD(int d,int m, int y);
        void getD();



};
void date::setD(int d, int m, int y)
{
    day=d;
    month=m;
    year=y;
}
void date::getD()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
int main()
{
    date dt1(1,10,1999);

    dt1.getD();
    int d,m,y;
    cin>>d>>m>>y;
    dt1.setD(d,m,y);
    dt1.getD();

}

