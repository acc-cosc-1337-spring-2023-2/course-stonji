//write include statements
#include <iostream>
#include "hwexpressions.h"
#include <iomanip>


//write namespace using statement for cout

using std::cout;
using std::cin;
using std::fixed;
using std::left;
using std::setw;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	auto meal_amount = 0.0;
	auto tip_rate = 0.0;
	auto tip_amount = 0.0;
	auto tax_amount = 0.0;
	auto total = 0.0;

	cout<<"Enter the meal amount: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount;
	cout<<"-------------------RECEIPT--------------------------\n";
	cout<<left<<setw(30)<<"Meal Amount: "<<"$"<<meal_amount<<"\n";
	cout<<left<<setw(30)<<"Sales Tax: "<<"$"<<tax_amount<<"\n";
	cout<<left<<setw(30)<<"Tip Amount: "<<"$"<<tip_amount<<"\n";
	cout<<left<<setw(30)<<"Total: "<<"$"<<total<<"\n";

	return 0;
}
