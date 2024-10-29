#include <iostream>
using namespace std;

int main()
{                   
    
    int balance, depositAmount, withdrawalAmount; ;
    cout << "Enter the initial balance: ";
    cin >> balance;

    cout << "Enter the deposit amount: ";
    cin >> depositAmount;
    balance+=depositAmount;
    cout<<"Amount after deposit: "<<balance<<endl;
    
    
    cout << "Enter the withdrawal amount: ";
    cin >> withdrawalAmount;
    balance -=  withdrawalAmount  ; 
  
    cout<<"Amount after withdrawal: "<<balance<<endl;

    return 0;
} 