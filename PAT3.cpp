#include<iostream>
#include<string>
using namespace std;

int n;

class arr
{
    public:

        int *a = new int(n);
        friend ostream & operator << (ostream &out, const arr &p);
        friend istream & operator >> (istream &in,  arr &p);

        void get_elements()
        {
            int x;
            cin >>n;
            for (x = 0; x < n; x++) 
            {
                int c = count_digit(a[x]);
                if (c <= n)
                cin >> a[x];
            }
        }

        void display()
        {
            cout << "{";
            for (int x = 0; x < n; x++) 
            {
                cout << a[x];
            }
            cout << "}";

        }

        int count_digit(int number) 
        {
            int count = 0;
            while(number != 0) 
            {
                number = number / 10;
                count++;
            }
            return count;
        }

        arr operator ++(int arr[])
        {
            int i;
            int sum = 0; 
            for (int i = 0; i < n; i++) 
            {
                int d = count_digit(arr[i]);
                for (int j = i+1; j < n; j++) 
                {
                    e = count_digit(arr[j]);
                    if (d = e)
                    sum = arr[i]+arr[j];
                }
            }
        }
};

int main()
{
    
    return 0;
}