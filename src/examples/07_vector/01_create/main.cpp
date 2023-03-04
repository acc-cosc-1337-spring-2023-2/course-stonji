#include<vector>
#include<iostream>

using std::cout;

using std::vector;

int main()
{
    vector<int> nums;//empty list
    cout<<nums.size()<<"\n";
    cout<<nums.capacity()<<"\n\n";

    nums.push_back(4);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(10);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(11);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(5);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(50);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(66);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(88);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(97);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    nums.push_back(24);
    cout<<"Size: "<<nums.size()<<"\n";
    cout<<"Capactiy: "<<nums.capacity()<<"\n";

    for(auto n: nums)
    {
        cout<<n<<",";
    }

    cout<<"\n\n";

    vector<char> letters{'a', 'b', 'c'};
    cout<<"Size: "<<letters.size()<<"\n";
    cout<<"Capactiy: "<<letters.capacity()<<"\n";

    vector<char> all_As(10, 'a');
    for(auto ch: all_As)
    {
        cout<<ch<<",";
    }

    cout<<"\n";

    return 0;
}