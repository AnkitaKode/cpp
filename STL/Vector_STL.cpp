#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "capacity: " << v.capacity() << endl;
    cout << "size: " << v.size() << endl;
    cout << "max size: " << v.max_size() << endl;
    cout << "Element at 2nd index: " << v.at(2) << endl;
    cout << "Finding 6->" << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower bound->" << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    cout << "Upper bound->" << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max->" << max(a, b) << endl;
    cout << "min->" << min(a, b) << endl;

    swap(a, b);
    cout << endl
         << "a->" << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string-->" << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    v.insert(v.begin() + 2, 91);
    cout << endl;
    cout << "v at 2 " << v[2] << endl;
    cout << " size = " << v.size() << endl;

    v.pop_back();
    cout << "After pop back size = " << v.size();

    return 0;
}