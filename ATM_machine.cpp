#include<iostream>
using namespace std;

int new_transaction;

//Initialising the balance amount
float balance_amount = 0.0;

//function for operation in ATM Machine
void atm_machine_transaction(){
	
	cout<<"Operations available in ATM"<<endl;
	
	cout<<"1. Deposit Money "<< endl;
	
	cout<<"2. Withdraw Money "<<endl;
	
	cout<<"3. Balance Amount "<<endl;
	
	cout<<"\n";
	/*Take an appropriate option to select which operation
		you want to be performed by the atm machine.*/
		
	int option;
	
	cout<<"Your Option: ";
	
	cin>>option;
	
	float withdraw_amount;
	
	float deposit_amount;
	
	switch(option)
	{
		//Case for Depositing money
		case 1:
			cout<<"\nEnter the amount to deposti: ";
			
			cin>>deposit_amount;
			
			balance_amount += deposit_amount;
			
			cout<<"Your current balance is  Rs. "<<balance_amount<<"Thanks for depositing. "<<endl;
			
			cout<<"Do you want a new transaction? \nPress 1 to 'proceed' and 2 to 'exit' from here\n"<<endl;
			
			cout<<"Your option: ";
			
			cin>>new_transaction;
			
			if(new_transaction == 1){
				atm_machine_transaction();
			}
			
			break;
			
		//Case for withdraw money
		case 2:
			cout<<"\nPlease enter amount to withdraw: ";
			
			cin>>withdraw_amount;
			
			if(withdraw_amount > balance_amount){
				
				cout<<"Insufficient fund! Please proceed to deposit money. "<<endl;
				
				cout<<"Do you want a new transaction? \nPress 1 to 'proceed' and 2 to 'exit' from here\n"<<endl;
				
				cout<<"Your option: ";
				
				cin>>new_transaction;
				
				if(new_transaction == 1){
					atm_machine_transaction();
				}
		
			
			}
			
			else{
			
			balance_amount -= withdraw_amount;
			
			cout<<"You have withdrawn Rs. "<<withdraw_amount;
			
			cout<<"Your current balance is Rs. "<<balance_amount<< "Thanks for withdrawl."<<endl;
			
			cout<<"Do you want a new transaction? \nPress 1 to 'proceed' and 2 to 'exit' from here\n."<<endl;
			
			cout<<"Your option: ";
			
			cin>>new_transaction;
			
			if(new_transaction == 1){
				atm_machine_transaction();
			}
		}
		
		break;
		
	case 3:
		
		cout<<"your current bank balance is : "<<balance_amount<<endl;
		
		cout<<"Do you want a new transaction? \nPress 1 for 'proceed' and 2 for 'exit' from here\n"<<endl;
		
		cout<<"Your option: ";
		
		cin>>new_transaction;
		
		if(new_transaction == 1){
			atm_machine_transaction();
		}
		
		break;
		
				
	}
}

int main(){
	
	atm_machine_transaction();
	
	cout<<"Thank you for visiting bank!";
	
	return 0;
}
