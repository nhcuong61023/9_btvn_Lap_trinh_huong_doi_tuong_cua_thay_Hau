// Viết Hàm tính tổng các số nguyên tố từ 1 đến n
#include <iostream>
#include <math.h>
using namespace std;

int so_Nguyen_to(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, t = 0;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n > 50);
    for (int i = 1; i <= n; i++)
    {
        if (so_Nguyen_to(i))
        {
            t += i;
        }
    }
    cout << "Tong la: " << t;
}