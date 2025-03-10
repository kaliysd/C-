/*
* 标识符：凡是我们自己命名的地方，都称为标识符，比如，变量名，函数名，数组名，结构体名。
* **标识符的命名规则**（必须遵守的`硬性规定`）
    - 只能由26个英文字母大小写，0-9 或 _ 组成
    - 数字不可以开头
    - 不可以是关键字，但可以包含关键字
    - C99和C11允许使用更长的标识符名，但是编译器只识别前63个字符。(会忽略超出的字符)
    - 不允许有空格。
    - 严格区分大小写字母。比如：Hello、hello是不同的标识符。
**标识符的命名建议**（建议遵守的`软性要求`）

    在起名字时，为了提高阅读性，要尽量有意义，“见名知意”。如：sum，name，max，year，total 等。
    不要出现仅靠大小写区分不同的标识符。如：name、Name 容易混淆
    尽量避免名字中出现数字编号，如value1、value2等，除非逻辑上需要编号。
    习惯上，所有宏定义、枚举常数、常量(只读变量)全用大写字母命名，用下划线分隔单词。
    比如： const double TAX_RATE = 0.08; //TAX_RATE 只读变量
    - 系统内部使用了一些下划线开头的标识符（比如两个下划线开头的变量名、一个下划线 + 大写英文字母开头的变量名）。比如，C99 标准添加的类型 `_Bool`。为防止冲突，建议用户尽量避免使用下划线开头的标识符。
    - 下划线通常用于连接一个比较长的变量名。如：max_classes_per_student。
    - 变量名、函数名：多单词组成时，第一个单词首字母小写，第二个单词开始每个单词首字母大写：xxxYyyZzz (驼峰法，小驼峰)。比如：`short stuAge = 20; `，`tankShotGame`。
 */

#include<stdio.h>
int main() {
    int num = 19;
    //int return= 10;//不能是关键字
    //区分大小写
    int a = 19;
    int A = 10;
    int student_age = 5;//下划线命名方式
    int studentId = 2;//小驼峰命名方式
    return 0;
}