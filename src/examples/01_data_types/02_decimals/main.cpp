#include "decimals.h" //tell c++ where to find the add to double 1 function

#include<iostream>//we want to use cout

using std::cout;//explicitly tell c++ that we are only using cout from iostream and std

int main()
{
    double num = 0;
    double num1 = add_to_double_1(num);

    //we do something
    num1 = num1 + 1;
    cout<<"Adding to double: "<<num1<<"\n";

    return 0;
}