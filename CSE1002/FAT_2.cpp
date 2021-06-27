#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class vec
{   
    private:
        vector<int> list;

        

    public:

        void get_input(int n)
        {
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                float b = x/(10^n);
                if (-1 < b < 1)
                    list.push_back(x);
                else
                    cout << "Invalid input" << endl;
            }
        }

        int reverseNum(int a)
        {
            int r = 0;
            while (a > 0) 
            {
                r = r * 10 + a % 10;
                a = a / 10;
            }
            return r;
        }

        int digits(int a)
        {   
            int d = 0;
            while (a != 0)
            {
                    a = a / 10;
                    ++d;
            }
            return d;
        }

        int change_pali_pos(int a)
        {
            int d = digits(a);
            if (d%2 == 0)
            {   
                
            }
            else 
            {
                int t = (d+1/2);
                int f = a/10^(d-t);
                f = a - f*10^(d-t);
                return f;
            }
        }
        
        int change_pali_neg(int a)
        {
            int d = digits(a);
            if (d%2 == 0)
            {   
                int k = d/2;
                int e = a/10^k;
                e = a - e*10^k;
                return e;
            }
            else 
            {
                int t = (d+1/2);
                int f = a/10^t;
                f = a - f*10^t;
                return f;
            }
        }

        void palindrome()
        {   
            int m, r;
            for (int &value : list )
            {   
                if (value < 0)               
                    m = value*-1;                
                r = reverseNum(m);
                if (m == r)
                {
                    if (value < 0)
                    {
                        int k = change_pali_neg(m);
                        value = k*-1;
                    }
                    else
                    {
                        int k = change_pali_pos(value);
                        value = k;
                    }
                }
            }
        }

        void sorting()
        {

            sort(list.begin(),list.end());

        }

        void display_list()
        {
            for (int &value: list)
            {
                cout << value << endl;
            }
        }

        void sum()
        {   
            int sum_n = 0;
            int sum_p = 0;
            for (int &value: list)
            {
                if (value<0)
                {
                    sum_n = sum_n + value;
                }
                else
                {
                    sum_p = sum_p + value;
                }
            }
            if (sum_n != 0 && sum_p != 0)
            {
                cout << "{" << sum_n << ", " << sum_p << "}";
            }
            else if (sum_n == 0)
            {
                cout << sum_p;
            }
            else if (sum_p == 0)
            {
                cout << sum_n;
            }
        }

};

int main()
{
    vec v1;
    int n;
    cin >> n;
    v1.get_input(n);
    v1.palindrome();
    v1.sorting();
    v1.display_list();
    v1.sum();
    return 0;
}