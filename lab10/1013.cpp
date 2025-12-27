#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    double b = a;
    double arr[a];
    double sum = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> *(arr + i);
        sum += *(arr + i);
    }
    cout << "Prices: ";
    for (int i = 0; i < a; i++)
    {
        cout << *(arr + i) << " ";
    }cout<<endl;
    cout << "Total: " << sum<<endl;
    cout << "Average: " << sum / b<<endl;
}