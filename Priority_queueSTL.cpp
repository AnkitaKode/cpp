#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
   priority_queue<int> q;
   vector<int> v = {8, 1, 2, 3, 4, 0, 5, 6};
   for (int x : v)
      q.push(x);
   while (!q.empty())
   {
      cout << q.top();
      cout << endl;
      q.pop();
   }

   return 0;
}