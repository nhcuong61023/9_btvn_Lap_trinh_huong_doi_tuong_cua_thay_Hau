/* Nhân 2 Mảng động 2 chiều A[mxn] và B[mxn].
 Mỗi ma trận được cấp phát động và các giá trị của chúng phát sinh ngẫu nhiên (Với m, n nhập từ bàn phím).
 */

#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
int main()
{
    int y, x, sum, k; // y là hàng; x là cột.
    cout << ("Nhap so hang va so cot cua mang 2 chieu: ");
    cin >> y;
    cin >> x;
    // Cấp phát động cho ma trận 1( mảng 1)
    int **nums1;
    nums1 = (int **)malloc(sizeof(int *) * y);
    for (int i = 0; i < y; i++)
    {
        nums1[i] = (int *)malloc(sizeof(int) * x);
    }
    // Nhập mảng 1
    srand((int)time(0));
    // cout << ("\nNhap phan tu: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            // cout<<"array["<<i<<"]["<<j<<"]: ";
            // cin>>nums1[i][j];
            nums1[i][j] = rand();
        }
    }
    // Xuất mảng 1
    cout << ("Ma Tran 1: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << nums1[i][j] << " ";
        }
        cout << ("\n");
    }

    // Cấp phát động cho ma trận 2( mảng 2)
    int **nums2;
    nums2 = (int **)malloc(sizeof(int *) * y);
    for (int i = 0; i < y; i++)
    {
        nums2[i] = (int *)malloc(sizeof(int) * x);
    }
    // Nhập mảng 2
    srand((int)time(0));
    // cout << ("\nNhap phan tu: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            // cout<<"array["<<i<<"]["<<j<<"]: ";
            nums2[i][j] = rand();
        }
    }
    // Xuất mảng 2
    cout << ("Ma Tran 2: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << nums2[i][j] << " ";
        }
        cout << ("\n");
    }

    // Phép nhân ma trận   y ,x  ( y: hàng     x: cột)
    /* Cấp phát động cho ma trận 3( mảng 3), 
    Ma trận này dùng để lưu các giá trị khi nhân ma trận 1 và ma trận 2 lại với nhau */
    int **nums3;
    nums3 = (int **)malloc(sizeof(int *) * y);
    for (int i = 0; i < y; i++)
    {
        nums3[i] = (int *)malloc(sizeof(int) * x);
    }
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            nums3[i][j] = 0;
            for (k = 0; k < x; k++)
            {
                nums3[i][j] += nums1[i][k] * nums2[k][j];
            }
        }
    }
    // Xuất ma trận được tạo bởi tích của 2 ma trận 1 và 2
    cout << ("Ma tran sau khi nhan la: \n");
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << nums3[i][j] << " ";
        }
        cout << ("\n");
    }

    // Giải phóng các bộ nhớ đã dùng để lưu các phần tử sau khi đã tạo mảng
    for (int i = 0; i < y; i++)
    {
        free(nums1[i]);
    }
    // Giải phóng bộ nhớ đã dùng để lưu địa chỉ mảng sau khi đã tạo mảng
    free(nums1);

    // Giải phóng các bộ nhớ đã dùng để lưu các phần tử sau khi đã tạo mảng
    for (int i = 0; i < y; i++)
    {
        free(nums2[i]);
    }
    // Giải phóng bộ nhớ đã dùng để lưu địa chỉ mảng sau khi đã tạo mảng
    free(nums2);
    // Giải phóng các bộ nhớ đã dùng để lưu các phần tử sau khi đã tạo mảng
    for (int i = 0; i < y; i++)
    {
        free(nums3[i]);
    }
    // Giải phóng bộ nhớ đã dùng để lưu địa chỉ mảng sau khi đã tạo mảng
    free(nums3);
    return 0;
}


