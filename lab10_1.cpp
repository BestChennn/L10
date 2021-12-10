#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double initial_loan,interest_rate_per_year,amount_you_can_pay_per_year;

	cout << "Enter initial loan: ";
	cin >> initial_loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate_per_year;
	cout << "Enter amount you can pay per year: ";
	cin >> amount_you_can_pay_per_year;

	double PrevBalance = initial_loan;
	double Payment = amount_you_can_pay_per_year;
	double Interest , Total , NewBalance;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	for(int i = 0; i >= 0; i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i+1; 
	cout << setw(13) << left << PrevBalance;
	Interest = PrevBalance*(interest_rate_per_year/100);
	cout << setw(13) << left << Interest;
	Total = PrevBalance + Interest;
	cout << setw(13) << left << Total;
	if(Total<Payment) Payment=Total;
	cout << setw(13) << left << Payment;
	NewBalance = Total - Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	PrevBalance = NewBalance;
	if(NewBalance <=0) break;
	}	
	return 0;
}
