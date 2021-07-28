//字符输出函数putchar的功能是向设备输出一个字符，其一般格式为：putchar(c); 
// c为欲输出的字符常量或变量，亦可为整型常量或变量（ASCII码)
#include<stdio.h>
int main()
{
    char a='A';
    int b=66;
    putchar(a);
    putchar(b);
    putchar('c');
    putchar('\n');
    return 0;
}
