#include <iostream>
#include <cstdlib>
#include <stdexcept>

using namespace std;

class student
{
    string name;
    int age;

public:
    student()
    {
        name = "annie";
        age = 18;
    }
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void you()
    {
        cout << "hi my name is " << name << " and my age is " << age << endl;
    }

    void *operator new(size_t size)
    {
        void *pointer;
        cout << "overloaded new  size is " << size << endl;
        pointer = malloc(size);
        if (!pointer)
        {
            bad_alloc ba;
            throw ba;
        }
        return pointer;
    }

    void operator delete(void *pointer)
    {
        cout << "overloaded delete" << endl;
        free(pointer);
    }
};

int main()
{
    student *annieptr;
    try
    {
        annieptr = new student("annie", 18);
        annieptr->you();
        delete annieptr;
    }
    catch (bad_alloc b)
    {
        cout << b.what() << endl;
    }

    return 0;
}