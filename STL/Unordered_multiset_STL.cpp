#include <iostream>
#include <functional>
#include <unordered_set>

using namespace std;

class student
{
public:
    int id;
    string name;
    bool operator==(const student &other) const
    {
        return (this->id < other.id);
    }

    void print_student() const
    {
        cout << "[name = " << name << " , id = " << id << "] \n";
    }
};

class studenthashfunction
{
public:
    size_t operator()(const student &s) const
    {
        return (hash<int>{}(s.id) + hash<string>{}(s.name));
    }
};

int main()
{

    unordered_multiset<int> us = {5, 20, 57, 10, 4, 3, 20, 6, 75, 57};
    for (int x : us)
        cout << x << " ";
    cout << endl;

    auto its = us.equal_range(5);
    for (auto it = its.first; it != its.second; ++it)
        cout << "Equal range iterator" << *it << " ";
    cout << endl;

    cout << "size = " << us.size() << endl;
    cout << "count(5) = " << us.count(5) << endl;

    cout << "num_erased(5) = " << us.erase(5) << endl;
    cout << "Empty or not = " << us.empty() << endl;
    cout << boolalpha << "found 20 = " << (us.find(20) != us.end()) << endl;
    cout << "num backets = " << us.bucket_count() << endl;
    cout << "load factor = " << us.load_factor() << endl;

    unordered_set<student, studenthashfunction> uss = {{50, "ankita"}, {20, "annie"}, {18, "ravie"}, {50, "ankita"}};

    for (auto &st : uss)
        st.print_student();
    return 0;
}