#include <iostream>
#include <set>

using namespace std;
class student
{
public:
    int id;
    string name;
    void print_student() const
    {
        cout << "[name = " << name << " , id = " << id << "] \n";
    }
    bool operator<(const student &other) const
    {
        return (this->id < other.id);
    }
};

int main()
{
    // in multi_set repeated nums will also display
    set<int> s = {10, 20, 40, 10, 30, 64, 12};
    cout << "size = " << s.size() << endl;
    s.insert(100);
    s.insert(10);
    cout << "size = " << s.size() << endl;

    for (auto &el : s)
        cout << el << " ";
    cout << endl;

    // auto it = s.erase(s.find(10));
    // cout << *it << endl;

    int num_erased = s.erase(10);
    cout << "num_erased = " << num_erased << endl;

    for (auto &el : s)
        cout << el << " ";
    cout << endl;

    auto ub = s.upper_bound(10);
    auto lb = s.lower_bound(10);
    cout << "ub = " << *ub << endl;
    cout << "lb = " << *lb << endl;

    s.insert({-10, -20, -30});
    for (auto &el : s)
        cout << el << " ";
    cout << endl;

    set<student> sst = {{50, "ankita"}, {20, "annie"}};
    for (auto &st : sst)
        st.print_student();
    cout << endl;
    return 0;
}