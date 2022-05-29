/* Chương trình tìm mẫu chung nhỏ nhất */
#include <iostream>
using namespace std;
int main()
{
    int a, b, i, min;
    cout << "Nhap vao hai so:";
    cin >> a >> b;
    min = a > b ? b : a;
    for (i = 2; i < min; ++i)
        if (((a % i) == 0) && ((b % i) == 0))
            break;
    if (i == min)
    {
        cout << "Khong co mau chung nho nhat";
        return 0;
    }
    cout << "Mau chung nho nhat la " << i;
    return 0;
}
