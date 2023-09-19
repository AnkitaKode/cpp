#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;
int main()
{
    // deque<int> d={1,9,6,2};

    deque<int> d;
    d.push_back(1);
    d.push_back(9);
    d.push_front(6);
    d.push_back(2);

    cout << endl;
    cout << "size: " << d.size() << endl;
    cout << "Print First Index Element->" << d.at(1) << endl;
    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    cout << "Empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase " << d.size()
         << endl;
    for (int i : d)
    {
        cout << i << endl;
    }

    d.push_back(7);
    {
        for (deque<int>::iterator it = d.begin(); it != d.end(); ++it)
            cout << *it << "\t";
        cout << endl;
    }
    {
        for (deque<int>::reverse_iterator it = d.rbegin(); it != d.rend(); ++it)
            cout << *it << "\t";
        cout << endl;
    }
    
    return 0;
}