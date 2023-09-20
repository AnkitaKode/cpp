#include <iostream>
#include <map>

using namespace std;

int main()
{

    map<int, string> m = {{10, "cat"}, {20, "dog"}, {30, "bat"}};
    cout << "size = " << m.size() << endl;

    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    m.insert({100, "rabbit"});
    m.insert({10, "fish"});

    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    /* auto it = m.erase(m.find(10)); // M-1: For erase
     cout << it->first << endl;*/

    int num_erased = m.erase(100); // M-2: For erase
    cout << "num_erased = " << num_erased << endl;

    auto lb = m.lower_bound(10);
    auto ub = m.upper_bound(10);
    cout << "ub = " << ub->first << endl;
    cout << "lb = " << lb->first << endl;

    m.insert({{-50, "apple"}, {-20, "apes"}, {-18, "berry"}});
    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    map<int, string> m2 = {{10, "aa"}, {20, "bb"}};
    m.insert(m2.begin(), m2.end());
    cout << endl;

    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    return 0;
}