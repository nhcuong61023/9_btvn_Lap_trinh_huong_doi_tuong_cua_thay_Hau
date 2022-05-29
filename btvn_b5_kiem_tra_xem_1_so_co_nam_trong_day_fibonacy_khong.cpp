// Kiểm tra xem n có nằm trong dãy fibonaci không
#include <iostream>
using namespace std;

int kiem_tra_Fibonaci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return kiem_tra_Fibonaci(n - 1) + kiem_tra_Fibonaci(n - 2);
}
int main()
{
    int n;
    int dem = 0;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (kiem_tra_Fibonaci(i) == n)
        {
            cout << n << " nam trong day fibonaci va La phan tu thu " << i << " trong day fibonaci";
            dem++;
        }
    }
    if (dem == 0)
    {
        cout << n << " khong thuoc trong day fibonaci ";
    }
    return 0;
}
