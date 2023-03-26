#include <iostream>

using std::cin; using std::cout;

int main()
{
    auto num = 10;
    int &num_ref = num;

    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address for num is: "<<&num<<"\n";

    cout<<"Num value via num_ref: "<<num_ref<<"\n";
    cout<<"Address that num_ref points to: "<<&num_ref<<"\n\n";

    num_ref = 20; //?? will this change the value of num?
    cout<<"Num is: "<<num<<"\n";
    cout<<"Stack address for num is: "<<&num<<"\n";

    return 0;
}