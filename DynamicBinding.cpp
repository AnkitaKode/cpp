#include <iostream>
using namespace std;

class Content
{
public:
    void call_Function()
    {
        print();
    }
    void print()
    {
        cout << "Printing the Base class Content" << endl;
    }
};

class Content2 : public Content
{
public:
    void print()
    {
        cout << "Printing the Derived class Content" << endl;
    }
};

int main()
{
    Content *geeksforgeeks = new Content();
    geeksforgeeks->call_Function();

    Content *geeksforgeeks2 = new Content2();
    geeksforgeeks2->call_Function();
    delete geeksforgeeks;
    delete geeksforgeeks2;

    return 0;
    
}
