#include <iostream>
#include <string>
using namespace std;

class weather
{
    public:
        int id, tem;
        string city;
    public:
        void get_info()
        {
            int i, t;
            string c;
            cin >> i >> c >> t;
            i = id;
            c = city;
            t = tem;
        }

        void convert_to_celsius()
        {
            int cel;
            cel = ((tem)-32)*(5/9);
            cout << cel;
        }
};

void compare(weather a, weather b)
{
    if (a.tem > b.tem)
        cout << "greater";
    else 
        cout << "lesser";
}

int main()
{
    weather w1, w2;
    w1.get_info();
    w1.convert_to_celsius();
    w2.get_info();
    compare(w1,w2);
    return 0;
}