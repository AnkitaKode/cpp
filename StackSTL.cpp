#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    for (int i = 0; i < 5; ++i)
        s.push(i);
    cout << "Size = " << s.size() << endl;
    cout << "Top = " << s.top() << endl;

    s.pop();
    s.pop();
    cout << "Size = " << s.size() << endl;
    cout << "Top = " << s.top() << endl;

    if (s.empty())
        cout << "stack is empty\n";
    else
        cout << "Not empty\n";

    return 0;
}