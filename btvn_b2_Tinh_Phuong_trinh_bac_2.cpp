// viết chương trình giải phương trình bậc 2, đầu vào a,b,c;
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Cho Ham so ax+by+c=0\n";
    int a,b,c;
    int g;
    do
    {
        cout<<"Nhap a: ";
        cin>>a;
        cout<<"Nhap b: "; 
        cin>>b;
        cout<<"Nhap c: "; 
        cin>>c;
    }while(a==0);
   
    g=b*b - 4*a*c;
    if ( g == 0)
    {
        cout<<"Phuong trinh co 1 nghiem kep x1 = x2 = "<< -b/(2*a);
    }
    else if(g> 0)
    {
        g=sqrt(g);
        cout<<"Phuong trinh co 2 nghiem Phan biet:";
        cout<<"x1= "<<(float)(-b+g)/(2*a)<<" x2= "<<(float)(-b-g)/(2*a);
    }
    else
    {
        cout<<"Phuong trinh vo nghiem";
    }
    return 0;
}