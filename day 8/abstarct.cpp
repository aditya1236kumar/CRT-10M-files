#include<iostream>
using namespace std;
class ATM{
    private :
    int balance ;
    public:
    ATM(int balance){
        this->balance=balance;
    }
    void withdraw(int amount){
        if(amount > balance){
            cout<<"insufficient balance"<<endl;

        }
        balance -=amount;
        cout<<"amount withdrawn :"<< amount<<endl;
    }
    void ShowBalance(){
        cout<<"current balance "<< balance<<endl;
    }
};
int main(){
    ATM a(1000);
    a.ShowBalance();
    a.withdraw(500);
    a.ShowBalance();

    return 0;
}