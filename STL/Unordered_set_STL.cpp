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

    unordered_set<int> us = {5, 10, 4, 3, 20, 6, 75, 57};
    for (int x : us)
        cout << x << " ";
    cout << endl;

    cout << "size = " << us.size() << endl;
    cout << "count(5) = " << us.count(5) << endl;

    cout << "num_erased(5) = " << us.erase(5) << endl;
    cout << "Empty or not = " << us.empty() << endl;
    cout << boolalpha << "found 20 = " << (us.find(20) != us.end()) << endl;
    cout << "num backets = " << us.bucket_count() << endl;
    cout << "load factor = " << us.load_factor() << endl;

    unordered_set<student, studenthashfunction> uss = {{50, "ankita"}, {20, "annie"}};

    // size_t h1 = hash<string>{}("hello");
    // size_t h2 = hash<string>{}("world!");
    // cout << h1 << "," << h2 << endl;
    // cout << hash<int>{}(100) << endl;
    // cout << hash<float>{}(100.5) << endl;

    return 0;
}