## 多文件编译并调试

mkdir build  
cd build  
 如果电脑上已经安装了VS，可能会调用微软MSVC编译器，使用（cmake -G "MinGW Makefiles" ..）替代（cmake ..）即可  
 仅第一次使用cmake时使用，之后只需cmake ..  
cmake ..
