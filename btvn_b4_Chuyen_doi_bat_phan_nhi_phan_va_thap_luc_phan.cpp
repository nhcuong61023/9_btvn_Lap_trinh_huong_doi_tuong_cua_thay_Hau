#include<iostream>
#include<math.h>
#include <string.h>
using namespace std;
int nhi_phan(int n)
{
    int i=0,a=0;
    while(n>0)
    {
        a+= n%2 * pow(10,i);
        i++;
        n=n/2;
    }
    return a;
}
int bat_phan(int n)
{
    int i=0,a=0;
    while(n>0)
    {
        a+= n%8 * pow(10,i);
        i++;
        n=n/8;
    }
    return a;
}
string hexa(int n, char kq[])
{
    int d ;
    while ( n > 0)
    {
        int x = n % 16;
        n = n/ 16;
        if (x < 10){
            kq[d] = x + '0';
        }else
        {
            kq[d] = x + 55;
        }
        d++;
    }
    kq[d] = '\0';
    strrev(kq);
    return kq;
}
int main()
{
    char kq[20];
    cout<<"S\t\t\tNhi_phan\t\t\tBat_phan\t\t\tThap_luc_phan";
    for( int i = 1; i<= 256; i++)
    {
        cout<<endl;
        cout<<i<<"\t\t\t"<<nhi_phan(i)<<"\t\t\t"<<bat_phan(i)<<"\t\t\t"<< hexa(i , kq)<<endl;
    }
    return 0;
}
Tận dụng phím tắt
Dùng phím tắt để thực hiện tác vụ luôn nhanh hơn dùng chuột hay menu. Bạn không nhất thiết phải học thuộc lòng mọi phím tắt này, mà chỉ cần nhớ là chúng có tồn tại để dễ bề “lục lọi” khi cần.
Chung    
Ctrl+Shift+P            Mở Command Prompt
Ctrl+K, Ctrl+B        Ẩn/hiện side bar
Chỉnh sửa    
Ctrl+Shift+↑            Dịch chuyển dòng/vùng chọn lên 1 dòng
Ctrl+Shift+↓    Dịch chuyển dòng/vùng chọn xuống 1 dòng
Ctrl+L    Chọn dòng hiện tại, tiếp tục nhấn Ctrl+L để chọn dòng tiếp theo
Ctrl+D    Chọn một từ, tiếp tục nhấn Ctrl+D để chọn những từ giống vậy
Ctrl+Shift+D    Nhân đôi dòng hiện tại
Ctrl+M    Đi tới dấu đóng ngoặc gần nhất - Lặp lại để đi tới dấu mở ngoặc
Ctrl+Shift+M    Chọn toàn bộ nội dung trong dấu ngoặc
Ctrl+Shift+K    Xóa toàn bộ dòng
Ctrl+]    Lùi dòng hiện tại vào trong 1 tab
Ctrl+[    Lùi dòng hiện tại ra ngoài 1 tab
Ctrl+/    Comment/Un-comment dòng/vùng chọn hiện tại
Điều hướng/di chuyển    
Ctrl+P    Mở nhanh file bằng tên
Ctrl+R    Đi đến kí tự cần tìm
Ctrl+;    Đi đến từ trong file hiện tại
Ctrl+G    Đi đến dòng trong file hiện tại
Tìm kiếm và thay thế    
Ctrl+F    Tìm
Ctrl+H    Thay thế
Ctrl+Shift+F    Tìm trong các file đang mở
Tabs    
Ctrl+Shift+T    Mở tab đã đóng gần nhất
Ctrl+Tab    Di chuyển qua lại giữa các tab
Ctrl+W    Đóng tab hiện tại
Alt+[NUM]    Đi tới tab thứ [NUM]
Chia màn hình    
Alt+Shift+NUM
Chia màn hình thành [NUM] cột
Alt+Shift+5    Chia màn hình thành grid gồm 4 groups
Alt+Shift+8    Chia màn hình thành 2 hàng
Ctrl+[NUM]    Đi tới group thứ [NUM]
Ctrl+[NUM]    Chuyển file tới group thứ [NUM]
Bookmarks    
Ctrl+F2    Bookmarks/Bỏ bookmarks
F2    Đi tới bookmarks tiếp theo
Shift+F2    Đi tới bookmarks trước
Ctrl+Shift+F2    Xóa tất cả bookmarks
Thao tác với văn bản    
Ctrl+K, Ctrl+U    Chuyển vùng chọn sang chữ in hoa
Ctrl+K, Ctrl+L    Chuyển vùng chọn sang chữ thường

Bôi đen 1 từ xong ấn tab để xem những từ gần giống
