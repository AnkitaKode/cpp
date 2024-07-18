#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> m = {{10, "cat"}, {20, "dog"}, {30, "bat"}};
    cout << "size = " << m.size() << endl;

    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    m.insert({100, "rabbit"});
    m.insert({10, "fish"});
    m.insert({{10, "cat"}, {12, "bat"}});
    m.insert(make_pair<int, string>(12, "bat_2"));

    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    map<int, string> m2 = {{10, "aa"}, {20, "bb"}};
    m.insert(m2.begin(), m2.end());
    cout << endl;
    for (auto &p : m)
        cout << "{" << p.first << "," << p.second << "}";
    cout << endl;

    auto it = m.erase(m.find(10));
    // cout << it->first << endl;
    cout << "size = " << m.size() << endl;

    auto lb = m.lower_bound(10);
    auto ub = m.upper_bound(10);
    cout << "ub = " << ub->first << endl;
    cout << "lb = " << lb->first << endl;

    return 0;
}