#include <iostream>
using namespace std;

class Time
{
    private:
        int sec;
        int hh,mm,ss;
    public:
        void getTime();
        void convert();
        void display();
};

void Time::getTime()
{
    cout << "Enter time in hour:Minutes:seconds: " << endl;
    cout << "Hours ?   ";
    cin >> hh;
    cout << "Minutes ? ";
    cin >> mm;
    cout << "Seconds ? ";
    cin >> ss;
}
void Time::convert()
{
    sec = hh*3600 + mm*60 + ss;
}
void Time::display(){
     cout<<"Total time in seconds is "<<sec;
}

int main()
{
    Time T;

    T.getTime();
    T.convert();
    T.display();
    return 0;
}
