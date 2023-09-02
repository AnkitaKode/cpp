#include <iostream>
#include <exception>

using namespace std;

class overspeed : public exception
{
    int speed;

public:
    const char *what()
    {
        return "check out ur car speed \n you are in the car not in the aeroplane \n ";
    }

    void getspeed()
    {
        cout << "your car speed is " << speed << endl;
    }

    void setspeed(int speed)
    {
        this->speed = speed;
    }
};

class car
{
    int speed;

public:
    car()
    {
        speed = 0;
        cout << "speed is zero" << endl;
    }

    void accelerate()
    {
        for (;;)
        {
            speed += 10;
            cout << "speed is " << speed << endl;
            if (speed >= 250)
            {
                overspeed s;
                s.setspeed(speed);
                throw s;
            }
        }
    }
};

int main()
{
    car anniecar;
    try
    {
        anniecar.accelerate();
    }
    catch (overspeed s)
    {
        cout << s.what() << endl;
        s.getspeed();
    }
    return 0;
}