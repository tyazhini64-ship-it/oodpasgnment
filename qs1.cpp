#include <iostream>
using namespace std;
//Unit 1 Set 2 qs 1
class BankAccount{
    private:
    string name;
    int accountNumber;
    float balance;
    public:
    BankAccount(string n,int acno,double bal){
        name=n;
        accountNumber=acno;
        balance=bal;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void deposit(double amount){
        balance+=amount;
        cout<<"Amount deposited: "<<amount<<endl;
    }
    void withdraw(double amount){ 
        if(amount>balance){
            cout<<"Insufficient balance!"<<endl;
        }
        else{
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }
    }
    
};
int main(){
    BankAccount account("Thamizh Yazhini S",123456,1000.0);
    int choice;
    float amount;
    cout<<"Bank Account Management System"<<endl;
    do {
        cout<<"\n1. Display Account Details";
        cout<<"\n2. Deposit Amount";
        cout<<"\n3. Withdraw Amount";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                account.display();
                break;
            case 2:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                account.deposit(amount);
                break;
            case 3:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                account.withdraw(amount);
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    } while(choice!=4);
    return 0;
}

