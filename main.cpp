#include<iostream>
using namespace std;

class Area
{

    float a,l,b;
public:
    Area()
    {
        cout<<"Simple constructor called.........\n";
        cout<<"\nEnter the length of the Rectangle :";
        cin>>l;
        cout<<"Enter the breadth of the Rectangle :";
        cin>>b;
    }
    Area(float x,float y)
    {
        l=x;
        b=y;
    }
    void calc();
    void print();
    ~Area();
};
void Area::calc()
{
    a=l*b;
}
void Area::print()
{
    cout<<"Area of the Rectangle is :"<<a<<endl;
}
Area::~Area()
{
    cout << "\nObject is being deleted" << endl;
}
int main()
{
    float l,b;
    Area a1;
    a1.calc();
    a1.print();
    cout<<"\nEnter length and breadth for parameterised constructor:\n";
    cin>>l>>b;
    Area a2(l,b);
    a2.calc();
    a2.print();
    return 0;
}
