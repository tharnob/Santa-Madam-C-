#include<iostream>
using namespace std;
class Complex {
int real, img;
public:
    Complex(int x ,int y)
    {
        real=x;
        img=y;
    }
    Complex(){};
    bool operator==(Complex &c);
    bool operator!=(Complex &c);
    bool operator<(Complex &c);
    bool operator>(Complex &c);



};
bool Complex::operator==(Complex &p)
{
    if(real==p.real && img==p.img)
    {
        return true;
    }
    else{return false;}
}
bool Complex::operator!=(Complex &p)
{
    if(real!=p.real && img!=p.img)
    {
        return true;
    }
    else{return false;}
}
bool Complex::operator<(Complex &p)
{
    if(real<p.real && img<p.img)
    {
        return true;
    }
    else{return false;}
}
bool Complex::operator>(Complex &p)
{
    if(real>p.real && img>p.img)
    {
        return true;
    }
    else{return false;}
}
int main(){
  Complex C1(1,2), C2(4,5), C3(1,2) ;
if (C1> C2) cout<< "Greater"<<endl;
if (C1==C3) cout<< "Equal"<<endl;
if (C1 < C2) cout<< "Smaller"<<endl;
if (C1 != C2) cout<<"Not Equal"<<endl;


}
