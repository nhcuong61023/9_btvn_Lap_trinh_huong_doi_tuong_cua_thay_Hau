// Viết Hàm tính Bình Phương của 1 số
#include <iostream>
#include <math.h>
using namespace std;

int ham_binh_phuong(int n)
{
    return pow(n, 2);
}

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Binh Phuong cua " << n << " la: " << ham_binh_phuong(n);
    return 0;
}