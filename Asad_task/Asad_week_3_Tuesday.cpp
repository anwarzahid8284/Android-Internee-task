#include<iostream>
using namespace std;
class bank_account
{
	private: // Ye class k bahar koyi b dairect access nahin kar sakta
		double balance;
	public: //Ye har jagah access ho sakta hai
	  bank_account(double bal) //constructer
	  {
	  	if(bal>=0) 
	  	{
	  		balance=bal;
		  }else  //agar balnce negative mein aya to else part execute huga
		  {
		  	balance=0; 
		  }
	  }	
	  
	  
	  //Ye paise jama karne keley use huta ha
	  void deposit(double add_bal) //ye setter ki trah kaam karta hai
	  {
	  	if(add_bal>=0)
	  	{
	  		balance+=add_bal;
		  }else //
		  {
		  	cout<<"Invalid: ";
		  }
	  }
	  
	  void withdraw(double amount) //Paise nikalne keleye
	  {
	  	if(amount>0 && amount<=balance)
	  	{
	  		double b=balance-amount;
	  		balance=b;
	  		cout<<"Withdraw: "<<amount;
		}else
		{
			cout<<"Insafficient balance: ";
		}
	  }
	  
	  
	  double check_balnace() //This is getter function
	  {
	  	return balance;
	  }
};
int main()
{
	double add;
	cout<<"Enter the amount to add in your account: ";
	cin>>add;
	bank_account obj_1(add);
	cout<<"Your Current Balance: "<<obj_1.check_balnace()<<endl;
	
	double dr;
	cout<<"Enter amount to withdraw from your accont: ";
	cin>>dr;
	obj_1.withdraw(dr);
	cout<<endl;
	cout<<"Baqaya balnace: "<<obj_1.check_balnace();
	
	return 0;
}