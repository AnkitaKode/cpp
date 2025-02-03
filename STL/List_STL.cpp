#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void print_list(list<int> &ll)

{
    for (list<int>::iterator it = ll.begin(); it != ll.end(); ++it)
        cout << *it << "\t";
    cout << endl;
}

int main()
{
    
    list<int> nums = {1, 2, 3, 4};
    print_list(nums);
    cout << "size: " << nums.size() << endl;

    // For printing again
    list<int> nums2 = nums;
    print_list(nums2);
    cout << endl;

    cout << "front = " << nums.front() << " , back = " << nums.back() << endl;
    cout << "Empty or not = " << nums.empty() << endl;
    cout << *nums.begin() << " , " << *nums.rbegin() << endl;
    ;

    print_list(nums);
    list<int>::iterator it = nums.begin();
    while (*it != 3 && it != nums.end())
    {
        it++;
        nums.insert(it, 100);
        print_list(nums);
    }

    nums.remove(4);
    print_list(nums);

    nums.clear();
    print_list(nums);
    cout << "Empty or not  " << nums.empty();

    return 0;
}