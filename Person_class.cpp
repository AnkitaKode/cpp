class person
{
    string name;
    int age;

public:
    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "I am " << name << " and i am " << age << " years old" << endl;
    }
};