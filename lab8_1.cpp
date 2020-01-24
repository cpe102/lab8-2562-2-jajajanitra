#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double PB,x,inter,total,pay,NB;
	int i;
	cout << "Enter initial loan: ";
	cin >> PB;
	cout << "Enter interrest rate per year (%): ";
	cin >> x;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	i =1;
	inter = PB*(x/100);
	total = PB+inter;
	if(total<pay){pay = total;}
	NB = total-pay;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PB;
	cout << setw(13) << left << inter;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << NB;
	cout << "\n";	
	i++;

	
	while(NB != 0){
		PB = NB;
		inter = PB*(x/100);
		total = PB+inter;
		if(total<pay){pay = total;}
		NB = total-pay;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << PB;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << NB;
		cout << "\n";	
		i++;
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	return 0;
}
