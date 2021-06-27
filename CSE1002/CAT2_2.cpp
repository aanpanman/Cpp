#include <iostream>
#include <string.h>
using namespace std;

int min(int arr[],int n)
{
    int m;
    m = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(m > arr[i])
            m = arr[i];
    }
    return(m);
}

class student
{
    public:
        string name;
        int regno, marks;
};

int main()
{
    int n;
    cin >> n;
    student s[n];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i].regno;
        cin >> s[i].name;
        cin >> s[i].marks;
    }

    int S[n];
    for(int i = 0; i < n; i++)
    {
        S[i]=s[i].marks;
    }

    int x = min(S,n);

    for(int i = 0; i < n; i++)
    {
        if(s[i].marks == x)
            cout<<s[i].regno;
    }
    return 0;
}

