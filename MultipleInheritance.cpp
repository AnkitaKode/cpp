#include <iostream>
#include <cstring>
using namespace std;

class father
{
public:
    int height;
    void askfather()
    {
        cout << "ask your father" << endl;
    }
};
class mother
{
public:
    string skincolor;
    void askmother()
    {
        cout << "am your mother" << endl;
    }
};
class child : public father, public mother
{
public:
    void askparents()
    {
        cout << " am asking my parents " << endl;
    }
    void setcolor(string icolor, int iheight)
    {
        skincolor = icolor;
        height = iheight;
    }
    void display()
    {
        cout << "height is " << height << " and color is " << skincolor << endl;
    }
};
int main()
{

    child ankita;
    ankita.setcolor("white", 6);
    ankita.display();

    return 0;
}