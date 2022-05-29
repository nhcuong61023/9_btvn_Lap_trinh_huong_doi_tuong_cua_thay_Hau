// Cho 1 mảng gồm n phần tử ( n<50). Tính tổng các phần tử lẻ ,và chẵn, sau đó sắp xếp tăng dần
#include <iostream>
using namespace std;

int so_le(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (n == 2 * i + 1)
        {
            return 1;
        }
    }
    return 0;
}

int so_chan(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n == 2 * i)
        {
            return 1;
        }
    }
    return 0;
}

int sap_xep_tang_dan(int a[], int c)
{
    int n;
    for (int i = 0; i < c; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (a[i] > a[j])
            {
                int hoandoi = a[j];
                a[j] = a[i];
                a[i] = hoandoi;
            }
        }
    }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n > 50);
    int tc = 0, tl = 0;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (so_chan(a[i]))
        {
            tc += a[i];
        }
        if (so_le(a[i]))
        {
            tl += a[i];
        }
    }
    cout << "Tong cac phan tu chan la: " << tc << endl;
    cout << "Tong cac phan tu le la: " << tl << endl;
    sap_xep_tang_dan(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}