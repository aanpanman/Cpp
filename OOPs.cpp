#include<iostream>
using namespace std;

class e
{
    private:
        string name;
        string company;
        int age;

    public:
        e(string n, string c, int a)
        {
            name = n;
            company = c;
            age = a;
        }
    
        void display()
        {
            cout << "Name - " << name << endl;
            cout << "Company - " << company << endl;
            cout << "Age - " << age << endl;
        }

        void setname(string n)
        {
            name = n;
        }

        string getname()
        {
            return name;
        }

        void setcompany(string c)
        {
            company = c;
        }

        string getcompany()
        {
            return company;
        }
        
        void setage(int a)
        {
            age = a;
        }

        int getage()
        {
            return age;
        }

};

int main()
{
    e e1 = e("Avantika", "VIT", 18);
    e1.display(); 
    e e2 = e("Aditya", "VIT", 18);
    e2.display();
    e2.setname("Mitra");
    cout << e2.getname() << endl;
    return 0;
}