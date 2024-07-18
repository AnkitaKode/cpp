#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<int> q;

    cout << std::boolalpha << q.empty() << endl;

    for (int i = 1; i <= 5; ++i)
        q.push(i);
    cout << "front = " << q.front() << " , back = " << q.back() << endl;

    cout << "size = " << q.size() << endl;

    // 1,2 vanished
    q.pop();
    q.pop();

    cout << "front = " << q.front() << " , back = " << q.back() << endl;
    cout << "size = " << q.size() << endl;
    cout << std::boolalpha << q.empty() << endl;

    return 0;
}