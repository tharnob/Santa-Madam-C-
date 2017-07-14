#include<iostream>
using namespace std;
int main()
{
    int a,r,c,s,b=1;//a=input;r=row ;c=column;b=digit which will bw printed;
    cin>>a;
    for(r=1;r<=a;r++)
    {
        for(s=r;s<=a;s++)
            {
                cout<<" ";
            }
        for(c=r,b=r;c>=1;c--,b++)
            {
                cout<<b;
            }
            cout<<"\n";
    }
    for(r=r-2;r>=1;r--)

     {
        for(s=a;s>=r;s--)
            {
                cout<<" ";
            }
        for(c=r,b=r;c>=1;c--,b++)
            {
                cout<<b;
            }
            cout<<"\n";
    }
    return 0;
}
