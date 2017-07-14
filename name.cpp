#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[]="Tonia Afzal",*r;

    r=name;
   while(*r!='\0')
    {
        cout<<*r;
        r++;

    }
}
