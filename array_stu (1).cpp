#include <iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
        Number()
        {
            num=0;
        }//default constructor

        Number(int i)
        {
            num=i;
        }//parameterized constructor

        void show()
        {

                cout<<num<<" ";

        }//display number
};

int main(){

    Number ob[5]={6,7,8,9,10};      //declaration array of objects
                                            //with parameterized constructor
    for(int i=0;i<5;i++)
    {
        ob[i].show();
    }                       //display the value of the array.


    return 0;
}
