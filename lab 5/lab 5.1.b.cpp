/*@Question:Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate
            system.
            C. Also write a small program to demonstrate that all the member functions of one class are
            the friend functions of another class if the former class is made friend to the latter.
@Author: Anuj Sedhai
@BCT 075 batch, Thapathali campus
@written on 7/1/2020
*/
#include<iostream>
using namespace std;
class class2;
class class1
{
    int x,y;
public:
    class1 (int ix,int iy)
    {
        x=ix;
        y=iy;
    }
friend class2;
};
class class2
{
       int x,y;
public:
    class2 (int ix,int iy)
    {
        x=ix;
        y=iy;
    }
    void add(class1 c1, class2 c2)
    {
        cout<<"Sum of given coordinates:"<<endl<<"x="<<c1.x+c2.x<<endl<<"y="<<c1.y+c2.y<<endl;
    }
    void multiply (class1 c1, class2 c2)
    {
        cout<<"Product of given coordinates:"<<endl<<"x="<<c1.x*c2.x<<endl<<"y="<<c1.y*c2.y<<endl;
    }
    void division (class1 c1, class2 c2)
    {
        cout<<"Division of given coordinates:"<<endl<<"x="<<static_cast<float>(c1.x)/c2.x<<endl<<"y="<<static_cast<float>(c1.y)/c2.y<<endl;
    }
    void subtraction (class1 c1, class2 c2)
    {
        cout<<"Difference of given coordinates:"<<endl<<"x="<<c1.x-c2.x<<endl<<"y="<<c1.y-c2.y<<endl;

    }

};
int main()
{
    class1 c1(3,5);
    class2 c2(6,8);
    c2.add(c1,c2);
    c2.multiply(c1,c2);
    c2.division(c1,c2);
    c2.subtraction(c1,c2);
}
