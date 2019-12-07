/*@Question:Assume that you want to check whether the number is prime or not. Write a program that
            asks for a number repeatedly. When it finishes the calculation the program asks if the user
            wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object
            class concept.

@Author: Anuj Sedhai
@BCT 075 batch,Thapathali campus
@Written on 12/7/2019
*/


#include <iostream>
using namespace std;
class prime_check
{
    private:
        int num;
    public:
        void add_data(int a)
        {
            num=a;
        }
        bool check();
};
bool prime_check::check()
{
    int flag=0;
    for (int i=2;i<num;i++)
    {
        if((num%i)==0)
        {
            flag=flag+1;                //if the given number is divisible by any number between 2 and (given number - 1) then it is not prime
            break;
        }
    }
    if(flag==0)
    {
        return trueo;
    }
    else
    {
        return false;
    }
}
int main()
{
    prime_check pc;
    int x;
    cout<<"Enter number to check whether it is prime or not:\t";
    cin>>x;
    pc.add_data(x);
    if(pc.check()==true)
    {
        cout<<endl<<"It is prime";

    }
    else
    {
        cout<<endl<<"It is not prime";
    }
    return 0;
}