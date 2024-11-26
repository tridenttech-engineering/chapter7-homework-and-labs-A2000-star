//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
	
	int months = 1;
	int totalBill = 0.0;
	double averageBill = 0.0;
	double bill = 0.0;
	while  (months < 13)
{
	cout << "Enter the electric bill for month " << months << ": ";
			cin >> bill;
			totalBill += bill;
			months += 1;
		} //end while
		averageBill = static_cast<double>(totalBill) / (months - 1);
			
		}
	cout << "Average electric bill for" << months << "months " << endl;
	cout << "Enter the number of months: ";
	cin >> months;
	cin >> bill; 
	 (int month = 1; month <= months; month += 1)
		
	
		
		
cout << fixed << setprecision(2);		
cout << "Average electric bill for" << months << "months " << endl;
cout << "No bill amount entered. " << endl;
		
}	//end of main function