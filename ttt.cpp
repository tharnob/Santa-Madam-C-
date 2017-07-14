#include<iostream>
using namespace std;
inline int maxmin(int,int);

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"maximum:"<<maxmin(a,b)<<endl;

}
inline int maxmin(int x,int y)
{
    return(x>y?x:y);
}
