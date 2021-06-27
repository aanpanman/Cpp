#include<iostream>
#include<cstdlib>
using namespace std;

float area1 = 0;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int area(int a[], int b[])
{
    int x, y, z;
    for(int i = 0;i < sizeof(a)/sizeof(a[0]); i++)
    {
        for(int j = i+1; j < sizeof(a)/sizeof(a[0]); j++)
        {
            for(int k = j+1; k < sizeof(a)/sizeof(a[0]); k++)
            {
                float area = ((a[i]*b[j])-(b[i]*a[j]) + 
                 (a[j]*b[k])-(b[j]*a[k]) +
                 (a[k]*b[i])-(b[k]*a[i]))/2;
                
                if (area<0)
                {
                    area=-1*area;
                }
                if(area>area1)
                {
                    area1=area;
                    x = i;
                    y = j;
                    z = k;
                }
    
            }
        }
    }
    return (area, x, y, z);
}

void sort(int a[], int b[])
{
    for(int i=0;i<sizeof(a)/sizeof(a[0]);++i)
    {
        for(int j=i+1;j<sizeof(a)/sizeof(a[0]);++j)
        {
            if(a[i]<a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int x_axis[n], y_axis[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x_axis[i] >> y_axis[i];
    }

    int x, y, j;

    sort(x_axis, y_axis);
    area, x, y, j = area(x_axis, y_axis);

    cout<<area;
    cout<<"\n";
    cout<<x_axis[j]<<"\t"<<y_axis[j]<<"\n";
    cout<<x_axis[y]<<"\t"<<y_axis[y]<<"\n";
    cout<<x_axis[x]<<"\t"<<y_axis[x]<<"\n";

    return 0;
}