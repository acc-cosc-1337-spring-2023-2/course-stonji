#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
   /*  string lang = "C++";
    cout<<lang<<>"In";
    cout<<"Size: "<<lang.size()<<"\n" ; 
    cout<<"Capacity: "<<lang.capacity()<<"\n\n";

    lang.append(" is great fo");
    cout <<lang<<"\n";
    cout<<"Size: "<<lang. size()<<"\n"; 
    cout<<"Capacity: "<<lang.capacity()<<"\n\n";

    lang. append ("r"); 
    cout<<lang<<"\n";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"Capacity: "<<lang.capacity()<<"\n\n"; */

    //create strings
    string s0("Initial string");
    cout<<s0<<"\n";

    string s1(s0);
    cout<<s1<<"\n";

    string s3(s0, 8, 3);
    cout<<s3<<"\n";

    string s4("Another character sequence", 12);
    cout<<s4<<"\n";

    string s5(10, 'X');
    cout<<s5<<"\n";

    string s6(10, 42);
    cout<<s6<<"\n";

    string s7("12301401289491$#%$@");
    cout<<s7<<"\n";

    return 0;
}