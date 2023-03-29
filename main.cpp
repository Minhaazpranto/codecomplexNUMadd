#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int  rollNo;
    float  height;
    int weight;
public:
    student(string n,int r,float h,int w)
    {
        name=n;
        rollNo=r;
        height=h;
        weight=w;

    }
    void display();
    ~student();
};

void student::display()
{
    cout << "\n\nStudent details..............\n";
    cout<<"The name of student : "<<name<<"\nRoll No.of the student : "<<rollNo<<"\nHeight of the student : "<<height<<"\nWeight of the student :"<<weight<<endl;
}

student :: ~student(){
    cout<<"\nDestructor is called";
}

int main() {
    string n;
    int r,w;
    float h;
    cout<<"Enter the information of student............";
    cout<<"\nEnter the Name :";
    cin>>n;
    cout<<"Enter the Roll Number :";
    cin>>r;
    cout<<"Enter the Height :";
    cin>>h;
    cout<<"Enter the Weight :";
    cin>>w;
    student obj(n,r,h,w);
    student obj1=obj;
    obj1.display ();
    return 0;

}