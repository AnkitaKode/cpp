#include <iostream>
using namespace std;
int main()
{
    //  **C++ CONTROL STRUCTURES
    // 1.Sequence structure
    // 2.Selection structure
    // 3.Loop structure
    // SELECTION CONTROL STRUCTURE
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    // if((age<18)&&(age>1)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age<=1){
    //     cout<<"You are a infant."<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid  and you will get a kid pass."<<endl;

    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }
    // SELECTION CS BY: SWITCH METHOD
    switch (age)
    {
    case 18:
        cout << "You are 18." << endl;

        break;
    case 22:
        cout << "You are 22." << endl;
        break;
    case 10:
        cout << "You are 10." << endl;
        break;

    default:
        cout << "No special cases." << endl;
        break;
    }
    cout << "Done with switch case.";

    return 0;
}