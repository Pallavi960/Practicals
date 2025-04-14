#include<iostream>
using namespace std;
class parent{

    int a;
    public:
    parent()
    {
        cout<<"Parent constructor"<<endl;
    }
   virtual void get_data(){
        a=1;
        cout<<a<<endl;
    }
    ~parent()
    {
        cout<<"Parent distructor"<<endl;
    }
};

class child : public parent{
    int b;
    public:
    child()
    {
        cout<<"Child class constructor"<<endl;
    }
   void get_data()
    {
        b=20;
        cout<<b<<endl;
    }
    ~child()
    {
        cout<<"child constructor"<<endl;
    }

};

int main()
{

    parent *p;
    p=new child;
    p->get_data();//it the get data of parent in vertul then only it will call child's get data else it will alwayas call parent's get data fun
    delete p;
    return 0;
}
