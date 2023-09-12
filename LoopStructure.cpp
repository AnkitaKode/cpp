#include <iostream>
using namespace std;
int main()
{
    // Loops in C++:Repetetive
    // Types of loops-->
    // 1.For loops
    // 2.while loops
    // 3.Do-while loops

    // *For loops
    // int i =1;
    // cout<<i;
    // i++;
    //  cout<<i;
    // i++;
    //  cout<<i;
    // i++;
    // SYNTAX---
    // INSTALLATION CONDITION UPDATION
    // OR
    //      int i=1;
    //    { for (i = 1; i<=20; i++)
    //       cout<<i<<endl;

    //         /* code */
    //     }

    //*while loops

    // int i =1;
    // while (i<=50)
    // {
    //  cout<<i<<endl;
    //  i++;
    // }

    //*Do-while loops
    int i = 1;
    do
    {
        cout << i << endl;
        i++;

    } while (i <= 20);

    return 0;
}
// difference in while & do while is that even if  (in do while) while(false) it will run for atleast once.