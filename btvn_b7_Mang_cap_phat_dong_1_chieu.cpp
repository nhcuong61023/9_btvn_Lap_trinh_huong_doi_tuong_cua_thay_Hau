#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random(int minN, int maxN)
{
   return minN + rand() % (maxN + 1 - minN);
}

int main()
{
   srand((int)time(0));
   int a;
   cout << "So Phan Tu Cua Mang la: ";
   cin >> a;
   int m, n;
   cout << "Nhap doan m, n: ";
   cin >> m >> n;
   cout << "(Cac gia tri cua mang se duoc lay ngay nhien tu doan (m,n))" << endl;
   float *ptr;
   // Cấp phát `a` ô nhớ kiểu float
   ptr = new float[a];
   for (int i = 0; i < a; i++) // Nhập mảng động 1 chiều
   {
      ptr[i] = random(m, n);
   }
   for (int i = 0; i < a; ++i)
   {
      cout << "Phan tu thu " << i << " :" << *(ptr + i) << endl; // In ra mảng động 1 chiều
   }

   // Tìm số dương nhỏ nhất
   int min = 0;
   for (int i = 0; i < a; i++)
   {

      if (ptr[i] > 0)
      {
         min = ptr[i];
         break;
      }
   }
   for (int i = 0; i < a; i++)
   {
      if (ptr[i] > 0 && ptr[i] < min)
         min = ptr[i];
   }
   if (min == 0)
   {
      cout << "\nkhong co so duong nho nhat";
   }
   else
   {
      cout << "\nSo duong Nho Nhat la: " << min;
   }
   // Tìm số âm lớn nhất
   int max = 0;
   for (int i = 0; i < a; i++)
   {

      if (ptr[i] < 0)
      {
         max = ptr[i];
         break;
      }
   }
   for (int i = 0; i < a; i++)
   {
      if (ptr[i] < 0 && ptr[i] > max)
         max = ptr[i];
   }
   if (max == 0)
   {
      cout << "\nkhong co so am lon nhat";
   }
   else
   {
      cout << "\nSo Am lon Nhat la: " << max;
   }

   delete[] ptr; // Giải Phóng bộ nhớ
   return 0;
}
