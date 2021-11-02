// VSCode C/C++ 配置教程；
// https://www.bilibili.com/video/BV1nt4y1r7Ez?from=search&seid=1523766354698806570

// 安装minGW: https://nuwen.net/mingw.html

// 无法再terminal输入内容：
// File -> Preferences -> Settings -> run in terminal 
// -> (Code-runner: Run In Terminal), restart vscode

// 文件名中不应含有“.” http://nicethemes.cn/news/txtlist_i61307v.html
// 否则提示“程序...无法运行：没有应用程序与此操作的指定文件有关联”

// vscode + github
// https://www.bilibili.com/video/BV1dK411p7RF?from=search&seid=9806334562423815315&spm_id_from=333.337.0.0
#include <iostream>
using namespace std;
int main(){
    cout << "C++: Hello World!";
    string first_name, last_name;

    cout << "Enter your first name : ";
    cin >> first_name;
    cout << "Enter your last name : ";
    cin >> last_name;

    cout << "Your full name is : " << first_name + last_name;

    return 0;
}