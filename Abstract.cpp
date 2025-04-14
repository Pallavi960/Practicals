#include<iostream>
using namespace std;

class Bank{
    protected:
    int acc_no;
    double balance;

  Bank()
    {
        cout<<"Bank class constructor"<<endl;
    }

 virtual  void get_data()=0;//pure virtual fun(no body virtual fun)
};
class saving_acc :public Bank{
    int b;
    public:
    void get_data(){//we need to declare same fun if we dont create then this class also will be abstracted
        acc_no=123;
        cout<<"acc_no"<<acc_no<<endl;
        
    }

};


int main()
{
    saving_acc s;
    //Bank b   ....we will not able to do this because Bank class abstaract t
       return 0;
}
