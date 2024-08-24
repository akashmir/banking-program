#include <iostream>
#include<iomanip>

double deposit();
void showBalance(double balance);
double withdraw(double balance);
int main(){

    double balance = 100.00;
    double money;
    int choice;
do{
std::cout<<"*******************\n";
std::cout<<"Enter Your Choice:\n";
std::cout<<"*******************\n";
std::cout<<"1.Show Balance\n";
std::cout<<"2.Deposite Money\n";
std::cout<<"3.Withdraw Money\n";
std::cout<<"4.Exit\n";
std::cin>>choice;

std::cin.clear();
fflush(stdin);


    switch(choice){
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance=balance+deposit();
      showBalance(balance);
      break;
    case 3:
      balance= balance-withdraw(balance);
      showBalance(balance);
      break;
    case 4:
      std::cout<<"Thanks for using Program";
      break;  
    default:
      std::cout<<"Not a valid response";
      break;
}
}while(choice!=4);


  return 0;

}
void showBalance(double balance){
    std::cout<<"Current Balance is $"<<std::setprecision(2)<<std::fixed<<balance<<'\n';
}


double deposit(){
    double amount=0;
      std::cout<<"Enter the money you want deposit\n";
      std::cin>>amount;
      if (amount>0){
         return amount;
      }
      else{
        std::cout<<"Enter valid amount\n";
        return 0;
      }
}

double withdraw(double balance){
    double amount=0;
      std::cout<<"Enter the money you want withdraw\n";
      std::cin>>amount;
      
      if (amount>balance){
           std::cout<<"Insufficient Balance\n";
           return 0;
      }
      else if (amount<0){
        std::cout<<"Enter valid amount\n";
        return 0;
      }
      else{
        return amount;
        
      }
}