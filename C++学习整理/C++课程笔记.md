

# C++基础入门

|   阶段   |      内容       |                 目标                  |      案例      |
| :------: | :-------------: | :-----------------------------------: | :------------: |
| 第一阶段 | c++基础语法入门 |  对c++有初步了解，能够有基础编程能力  | 通讯录管理系统 |
| 第二阶段 |   c++核心编程   | 介绍c++面向对象编程，为大型项目做铺垫 |  职工管理系统  |
| 第三阶段 |   c++提升编程   | 介绍c++泛型编程思想以及STL的基础使用  |  演讲比赛系统  |

综合大案例：机房预约系统

## 1.初识C++

### 1.1第一个c++程序

vs中新建项目，修改好名称，保存路径，再源文件中新建项目

```c++
#include <iostream>
using namespace std;
int main() {
	cout << "hello world" << endl;
	system("pause");
	return 0;
}
```

### 1.2注释

作用：添加解释与说明，方便自己或其他程序员阅读

单行注释:     `// 描述信息`

多行注释:     `/* 描述信息 */`

```c++
/*
	main是一个程序的入口
	每个程序都必须有这么一个函数
	有且只有一个
*/
```

### 1.3变量

**作用**：给一段指定的内存空间起名，方便操作这段内存

**语法**：数据类型 变量名 = 初始值；

**示例**：

````c++
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}
````

### 1.4常量

作用：用于记录程序中不可更改的数据

c++定义常量两种方式：

1.#define宏常量：#define 常量名 常量值

==通常在文件上方定义，表示一个常量==

2.const 修饰的变量：const数据类型 常量名 = 常量值

==通常在变量定义前面加关键字const，修饰该变量为常量，不可修改==

### 1.5关键字

[![yaE7kR.png](https://s3.ax1x.com/2021/02/08/yaE7kR.png)](https://imgchr.com/i/yaE7kR)

### 1.6标识符命名规则

作用：C++规定给标识符（常量、变量）命名时，有一套自己的规则

```c++
1.标识符不能是关键字
2.标识符只能由字母、数字、下划线组成
3.第一个字符必须为字母或下划线
4.标识符中字母区分大小写
```

## 2.数据类型

### 2.1整型

作用：整型变量表示的是==整数类型==的数据

| 数据类型            | 占用空间                                          | 取值范围          |
| ------------------- | ------------------------------------------------- | ----------------- |
| short(短整型)       | 2字节                                             | (-2\^15\~2\^15-1) |
| int(整型)           | 4字节                                             | (-2\^31\~2\^31-1) |
| long (长整型)       | Windows4字节，Linux为4字节（32位），8字节（64位） | (-2\^15\~2\^15-1) |
| long long(长长整型) | 8字节                                             | (-2\^63\~2\^63-1) |

```c++
#include <iostream>
using namespace std;
int main() {
	short num1 = 10; //(-32,768 ~ 32，767)
	int num2 = 10; //(-2,147,483,648 ~ 2,147,483,647)
	long num3 = 10;//(-2,147,483,648 ~ 2,147,483,647)
	long long num4 = 10; //(-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807)
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	system("pause");
	return 0;
}
```





### 2.2sizeof关键字

**作用：**利用sizeof求出数据类型占用内存大小

**语法：**`sizeof(数据类型 / 变量)`

```c++
#include <iostream>
using namespace std;
int main() {
	//利用sizeof求出数据类型占用内存大小
	short num1 = 10;
	cout << "short占用的内存空间为： " << sizeof(short) << endl;
	cout << "num1占用的内存空间为： " << sizeof(num1) << endl;
	system("pause");
	return 0;
}
```

### 2.3实型（浮点型）

作用：用于表示小数

浮点型变量分为两种

1.单精度float

2.双精度double

两者的区别在于表示有效数字的范围不同

| 数据类型 | 占用空间 | 有效数字范围    |
| -------- | -------- | --------------- |
| float    | 4字节    | 7位有效数字     |
| double   | 8字节    | 15-16位有效数字 |



```c++
#include <iostream>
using namespace std;
int main() {
	float f1 = 3.14f;
	double d1 = 3.1415;
	//默认情况下输出一个小数，会显示出6位有效数字
	cout << "f1 = " << f1 << endl;
	cout << "d1 = " << d1 << endl;
	//利用sizeof算出占用空间
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	//科学技术法
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2; //3 * 10 ^ 2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}
```



### 2.4字符型

**作用:**字符型变量用于显示单个字符

**语法**： `char ch = 'a';`

注意 ：c和c++中字符型变量只占用一个字节

字符型变量并不是把字符存放在内存中存储，而是把对应的ASCII编码放入到存储单元



```c++
#include <iostream>
using namespace std;
int main() {
	//1.字符型变量创建方式
	char ch = 'a';
	//2.字符型变量所占内存大小
	cout << "sizeof(a) = " << sizeof(ch) << endl;
	//3.字符型变量常见错误
		//1.char ch2 = "b"; 创建字符型变量要用单引号
		//2.char ch2 = "abcdf"  只能是单个字符
	//4.字符型对应ASCII编码
	cout << (int)ch << endl;
	system("pause");
	return 0;
}
```



[![yaVS7d.png](https://s3.ax1x.com/2021/02/08/yaVS7d.png)](https://imgchr.com/i/yaVS7d)



[![yaV9AA.png](https://s3.ax1x.com/2021/02/08/yaV9AA.png)](https://imgchr.com/i/yaV9AA)



### 2.5转义字符

作用：用于表示一些==不能显示出来的ASCII字符==

常用转义字符：`\n  \\ \t`

```c++
#include <iostream>
using namespace std;
int main() {
	cout << "hello world\n";
	cout << "\\" << endl;
	cout << "\tcomputer\n";
	system("pause");
	return 0;
}
```

### 2.6字符串型

作用：用于表示一串字符

两种风格

1.C风格字符串：`char 变量名[] = "字符串"`

2.C++风格字符串： `string 变量名 = "字符串"`

```c++
#include <iostream>
#include <string>
using namespace std;
int main() {
	//1.C风格字符串
	char str[] = "hello world";
	cout << str << endl;
	//2.C++风格字符串
	string str1 = "computer";
	cout << str1 << endl;
	system("pause");
	return 0;
}
```

### 2.7布尔类型

作用：布尔数据类型代表真或假的值

bool类型只有两个值

true——真（本质是1）

flase——假（本质是0）

**bool类型占一个字节大小**

```c++
#include <iostream>
#include <string>
using namespace std;
int main() {
	//1.创建数据类型
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;
	//2.查看诗句所占空间大小
	cout << "sizeof(bool) = " << sizeof(bool) << endl;
	system("pause");
	return 0;
}
```

### 2.8 数据的输入

作用：用于键盘输入

```c++
#include <iostream>
using namespace std;
int main() {
	//1.整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a的值为：" << a  << endl;
	//2.实型
	float b = 3.14f;
	cout << "请给实型b赋值：" << endl;
	cin >> b;
	cout << "实型变量b的值为：" << b << endl;
	//3.字符型
	char c;
	cout << "请给字符c赋值：" << endl;
	cin >> c;
	cout << "字符变量c的值为：" << c << endl;
	//4.字符串型
	//5.布尔类型
	system("pause");
	return 0;
}
```

## 3.运算符

**作用：**英语执行代码的运算

| 运算符类型 | 作用                                   |
| ---------- | -------------------------------------- |
| 算术预算符 | 用于处理四则运算                       |
| 赋值运算符 | 用于将表达式的值赋给变量               |
| 比较运算符 | 用于表达式的比较，并返回一个真值或假值 |
| 逻辑运算符 | 用于根据表达式的值返回真值或假值       |

### 3.1算术运算符

作用：用于处理四则运算

| 运算符 | 术语         | 示例            | 结果          |
| ------ | ------------ | --------------- | ------------- |
| +      | 正号         | +3              | +3            |
| -      | 负号         | -3              | -3            |
| +      | 加           | 10 + 5          | 15            |
| -      | 减           | 10 - 5          | 5             |
| *      | 乘           | 10 * 5          | 50            |
| /      | 除           | 10 / 5          | 2             |
| %      | 取模（取余） | 10 % 5          | 0             |
| ++     | 前置递增     | a = 2; b = ++a; | a = 3, b = 3; |
| ++     | 后置递增     | a = 2; b = a++; | a = 3, b = 2; |
| --     | 前置递减     | a = 2; b = --a; | a = 1, b = 1; |
| --     | 后置递减     | a = 2; b = a--; | a = 1, b = 2; |



```c++
#include <iostream>
using namespace std;
int main() {
	int a1 = 10, a2 = 2;//整数
	cout << a1 + a2 << endl;
	cout << a1 - a2 << endl;
	cout << a1 * a2 << endl;
	cout << a1 / a2 << endl;
	double a3 = 0.2, a4 = 0.45;//小数
	cout << a4 / a3 << endl;
	cout << a1 % a2 << endl;
	//cout << a4 % a3 << endl;两个小数不可以
	system("pause");
	return 0;
}
```



### 3.2赋值运算符

作用：用于将表达式的值赋值给变量

| 运算符 | 术语   | 示例           | 结果         |
| ------ | ------ | -------------- | ------------ |
| =      | 赋值   | a = 2; b = 3;  | a = 2, b = 3 |
| +=     | 加等于 | a = 0, a += 2; | a = 2        |
| -=     | 减等于 | a = 5; a -= 2; | a = 3        |
| *=     | 乘等于 | a = 2; a *= 2; | a = 4        |
| /=     | 除等于 | a = 2; a /= 2; | a = 1        |
| %=     | 模等于 | a = 3; a %= 2; | a = 1        |



```c++
#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 2;
	a += b;
	cout << a << endl;
	a -= b;
	cout << a << endl;
	a *= b;
	cout << a << endl;
	a /= b;
	cout << a << endl;
	a %= b;
	cout << a << endl;
	system("pause");
	return 0;
}
```

### 3.3比较运算

作用:用于比较式的比较，并返回一个真值或假值

| 运算符 | 术语     | 示例   | 结果 |
| ------ | -------- | ------ | ---- |
| ==     | 相等于   | 4 == 3 | 0    |
| !=     | 不等于   | 4 != 3 | 1    |
| <      | 小于     | 4 < 3  | 0    |
| >      | 大于     | 4 > 3  | 1    |
| <=     | 小于等于 | 4 <= 3 | 0    |
| >=     | 大于等于 | 4 >= 3 | 1    |

```c++
#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 2;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	system("pause");
	return 0;
}
```

### 3.4逻辑运算符

作用：用于根据表达式的值返回真值或假值

| 运算符 | 术语 | 示例     |
| ------ | ---- | -------- |
| ！     | 非   | !a       |
| &&     | 与   | a && b   |
| \|\|   | 或   | a \|\| b |

```c++
#include <iostream>
using namespace std;
int main() {
	int a = 10, b = 0;
	cout << !b << endl;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	system("pause");
	return 0;
}
```

## 4.程序流程结构

C/C++支持最基础的三种程序运行结构：==顺序结构、选择结构、循环结构==

顺序结构：程序按顺序执行，不发生跳转

选择结构：依据条件是否满足，执行相应功能

循环结构：依据条件是否满足，循环多次执行某段代码

### 4.1选择结构

**1.if 语句**

```c++
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << "a > b" << endl;
	}
	else if (a < b) {
		cout << "a < b" << endl;
	} else {
		cout << "a = b" << endl;
	}
	system("pause");
	return 0;
}
```

**2.三目运算符**

```c++
int a = 10, b = 20, c = 0;
c = (a > b) ? a : b;
//在c++中三目运算符返回的是变量，可以继续赋值
((a > b) ? a : b) = 100;
cout << a << " " << b << endl;
a = 10, b = 100;
```

**3.switch语句**

```c++
switch (表达式) {
	case 结果1: 执行语句; break;
	case 结果2: 执行语句; break;
	case 结果3: 执行语句; break;
    ...
    default: 执行语句; break;
}
```



### 4.2循环结构

作用：满足循环条件，执行循环语句

语法：`while( 循环条件) {}`

​			`for(; ;) {}`

​			`do {} while(循环条件);`

```c++
#include <iostream>
using namespace std;
int main() {
	//1.while
	int i = 0, j = 10;
	while (i < 10) {
		cout << i << " ";
		i++;
	}
	cout << endl;
	//2.for
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << endl;
	//3.do - while 
	do {
		cout << j << " ";
		j++;
	} while (j < 10);
	system("pause");
	return 0;
}
```



### 4.3跳转结构

作用：用于跳转==选择结构==或者==循环结构==

break： 跳出循环

continue:  跳出此次循环

goto ：

语法： `goto 标记;`

```c++
#include <iostream>
using namespace std;
int main() {
	cout << "1" << endl;
	goto flag;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	flag:
	cout << "5" << endl;
	system("pause");
	return 0;
}
```



## 5.数组

### 5.1数组概述

所谓数组，就是一个集合，里面存放了相同的类型的数据结构

特点一：数组中每个元素都是相同的数据类型

特点二：数组是由连续的内存位置组成的

### 5.2一维数组

**定义：**

1.数据类型   数组名[数组长度]；

2.数据类型   数组名[数组长度] =  {值1， 值2，......};

3.数据类型   数组名[] =  {值1， 值2，......};

**一维数名称的用途：**

1.可以统计整个数组在内存中的长度

2.可以获取数组在内存中的首地址

```c++
#include <iostream>
using namespace std;
int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	//1.通过sizeof查看数组
	cout << "sizeof(arr[0]) = " << sizeof(arr[0]) << endl;
	cout << "sizeof(arr) = " << sizeof(arr) << endl;
	cout << "数组元素大小 =" << sizeof(arr) / sizeof(arr[0])<< endl;
	//2.通过数组名查看数组首地址，数组名是常量不可以赋值
	cout << "数组首地址为：" << (int)arr << "、" << arr << endl;
	cout << "数组第一个元素的地址为：" << (int)&arr[0] << "、" << &arr[0] << endl;
	cout << "数组第二个元素的地址为：" << (int)&arr[1] << "、" << &arr[1] << endl;
	system("pause");
	return 0;
}
```

**冒泡排序**

```c++
#include <iostream>
using namespace std;
int main() {
	int arr[10] = { 1, 4, 3, 5, 7, 2, 6, 8, 9, 10 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
 }
```



### 5.3二维数组

1.数据类型 数组名\[行数][列数];

2.数据类型 数组名\[行数][列数] = {数据1， 数据2， 数据3， 数据4};

3.数据类型 数组名\[   ][列数] = {数据1， 数据2， 数据3， 数据4};

**二维数组的数组名称**：

查看二维数组所占内存空间

获取二维数组首地址

```c++
#include <iostream>
using namespace std;
int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	cout << "二维数组的所占空间：" << sizeof(arr) << endl;
	cout << "二维数组行的所占空间：" << sizeof(arr[0]) << endl;
	cout << "二维数组的首地址" << arr << endl;
	system("pause");
	return 0;
}
```



## 6.函数

### 6.1概述

作用：将一段经常使用的代码封装起来，减少重复代码

一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。

### 6.2函数的定义

函数的定义一般主要5个步骤

1.返回值类型

2.函数名

3.参数列表

4.函数体语句

5.return 表达式

### 6.3函数的调用

```c++
#include <iostream>
using namespace std;

int add(int a, int b) {
	int sum = a + b;
	return sum;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << endl;
	system("pause");
	return 0;
}
```

### 6.4值传递

所谓值传递，就是函数调用时实参将数值传给形参

值传递时，如果形参发生改变，并不会影响实参

```c++
#include <iostream>
using namespace std;

void swap(int num1, int num2) {
	cout << "交换前：" << endl;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
	return ;
}

int main() {
	int a, b;
	cin >> a >> b;
	swap(a, b);
	cout << "a = " << a << " ";
	cout << "b = " << b;
	system("pause");
	return 0;
}
```



### 6.5函数的常见样式

常见的函数样式有四种：

1.有参无返

2.有参无返

3.无参有返

4.有参有返

### 6.6函数的声明

作用:告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。

函数的声明可以多次，但函数的定义只能有一次。

```c++
#include <iostream>
using namespace std;

int Max(int, int);
int Max(int a, int b);

int main() {
	int a, b;
	cin >> a >> b;
	cout << Max(a, b) << endl;
	system("pause");
	return 0;
}

int Max(int a, int b) {
	return a > b ? a : b;
}
```



### 6.7函数的分文件编写

作用：让代码结构更加清晰

函数分文件编写一般有四个步骤：

1.创建后缀名为.h的头文件

2.创建后缀名为.cpp的源文件

3.在头文件中写函数的声明

4.在源文件中写函数的定义

```c++
//.cpp文件
#include "swap.h"

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return ;
}
```

```c++
//.h文件
#include <iostream>
using namespace std;
//函数声明
void swap(int, int);

```

```c++
//main函数文件
#include <iostream>
#include "swap.h"
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	swap(a, b);
	system("pause");
	return 0;
}
```



## 7.指针

### 7.1指针的基本概念

**指针的作用**：可以通过指针间接访问内存

内存编号是从0开始记录的，一般用16进制表示。

可以利用指针变量保存地址

### 7.2指针变量的定义和使用

```c++
#include <iostream>
using namespace std;

int main() {
	//1.定义指针
	int a = 10;
	int *p;
	p = &a;
	cout << "a 的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	//2.使用指针,取值与取址
	cout << "p指向地址的值为多少：" << *p << endl;
	cout << "p的值为多少：" << &p << endl;

	system("pause");
	return 0;
}
```



### 7.3指针所占内存空间

在32位操作系统下，指针是占用4个字节空间大小，无论什么类型。

在63位操作系统下，指针是占用8个字节空间大小，无论什么类型。

```c++
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int *p = &a;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(p) = " << sizeof(int *) << endl;
	cout << "sizeof(p) = " << sizeof(char *) << endl;
	cout << "sizeof(p) = " << sizeof(double *) << endl;
    cout << "sizeof(p) = " << sizeof(long *) << endl;
	system("pause");
	return 0;
}
```

### 7.4空指针和野指针

**空指针**：指针变量指向内存中编号为0的空间

**用途**：初始化指针变量

**注意**：空指针指向的内存是不可以访问的。

**示例一：**

```c++
#include <iostream>
using namespace std;

int main() {
	int *p = NULL;
	//用于初始化
	*p = 100;
	//0-255之间的编号是系统占用内存， 不允许用户访问
	system("pause");
	return 0;
}
```

**野指针：**指针变量指向非法的内存空间

**示例二：**野指针

```c++
int main() {
	int *p = (int *)0x1100;
    cout << p << endl;
	cout << *p << endl; //访问野指针报错
}
```

总结：空指针和野指针都不是我们申请的空间，因此不要访问。

### 7.5const修饰指针

const 修饰指针 ——常量指针， 特点：不可以修改指针的值，但可以修改指针的指向。

const 修饰常量 —— 指针常量，特点：指针的指向不可以修改，但指针指向的值可以修改。

const即修饰指针，又修饰常量，特点：指针的指向和指针指向的值都不可以修改。

```c++
#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	const int *p = &a; //常量指针
	*p = b;//错误
	p = &b;//正确
	int * const p1 = &a; //指针常量
	*p1 = b; //正确
	p1 = &b; //错误
	const int * const p3 = &a;
	*p3 = b; //错误
	p3 = &b; //错误
	system("pause");
	return 0;
}
```



### 7.6指针和数组

作用：利用指针访问数组中元素

```c++
#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = arr; //arr就是数组的首地址
	cout << "利用指针访问第一个元素:" << *p << endl;
	p++; //让指针向后偏移四个字节
	cout << "利用指针访问第一个元素:" << *p << endl;
	int *p2 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *p2 << endl;
		p2++;
	}
	system("pause");
	return 0;
}
```



### 7.7指针和函数

```c++
#include <iostream>
using namespace std;

void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	//指针和函数
	//1.值传递
	int a = 10, b = 20;
	swap01(a, b);
	cout << "a = " << a << " , " << "a =  " << b << endl;
	//2.地址传递
	swap02(&a, &b);
	cout << "a = " << a << " , " << "a =  " << b << endl;
	system("pause");
	return 0;
}
```



### 7.8指针、数组、函数

```c++
#include <iostream>
using namespace std;

void bubblesort(int *p, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (p[j] > p[j + 1]) {
				swap(p[j], p[j + 1]);
			}
		}
	}
	return ;
}

int main() {
	int arr[10] = { 3, 5, 2, 8, 9, 10, 1, 4, 7, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubblesort(arr, n);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
```



## 8.结构体

### 8.1结构体基本概念

结构体属于用户自定义的数据类型，允许用户存储不同的数据类型

### 8.2结构体定义和使用

语法：`struct 结构体名 { 结构体成员列表 }`

通过结构体创建变量的方式有三种：

1.struct 结构体名 变量名

2.struct 结构体名 变量名 = { 成员值1， 成员值2...}

3.定义结构体是顺便创建变量

```c++
#include <iostream>
using namespace std;

//1.创建学生数据类型：学生包括（姓名， 年龄，分数）
//struct 结构体名 { 结构体成员列表 }
struct Student
{
	string name;
	int age;
	int score;
} s3;
//2.通过学生类型创建具体学生
// 2.1 struct Student s1;
// 2.2 struct Student s2 = {...};
// 2.3 在定义结构体是顺便创建结构体变量
int main() {
	
	struct Student s1;
	s1.name = "李四"; s1.age = 17; s1.score = 99;
	
	struct Student s2 = {"张三", 18, 90};

	s3.name = "王五"; s3.age = 23; s3.score = 100;
	
	system("pause");
	return 0;
}
```

总结1: 定义结构体是关键字是struct， 不可以省略

总结2：创建结构体变量时，关键字struct可以省略

总结3：结构体变量利用操作符“ . ”访问成员

### 8.3结构体数组

作用：将自定义的结构体放入到数组中方便维护

语法：`struct 结构体名 数组名[元素个数] = { {}, {}, {}...};`

```c++
#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
} ;

int main() {

	struct Student stu[3] = {
		{"李四", 18, 20},
		{"张三", 19, 30},
		{"王五", 20, 40}
	};
	
	for (int i = 0; i < 3; i++) {
		cout << stu[i].age << " " << stu[i].score << " " << stu[i].name << endl;
	}
	system("pause");
	return 0;
}
```

### 8.4结构体指针

```c++
#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

int main() {
	//1.创建学生结构体变量
	struct Student s = { "张三", 18, 100 };
	//2.通过指针指向结构体变量
	Student *p = &s;
	//3.通过指针访问结构体变量中的数据
	cout << p->age << " " << p->name << " " << p->score << endl;
	system("pause");
	return 0;
}
```



### 8.5结构体嵌套结构体

作用：结构体中的成员可以是另一个结构体

例如:每个老师辅导一个学生，一个老师的结构体中，记录一个学生的结构体

```c++
#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	string name;
	int age;
	int id;
	struct student stu;
};

int main() {
	teacher t;
	t.id = 1000;
	t.age = 50;
	t.stu.age = 20;
	t.stu.score = 100;
	system("pause");
	return 0;
}
```



### 8.6结构体做函数参数

作用：将结构体作为参数向函数中传递

传递方式：值传递、地址传递

```c++
#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};
//值传递
void printfstu(student s) {
	cout << s.age << " " << s.name << " " << s.score << endl;
}
//地址传递
void printfstu2(student *s) {
	s->age = 100; s->score = 200;
	cout << s->age << " " << s->name << " " << s->score << endl;
}

int main() {
	student t;
	t.name = "张三";
	t.age = 50;
	t.score = 100;
	printfstu(t);
	printfstu2(&t);
	cout << t.name << " " << t.age << " " << t.score << endl;
	system("pause");
	return 0;
}
```



### 8.7结构体中const做函数参数

作用：用const来防止误操作

示例：

```c++
#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int age;
	int score;
};
//值传递
void printfstu(student s) {
	cout << s.age << " " << s.name << " " << s.score << endl;
}
//将函数中的形参改为指针，可以减少内存空间
void printfstu2(const student *s) {
	//s->age = 100; s->score = 200; 不可以修改
	cout <<"① " <<  s->age << " " << s->name << " " << s->score << endl;
}

void printfstu3(student * const s) {
	s->age = 100; s->score = 200; //可以修改
	cout << "② " << s->age << " " << s->name << " " << s->score << endl;
}

int main() {
	student t;
	t.name = "张三";
	t.age = 50;
	t.score = 100;
	printfstu(t);
	printfstu2(&t);
	printfstu3(&t);
	cout << t.name << " " << t.age << " " << t.score << endl;
	system("pause");
	return 0;
}
```



### 8.8结构体案例

案例描述：

学校正在做毕业设计，每名老师带领五名学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放五名学生的数组作为成员

学生的成员有姓名、考试分数、创建数组存放三名老师，通过函数给每个老师及所带学生赋值

最终打印出老师数据以及老师所带学生数据。

```c++
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	struct student stu[5];
} tea[3];

void scanftea(teacher *t, int len) {
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++) {
		t[i].name = "teacher_";
		t[i].name += nameseed[i];
		for (int j = 0; j < 5; j++) {
			t[i].stu[j].name = "student_";
			t[i].stu[j].name += nameseed[i];
			
			int score = rand() % 100 + 1;
			t[i].stu[j].score = score;
		}
	}
}

void printtea(teacher *t, int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师姓名：" << t[i].name << endl;
		cout << t[i].name  <<" 老师的学生：" << endl;
		for (int j = 0; j < 5; j++) {
			cout << "姓名： " << t[i].stu[j].name << " , 分数：" << t[i].stu[j].score << endl;
		}
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));
	srand(time(0));
	int len = sizeof(tea) / sizeof(tea[0]);
	scanftea(tea, len);
	printtea(tea, len);
	system("pause");
	return 0;
}
```

**案例描述：**

设计一个英雄的结构体，包括成员姓名、年级、性别；创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果、

```c++
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Man
{
	string name;
	int age;
	string sex;
};

void mansort(Man *p, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (p[j].age > p[j + 1].age) {
				Man temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

void printfman(Man *man, int len) {
	for (int i = 0; i < len; i++) {
		cout << "姓名： " << man[i].name << ", 年龄： " << man[i].age << ", 性别： " << man[i].sex << endl;
	}
}

int main() {
	Man man[5] = {  { "刘备", 23, "男" },
					{ "关羽", 22, "男" },
					{ "张飞", 20, "男" },
					{ "赵云", 21, "男" },
					{ "貂蝉", 19, "女"} };

	int len = sizeof(man) / sizeof(man[0]);
	mansort(man, len);
	printfman(man, len);
	system("pause");
	return 0;
}
```

# 通讯录管理系统

## 1.系统需求

通讯录是一个可以记录亲人、好友信息的工具

本教程主要利用c++来实现一个通讯录管理系统

系统中需要实现的功能如下：

1.添加联系人：向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址)最多纪录1000人

2.显示联系人：显示通讯录中所有联系人的信息

3.删除联系人：按照姓名进行删除指定联系人

4.查找联系人：按照姓名查看指定联系人信息

5.修改联系人：按照姓名重新修改指定联系人

6.清空联系人：清空通讯录中所有信息

7.退出通讯录：退出当前使用的通讯录

## 2.创建项目

新建项目

## 3.菜单功能

功能描述：用户选择功能的界面

步骤：封装函数显示该界面， 如`void showMenu()`

在main函数中调用封装好的函数

```c++
void showMenu() {
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
	return;
}
```



## 4.退出功能

功能描述：退出通讯录系统

思路：根据用户的不同选择，进入不同的功能，可以选择switch分支结构。将整个构架进行搭建

当用户选择0时，执行退出，选择其他先不做操作，也会退出程序。

## 5.添加联系人

功能实现：实现添加联系人功能，联系人上限为1000人，联系人信息包括(姓名、年龄、联系电话、家庭住址)

添加联系人实现步骤：

1、设计联系人结构体

2、设计通讯录结构体

3、main函数中创建通讯录

4、封装添加联系人函数

5、测试添加联系人函数

```c++
void addPerson(Addressbooks *abs) {
	if (abs->m_size == MAX_N) {
		cout << "通讯录已满,无法添加！";
		return;
	}
	else {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].name = name;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[abs->m_size].m_Age;
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[abs->m_size].m_adder;
		abs->m_size++;
		cout << "添加成功！" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
	return;
}
```



## 6.显示联系人

功能描述：显示通讯录中已有的联系人信息

显示联系人实现步骤：

封装显示联系人函数

测试显示联系人功能

```c++
void showperson(Addressbooks *abs) {
	if (abs->m_size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "姓名：" << abs->personArray[i].name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age<< "\t";
			cout << "电话：" << abs->personArray[i].m_phone<< "\t";
			cout << "住址：" << abs->personArray[i].m_adder << endl;
		}
		cout << "信息显示完成！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}
```



## 7.删除联系人

功能描述：按照姓名进行删除指定联系人

删除联系人实现步骤：

1.封装检测联系人是否存在

2.封装删除联系人函数

3.测试删除联系人功能

```c++
int isExist(Addressbooks *abs, string name) {
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].name == name) {
			return i;
		}
	}
	return -1;
}

void selectperson(Addressbooks *abs) {
	string name;
	cout << "请输入删除的联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1){
		cout << "查无此人！" << endl;
	}
	else {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}
```



## 8.查找联系人

功能描述：按照姓名查看指定联系人信息

查找联系人实现步骤：

1.封装查找联系人函数

2.测试查找指定联系人

```c++
void findperson(Addressbooks *abs) {
	string name;
	cout << "请输入要查找的联系人：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名：" << abs->personArray[ret].name << "\t" << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t"
			<< "年龄：" << abs->personArray[ret].m_Age << "\t" << "电话：" << abs->personArray[ret].m_phone << "\t"
			<< "地址：" << abs->personArray[ret].m_adder << endl;
	}
	else {
		cout << "未找到此人!" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}
```



## 9.修改联系人

功能描述：按照姓名重新修改指定联系人

修改联系人实现步骤：

1.封装修改联系人功能

2.测试修改联系人功能

```c++
void modifyperson(Addressbooks *abs) {
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name1;
		cout << "请输入姓名：" << endl;
		cin >> name1;
		abs->personArray[ret].name = name1;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[ret].m_Age;
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[ret].m_phone;
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[ret].m_adder;
		cout << "修改成功！" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}
```



## 10.清空联系人

功能实现：清空通讯录中所有信息

清空联系人实现步骤：

1.封装清空联系人函数

2.测试清空联系人

```c++
#include <iostream>
#include <string>
using namespace std;
#define MAX_N 1000

void showMenu() {
	cout << "**************************" << endl;
	cout << "*****  1.添加联系人  *****" << endl;
	cout << "*****  2.显示联系人  *****" << endl;
	cout << "*****  3.删除联系人  *****" << endl;
	cout << "*****  4.查找联系人  *****" << endl;
	cout << "*****  5.修改联系人  *****" << endl;
	cout << "*****  6.清空联系人  *****" << endl;
	cout << "*****  0.退出通讯录  *****" << endl;
	cout << "**************************" << endl;
	return;
}
//联系人结构体
struct person
{
	string name;
	int m_Sex; //性别：1男 2女
	int m_Age;
	string m_phone;
	string m_adder;
};
//通讯录结构体
struct Addressbooks
{
	struct person personArray[MAX_N];
	int m_size;
};

void addPerson(Addressbooks *abs) {
	if (abs->m_size == MAX_N) {
		cout << "通讯录已满,无法添加！";
		return;
	}
	else {
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].name = name;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[abs->m_size].m_Age;
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[abs->m_size].m_phone;
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[abs->m_size].m_adder;
		abs->m_size++;
		cout << "添加成功！" << endl;
		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
	return;
}

void showperson(Addressbooks *abs) {
	if (abs->m_size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "姓名：" << abs->personArray[i].name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age<< "\t";
			cout << "电话：" << abs->personArray[i].m_phone<< "\t";
			cout << "住址：" << abs->personArray[i].m_adder << endl;
		}
		cout << "信息显示完成！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

int isExist(Addressbooks *abs, string name) {
	for (int i = 0; i < abs->m_size; i++) {
		if (abs->personArray[i].name == name) {
			return i;
		}
	}
	return -1;
}

void selectperson(Addressbooks *abs) {
	string name;
	cout << "请输入删除的联系人姓名：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1){
		cout << "查无此人！" << endl;
	}
	else {
		for (int i = ret; i < abs->m_size; i++) {
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

void findperson(Addressbooks *abs) {
	string name;
	cout << "请输入要查找的联系人：" << endl;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		cout << "姓名：" << abs->personArray[ret].name << "\t" << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t"
			<< "年龄：" << abs->personArray[ret].m_Age << "\t" << "电话：" << abs->personArray[ret].m_phone << "\t"
			<< "地址：" << abs->personArray[ret].m_adder << endl;
	}
	else {
		cout << "未找到此人!" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

void modifyperson(Addressbooks *abs) {
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) {
		string name1;
		cout << "请输入姓名：" << endl;
		cin >> name1;
		abs->personArray[ret].name = name1;
		cout << "请输入性别：" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		int sex = 0;
		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> abs->personArray[ret].m_Age;
		cout << "请输入联系电话：" << endl;
		cin >> abs->personArray[ret].m_phone;
		cout << "请输入家庭住址：" << endl;
		cin >> abs->personArray[ret].m_adder;
		cout << "修改成功！" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

void clearperson(Addressbooks *abs) {
	abs->m_size = 0;
	cout << "通讯录已经清空" << endl;
	system("pause");//请按任意键继续
	system("cls");//清屏操作
	return;
}

int main() {
	int select = 0;
	Addressbooks abs;
	abs.m_size = 0;
	while (true) {
		showMenu();
		cin >> select;
		switch (select) {
		case 1: {
			addPerson(&abs);
		} break;
		case 2: {
			showperson(&abs);
		} break;
		case 3: {
			selectperson(&abs);
		} break;
		case 4: {
			findperson(&abs);
		} break;
		case 5: {
			modifyperson(&abs);
		} break;
		case 6: {
			clearperson(&abs);
		} break;
		case 0: {
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
		} break;
		default: {
			cout << "输入有误请重新输入：" << endl;
		} break;
		}
	}
	system("pause");
	return 0;
}
```



# C++核心编程

本阶段只要针对C++==面向对象==编程技术做详细说明，探讨C++中的核心和精髓

## 1.内存分区模型

C++程序在执行时，将内存大方向划分为四个区域

1.代码区：存放函数体的二进制代码，由操作系统进行管理

2.全局区：存放全局变量和静态变量以及常量

3.栈区：由编译器自动分配释放，存放函数的参数值，局部变量等

4.堆区：有程序员分派和释放，若程序员不释放程序结束时有操作系统回收



**内存四区意义：**

不同区域存放的数据，赋予不同的声明周期，给我们更大的灵活编程。



### 1.1程序运行前

在程序编译后，生成exe可执行程序，**未执行该程序前**分为两个区域

**代码区：**

​			存放CPU执行的机器执行

​			代码区是**共享**的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可

​			代码区是**只读**的，便其只读的原因是防止程序意外被修改了它的命令

**全局区：**

​			全局变量和静态变量存放在此

​			全局区还包括常量区，字符串常量和其他常量也存放在此（其他常量：const修饰的常量）

​			==该区域的数据在程序结束后由操作系统释放==

[![yaE6kn.png](https://s3.ax1x.com/2021/02/08/yaE6kn.png)](https://imgchr.com/i/yaE6kn)

```c++
#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//const修饰的全局常量
const int g_c = 10;
const int g_d = 10;
int main() {
	//全局区：全局变量、静态变量、常量

	//创建普通局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;
	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址：" << (int)&g_b << endl;

	//静态变量 在普通变量前面加上static,属于静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址：" << (int)&s_b << endl;

	//常量：字符串常量、const修饰的变量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;

	//const修饰的变量：①const修饰的全局变量  ②const修饰的局部变量
	cout << "全局常量g_c的地址为：" << (int)&g_c << endl;
	cout << "全局常量g_d的地址为：" << (int)&g_d << endl;
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;
	system("pause");
	return 0;
}
```



[![yaVF9P.png](https://s3.ax1x.com/2021/02/08/yaVF9P.png)](https://imgchr.com/i/yaVF9P)

### 1.2程序运行后

**栈区：**

​		有编译器自动分配释放，存放函数的参数值，局部变量等

​		注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

```c++
#include <iostream>
using namespace std;
//栈区数据注意事项——不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int *func(int b) { //形参数据也会放在栈区
	int b = 100;
	int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;//返回局部变量的地址
}

int main() {
	//接受func的函数返回值
	int *p = func(10);
	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
	cout << *p << endl;//乱码
	system("pause");
	return 0;
}
```

**堆区：**

​		有程序员分配释放，若程序员不释放，程序结束时由操作系统释放

​		在c++中主要利用new在堆区开辟空间

```c++
#include <iostream>
using namespace std;

int *func() {
	//利用new关键字  可以将数据开辟到堆区
	//指针 本质上也是局部变量，放在栈区，指针保存的数据是放在堆区
	int *p = new int(10);
	cout << (int)&p << endl;
	return p;
}

int main() {
	//在堆区开辟数据
	int *p1 = func();
	cout << *p1 << endl;
	cout << *p1 << endl; 
	cout << (int)&p1 << endl;
	system("pause");
	return 0;
}
```

[![yaePQf.png](https://s3.ax1x.com/2021/02/08/yaePQf.png)](https://imgchr.com/i/yaePQf)

### 1.3new操作符

C++中利用==new==操作符在堆区开辟数据

堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符==delete==

语法：`new 数据类型`

利用new创建的数据，会返回数据对应的类型的指针

```c++
#include <iostream>
using namespace std;
//1.new的基本语法
int *func() {
	//在堆区创建整型数据
	//new返回是，改数据类型的指针
	int *p = new int(10);
	return p;
}

void test01() {
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;//堆区的数据有程序员管理开辟，程序员管理释放
	//如果想释放堆区的数据，利用关键字delete
	delete p;
	cout << *p << endl;
}

//2.在堆区利用new开辟数组
void test02() {
	//创建10个整型数据的数组，在堆区
	int *arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	//释放堆区数组
	//释放数组的时候, 要加[]才可以
	delete[] arr;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```



## 2.引用

### 2.1引用的基本使用

**作用：**给变量起别名

**语法：**`数据类型 &别名 = 原名`

```c++
#include <iostream>
using namespace std;
int main() {
	//引用基本语法
	//数据类型 &别名 = 原名
	int a = 10;
	int &b = a;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a 的地址为：" << &a << endl;
	cout << "b 的地址为：" << &b << endl;
	//必须初始化，初始化后不可以更改
	//int &c; 错误
	int c = 30;
	b = c; //赋值操作，而不是更改引用
	system("pause");
	return 0;
}
```



### 2.2引用的注意事项

**注意**：①引用必须初始化

​			②一旦初始化，就不可以更改

### 2.3引用做函数参数

**作用：**函数传参时，可以利用引用的技术让形参修饰实参

**优点：**可以简化指针修改实参

```c++
#include <iostream>
using namespace std;

//1.值传递
void myswap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}
//2.地址传递
void myswap02(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

//3.引用传递
void myswap03(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	return;
}

int main() {
	int a = 10, b = 20;
	myswap01(a, b);
	cout << "myswap01:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	myswap02(&a, &b);
	cout << "myswap02:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	myswap03(a, b);
	cout << "myswap03:" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
```

总结：通过引用参数产生的效果同按地址传递是一样的。   

**作用：**引用是可以作为函数的返回值存在的

**注意：不要返回局部变量引用**

**用法：**函数调用作为左值

```c++
#include <iostream>
using namespace std;

//引用做函数的返回值
//1.不要返回局部变量的引用

int& test01() {
	int a = 10; //局部变量存在四区中的 栈区
	return a;
}

//2.函数调用作为左值
int& test02() {
	static int a = 10; //静态变量，存放在全局区，全局区数据由系统释放
	return a;
}
int main() {
	int &ref = test01();
	cout << "ref = " << ref << endl;//第一次结果正确，是因为编译器做了保存
	cout << "ref = " << ref << endl;//第二次结果错误，因为a的内存已经释放
	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	test02() = 1000; //如果函数的返回值是引用，可以作为左值，ref2是函数test02的一个引用，所以修改函数，ref2也被修改
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	system("pause");
	return 0;
}
```



### 2.5引用的本质

本质：引用的本质在c++内部实现是一个指针常量

```c++
#include <iostream>
using namespace std;

//发现是引用，转换为int *const ref = &a;
void func(int &ref) {
	ref = 100; //ref是引用，转换为*ref = 100
}
int main() {
	int a = 10;
	//自动转换为 int *const ref = &a; 指针常量，指针的指向不可以更改，也说明为什么引用不可以更改
	int &ref = a;
	ref = 20;
	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;
	system("pause");
	return 0;
}
```



### 2.6常量引用

**作用：**常量引用主要用来修饰形参，防止误操作

在函数形参列表中，可以加const修饰形参，防止形参改变实参

```c++
#include <iostream>
using namespace std;

//打印数据函数
void showvalue(const int &val) {
	//val = 1000;
	cout << "val = " << val << endl;
}

int main() {
	//常量引用
	//使用场景：用来修饰形参，防止误操作
	/*int a = 10;
	int &ref = 10; //必须引用一块合法的内存空间，10是字面量
	const int &ref1 = 10; //加上const之后，编译器将代码修改 int temp = 10; int &ref1 = temp;
	ref1 = 20;//加入const之后变为只读。不可以修改
	//const int *const ref1;*/

	int a = 100;
	showvalue(a);
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}
```



## 3.函数提高

### 3.1函数默认值参数

在C++中，函数的形参列表中的形参是可以有默认值的。

**语法**：`返回值类型 函数名 (参数 = 默认值) {}`

```c++
#include <iostream>
using namespace std;

int func(int a, int b = 20, int c = 30) {
	return a + b + c;
}
//函数默认参数,如果传入了数据，就用传入的，没传用默认的
int func2(int a, int b = 20, int c = 30) {
	return a + b + c;
}
//注意事项
//1.如果某个位置有了默认参数，那么从这个位置之后都要有默认参数
//2.如果函数声明有了默认参数，那么函数的实现就不能有默认参数
//声明和实现只能有一个默认参数
int func3(int a = 10, int b = 20);
int func3(int a, int b) {
	return a + b;
}
int main() {
	cout << func(10, 20, 30) << endl;
	cout << func2(10) << endl;
	cout << func3(30, 50) << endl;
	system("pause");
	return 0;
}
```



### 3.2函数占位参数

C++中函数形参列表中可以有占位参数，用来做占位，调整函数时必须填补该位置

**语法**：`返回值类型 函数名 (数据类型) {}`

```c++
#include <iostream>
using namespace std;
//占位参数
//目前阶段的占位参数，还用不到
void func(int a, int) {
	cout << "this is func" << endl;
}
//占位参数还可以有默认参数
void func2(int a, int = 10) {
	cout << "this id func2" << endl;
}
int main() {
	func(10, 10);
	func2(10);
	system("pause");
	return 0;
}
```



### 3.3函数重载

#### 3.3.1函数重载概述

**作用**：函数名可以相同，提高复用性

**函数重载满足条件**：

- 同一个作用域下

- 函数名相同

- 函数参数**类型不同** 或者 **个数不同** 或者**顺序不同**



**注意**：函数返回值不可以作为函数重载条件

```c++
#include <iostream>
using namespace std;

//函数重载
//可以让函数名相同， 提高复用性

//满足条件： 1.同一个作用域下 2.函数名称相同 3. 函数参数类型不同 或者 个数不同 或者 顺序不同
void func() {
	cout << "func的调用" << endl;
}
//个数不同
void func(int a) {
	cout << "func的调用!" << endl;
}

void func(double  a) {
	cout << "func的调用！!" << endl;
}

void func(int a, double  b) {
	cout << "func的调用！! !" << endl;
}

void func(double a, double  b) {
	cout << "func的调用！! ! !" << endl;
}

void func(double a, int b) {
	cout << "func的调用！! ! ! !" << endl;
}
//注意事项
//函数的返回值不可以作为函数重载的条件
int func(double a, int b) {
	cout << "func的调用！! ! ! !" << endl;
	return 0;
}
int main() {
	
	//func();
	//func(10);
	//func(10.0);
	func(1.2, 2.4);
	func(1.3, 4);
	system("pause");
	return 0;
}
```



#### 3.3.2函数重载注意事项

- 引用作为重载条件
- 函数重载碰到函数默认参数

```c++
#include <iostream>
using namespace std;

//函数重载的注意事项
//1.引用作为重载条件
void func(int &a) { //int &a = 10;错误操作
	cout << "func(int &a)调用" << endl;
}

void func(const int &a) {  //const int &a = 10;合法操作
	cout << "func(const int &a)调用" << endl;
}
//2.函数重载碰到默认参数
void func2(int a, int b = 10) {
	cout << "func2(int a) 的调用" << endl;
}

void func2(int a) {
	cout << "func2(int a) 的调用" << endl;
}

int main() {
	int a = 10;
	func(a);
	func(10);
	func2(10); //当函数重载碰到默认参数，出现二义性
	system("pause");
	return 0;
}
```



## 4.类与对象

C++面向对象的三大特性为：==封装、继承、多态==

C++认为==万事万物都皆为对象==，对象上其属性和行为

例如：

​		人可以作为对象，属性有姓名、年龄、身高、体重..., 行为有走、跑、跳、吃饭...

​		车也可以作为对象，属性有轮胎、方向盘、车灯...， 行为有载人、放音乐...

​		具有相同性质的==对象==，我们可以抽象称为==类==，人属于类，车属于车类

### 4.1封装

#### 4.1.1封装的意义

封装是C++面向对象三大特性之一

封装的意义：

- 将属性和行为作为一个整体，表现生活中的事物
- 将属性和行为加以权限控制

**封装的意义一：**

​	在设计类的时候，属性和行为写在一起，表现事物

语法：`class 类名{ 访问权限: 属性 / 行为 };`

**类中的属性和行为统一称为成员**

**属性 ：成员属性、成员变量**

**行为：成员函数、成员方法**

**示例一：设计一个圆类求圆的周长**

```c++
#include <iostream>
using namespace std;
const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆求周长的公式 ：2 * PI *半径
//class 代表设计一个类，类后面紧跟着的就是类名称
class cricle {
	//访问权限
	//公共权限
public:
	//属性：半径
	int m_r;
	//行为：h获取圆的周长
	double calculate() {
		return 2 * PI * m_r;
	}
};

int main() {
	//通过圆类 创建具体的圆（对象）
	//实例化 （通过一个类 创建一个对象的过程）
	cricle c1;
	//给圆对象的属性就行赋值
	c1.m_r = 10;
	cout << "圆的周长：" << c1.calculate() << endl;
	system("pause");
	return 0;
}
```

**示例二：设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号**

```c++
#include <iostream>
#include <string>
using namespace std;

class student {
public:
	string m_name;
	long long m_id;
	void print() {
		cout << "姓名：" << m_name << ", 学号： " << m_id << endl;
	}
	//给姓名赋值——通过行为给属性进行赋值
	void setname(string name) {
		m_name = name;
	}
	//给id赋值
	void setid(long long id) {
		m_id = id;
	}
};

int main() {
	student s1, s2;
	s1.m_name = "张三";
	s1.m_id = 18100140305;
	s1.print();
	s2.setname("李四");
	s2.setid(18100140109);
	s2.print();
	system("pause");
	return 0;
}
```

**封装意义二：**

类的设计时，可以把属性和行为放在不同的权限下，加以控制

访问权限有三种：

1.public   公共权限

2.protected  保护权限

3.private  私有权限

公共权限： 成员类内可以访问， 类外也可以访问

保护权限： 成员类内可以访问， 类外不可以访问 儿子也可以访问父亲的保护内容

私有权限： 成员类内可以访问， 类外不可以访问 儿子不可以访问父亲的私有内容

```c++
#include <iostream>
#include <string>
using namespace std;

//访问权限
//三种：
//公共权限： 成员类内可以访问， 类外也可以访问
//保护权限： 成员类内可以访问， 类外不可以访问 儿子也可以访问父亲的保护内容
//私有权限： 成员类内可以访问， 类外不可以访问 儿子不可以访问父亲的私有内容

class Person {
public:
	//公共权限
	string m_name;
protected:
	//保护权限
	string m_Car;
private:
	//私有权限
	int m_Password;
public:
	void func() {
		m_Car = "拖拉机";
		m_name = "张三";
		m_Password = 123456;
	}
};

int main() {
	Person p1;//实例化具体对象
	p1.m_name = "李四";
	p1.func();
	p1.m_Car = "奔驰"; //保护权限内容，在类外不可以访问
	system("pause");
	return 0;
}
```



#### 4.1.2struct和class区别

在c++中struct和class唯一的**区别**就在于 **默认的访问权限不同**

区别：

- struct默认权限为公共
- class  默认权限为私有

```c++
#include <iostream>
#include <string>
using namespace std;

class C1 {
	int m_A; //默认权限是私有
};

struct C2 {
	int m_A; //默认权限是公共
};
int main() {
	//struct 和 class 区别
	C1 c1;
	C2 c2;
	c1.m_A = 100; //错误：不可以访问
	c2.m_A = 100;
	system("pause");
	return 0;
}
```



#### 4.1.3成员属性设置为私有

**优点1：**将所有成员属性设置为私有，可以自己控制读写权限

**优点2：**对于写权限，我们可以检测数据的有效性

```c++
#include <iostream>
#include <string>
using namespace std;
//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以自己检测数据的有效性

class Person {

public:
	//写姓名
	void setName(string name) {
		m_name = name;
	}
	//获取姓名
	string getName() {
		return m_name;
	}
	//获取年龄
	int getage() {
		m_age = 10;
		return m_age;
	}
	//设置年龄   *设置有效性
	void setage(int age) {
		if (age < 0 || age > 150) {
			m_age = 0;
			cout << "你这个老妖精！" << endl;
			return;
		}
		m_age = age;
	}
	//设置情人
	void setlover(string name) {
		m_lover = name;
	}
private:
	//姓名  可读可写
	string m_name;
	//年龄  只读
	int m_age;
	//情人  只写
	string m_lover;
};
int main() {
	Person p1;
	p1.setName("张三");
	cout << "姓名为：" << p1.getName() << endl;
	cout << "年龄为：" << p1.getage() << endl;
	p1.setlover("captand");
	p1.setage(1000);
	system("pause");
	return 0;
}
```

**练习案例1：设计立方体类**

设计立方体类（Cube）

求出立方体面积和体积

分别用全局函数和成员函数判断两个立方体是否相等

```c++
#include <iostream>
#include <string>
using namespace std;

class Cube {
public:
	void setheight(int height) {
		m_height = height;
	}
	int getheight() {
		return m_height;
	}
	void setlength(int tail) {
		m_length = tail;
	}
	int getlength() {
		return m_length;
	}
	void setweight(int weight) {
		m_weight = weight;
	}
	int getweight() {
		return m_weight;
	}
	int getS() {
		return 2 * (m_height * m_length + m_height * m_weight + m_length * m_weight);
	}
	int getV() {
		return m_height * m_length * m_weight;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c) {
		if (m_height == c.getheight && m_length
			== c.getlength && m_weight == c.getweight) {
			return true;
		}
		return false;
	}

private:
	int m_height, m_length, m_weight;
};

// 利用全局函数判断 
bool isSame(Cube &c1, Cube &c2) {
	if (c1.getheight == c2.getheight && c1.getlength
		== c2.getlength && c1.getweight == c2.getweight) {
		return true;
	}
	return false;
}

int main() {
	Cube c1, c2;
	c1.setlength(10);
	c1.setweight(10);
	c1.setheight(10);
	cout << "c1的体积为：" << c1.getV() << endl;
	cout << "c1的面积为：" << c1.getS() << endl;
	c2.setlength(10);
	c2.setweight(10);
	c2.setheight(10);

	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "全局函数：c1与c2是相等的" << endl;
	}
	else {
		cout << "全局函数：c1与c2是相等的" << endl;
	}
	ret = c1.isSameByClass(c2); //成员函数判断
	if (ret) {
		cout << "成员函数: c1与c2是相等的" << endl;
	}
	else {
		cout << "成员函数: c1与c2是相等的" << endl;
	}
	system("pause");
	return 0;
}
```

**练习案例2：点和圆的关系**

设计一个圆形类（Circle），和一个点类（Point），计算点与圆的关系。

```c++
#include <iostream>
#include <string>
#include "circle.h"
#include "point.h"
using namespace std;

void isIncircle(circle &c, point &p) {
	int distance = (c.getcenter().getX() - p.getX()) * (c.getcenter().getX() - p.getX()) +
		(c.getcenter().getY() - p.getY()) * (c.getcenter().getY() - p.getY());
	int rdistance = c.getR() * c.getR();
	if (distance == rdistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance > rdistance) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
	return;
}

int main() {
	//创建圆
	circle c;
	point center;
	center.setX(10);
	center.setY(0);
	c.setcenter(center);
	//创建点
	point p;
	p.setX(10);
	p.setY(0);
	isIncircle(c, p);
	system("pause");
	return 0;
}
```

```c++
#pragma once
#include <iostream>
using namespace std;
class point {
public:
	//设置x
	void setX(int x);
	//获取x
	int getX();
	//设置y
	void setY(int y);
	//获取y
	int getY();
private:
	int m_X;
	int m_Y;
};
```

```c++
#include "point.h"

//设置x
void point::setX(int x) {
	m_X = x;
}
//获取x
int point::getX() {
	return m_X;
}
//设置y
void point::setY(int y) {
	m_Y = y;
}
//获取y
int point::getY() {
	return m_Y;
}
```

```c++
#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class circle {
public:
	void setR(int r);
	int getR();
	void setcenter(point center);
	point getcenter();
private:
	int m_r;
	point m_Center;
};
```

```c++
#include "circle.h"
#include "point.h"

void circle::setR(int r) {
	m_r = r;
}
int circle::getR() {
	return m_r;
}
void circle::setcenter(point center) {
	m_Center = center;
}
point circle::getcenter() {
	return m_Center;
}
```



### 4.2对象的初始化和清理

- 生活中我们买的电子厂品都会有出厂设置，在某一天我们不用得时候也会删除一些自己信息数据保证安全
- C++中的面向对象来源于生活，每个对象也都会有初始设置以及对象销毁前的清理数据的设置

#### 4.2.1构造函数和析构函数

对象的初始化和清理也是两个非常重要的安全问题

​		一个对象或者变量没有初始状态，对其使用后果是未知

​		同样的使用完一个对象或变量，没有及时青提，也会造成一定的安全问题

C++利用**构造函数**和**析构函数**解决上述问题，这两个函数将会被编译器自动调用，完成对象初始化和清理工作

对象的初始化和清理工作是编译器强制我们做的事情，因此如果我们**不提供构造和析构，编译器会提供**

**编译器提供的构造函数和析构函数是空实现**

- 构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数为编译器自动调用，无需手动调用
- 析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作。

**构造函数语法：**`类名() {}`

1.构造函数，没有返回值也不写void

2.函数名称与类名相同

3.构造函数可以有参数，因此可以发生重载

4.程序在调用对象时候会自动调用构造函数，无须手动调用，而且只会调用一次。

**析构函数语法：**`~类名 () {}`

1.析构函数，没有返回值也不写void

2.函数名称与类名相同，在名称前加上符号~

3.析构函数不可以有参数，因此不可以发生重载

4.程序在对象销毁前会自动调用析构函数，无须手动调用，而且只会调用一次。

```c++
#include <iostream>
using namespace std;
//对象的初始化和清理
//1.构造函数  进行初始化操作

class Person {
	//1.1构造函数
	//没有返回值，不用写void
	//函数名 与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
public:
	Person() {
		cout << "Person的构造函数的调用" << endl;
	}
	//析构函数 进行清理操作
	//没有返回值  不写void
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前 会自动调用析构函数 而且只调用一次
	~Person() {
		cout << "Person的析构函数的调用" << endl;
	}
};
//构造和析构都是必须有的实现，如果我们自己不提供，
void test01() {
	Person p; //在栈上的数据，test01执行完毕后，释放这个对象，编译器会提供一个空实现的构造和析构
}

int main() {
	test01();
	Person p;
	system("pause");
	return 0;
}
```



#### 4.2.2构造函数的分类及调用

**两种分类方式：**

​		按参数分为：有参构造和无参构造

​		按类型分为：普通构造和拷贝构造

**三种调用方式：**

​		括号法

​		显示法

​		隐式转换法

```c++
#include <iostream>
using namespace std;
//构造函数的分类及调用
//分类
//    按照参数分类： 无参构造和有参构造
//    按照类型分类： 普通构造和拷贝构造
class Person {
public:
	//构造函数
	Person() { //无参构造（默认构造）
		cout << "Person的构造函数调用" << endl;
	}
	Person(int a) { //有参构造
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		//将传入的人身上的所有属性，拷贝到我身上
		cout << "Person的拷贝构造函数调用" << endl;
		age = p.age;
	}
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};
//调用
void test01() {
	//1.括号法
	Person p1; //默认构造函数
	Person p2(10); //有参构造函数
	Person p3(p2);//拷贝构造函数
	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;
	//注意事项一：
	//调用默认构造函数时候，不要加()
	//因为下面这行代码，编译器会认为是一个函数的声明
	//Person p4();

	//2.显示法
	Person p4; //默认构造
	Person p5 = Person(10); //有参构造
	Person p6 = Person(p5); //拷贝构造
	Person(10); //匿名对象 特点：当前行执行结束后，系统会回收掉匿名对象
	//注意事项二：
	//不要利用拷贝函数 初始化匿名对象 编译器会认为是 Person(p3) == Person p3;
	Person(p3);
	//3.隐式转化法
	Person p7 = 10; //相当于 写了 Person p7 = Person(10); 有参构造
	Person p8 = p7; //拷贝构造
}

int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.2.3拷贝构造函数调用时机

C++中拷贝构造函数调用时机通常有三种情况

- 使用一个已经创建完毕的对象来初始化一个新对象
- 值传递的方式给函数参数传值
- 以值方式返回局部对象

```c++
#include <iostream>
using namespace std;
//拷贝构造函数调用时机
//1.用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数参数传值
//3.以值方式返回局部对象

class Person {
public:
	Person() {
		cout << "Person默认构造函数" << endl;
	}
	Person(int age) {
		m_age = age;
		cout << "Person有参构造函数" << endl;
	}
	Person(const Person &p) {
		m_age = p.m_age;
		cout << "Person拷贝构造函数" << endl;
	}
	~Person() {
		cout << "Person析构函数调用" << endl;
	}
	int m_age;
};

// 1.用一个已经创建完毕的对象来初始化一个新对象
void test01() {
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_age << endl;
}
//2.值传递的方式给函数参数传值
void dowork(Person p) {

}

void test02() {
	Person p;
	dowork(p);
}

//3.以值方式返回局部对象
Person dowork02() {
	Person p1;
	cout << (int *)&p1 << endl;
	return p1; //创建一个新对象
}
void test03() {
	Person p = dowork02();
	cout << (int *)&p << endl;
}

int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
```



#### 4.2.4构造函数调用规则

默认情况下，C++编译器至少给一个类添加3个函数

1.默认构造函数（无参，函数体为空）

2.默认析构函数（无参，函数体为空）

3.默认拷贝构造函数，对属性进行值拷贝



构造函数调用规则如下：

- 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造函数
- 如果用户定义拷贝构造函数，c++不会再提供其他构造函数

```c++
#include <iostream>
using namespace std;

//构造函数的调用规则
// 1.创建一个类 C++编译器提供三个函数
//默认构造 （空实现）
//析构函数 （空实现）
//拷贝构造函数 （值拷贝）

//2.如果我们写了有参构造函数，编译器就不在提供默认构造函数，依旧提供拷贝构造函数
//如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数
class Person {
public:
	//Person(){
	//	cout << "Person默认构造函数" << endl;
	//}
	/*Person(int age) {
		m_age = age;
		cout << "Person有参构造函数" << endl;
	}*/
	Person(const Person &p) {
		cout << "Person拷贝构造函数" << endl;
		m_age = p.m_age;
	}/*
	~Person() {
		cout << "Person默认析构函数" << endl;
	}*/
	int m_age;
};

/*void test01() {
	Person p;
	p.m_age = 18;
	Person p2(p);
	cout << "p2的年龄：" << p2.m_age << endl;
}*/

void test02() {
	Person p;
	Person p2(p);
	cout << "p2的年龄：" << p2.m_age << endl;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}
```



#### 4.2.5深拷贝与浅拷贝

深浅拷贝是面试经典问题，也是常见的一个坑

浅拷贝：简单的赋值拷贝操作

深拷贝：在堆区重新申请空间，进行拷贝操作



浅拷贝带来的问题就是堆区的内存重复释放

```c++
#include <iostream>
using namespace std;
//深拷贝与浅拷贝

class Person {
public:
	Person() {
		cout << "Person默认构造函数" << endl;
	}
	Person(int age, int height) {
		m_age = age;
		m_height = new int(height);
		cout << "Person有参构造函数" << endl;
	}
	~Person() {
		//析构代码，将堆区开辟的数据做释放操作
		if (m_height != NULL) {
			delete m_height;
			m_height = NULL;
		}
		cout << "Person析构构造函数" << endl;
	}
	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person(const Person &p) {
		cout << "Person拷贝构造函数调用" << endl;
		m_age = p.m_age;
		//m_height = p.m_height; 编译默认实现就是这行代码
		//深拷贝操作
		m_height = new int(*p.m_height);
		
	}
	int m_age;
	int *m_height;
};


void test01() {
	Person p1(18, 160);
	cout << "p1的年龄为：" << p1.m_age << "身高为:" << *p1.m_height << endl;
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_age << "身高为:" << *p2.m_height << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题。

#### 4.2.6初始化列表

作用：C++提供了初始化列表语法，用来初始化属性

语法：`构造函数():属性1(值1),属性2(值2)...{}`

```c++
#include <iostream>
using namespace std;
//初始化列表
class Person {
public:
	Person() {
		cout << "默认构造函数" << endl;
	}
	//传统初始化操作
	//Person(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}
	//初始化列表初始化属性
	Person(int a, int b, int c):m_A(a), m_B(b), m_C(c) {

	}
	int m_A;
	int m_B;
	int m_C;
	~Person() {

	}
};

void test01() {
	//Person p1;
	Person p1(10, 20, 30);
	cout << "m_A = " << p1.m_A << endl;
	cout << "m_B = " << p1.m_B << endl;
	cout << "m_C = " << p1.m_C << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.2.7类对象作为类成员

C++类中成员可以是另一个类的对象，我们称该成员为 **对象成员**

例如：

```c++
class A{};
class B{
	A a;
};
```

B类中有对象A作为成员，A为对象成员

那么当创建B对象时，A与B构造函数和析构函数顺序是谁先谁后？

当其他类对象作为本类成员，构时候先构造类对象，再构造自身，析构顺序与构造顺序相反

```c++
#include <iostream>
#include <string>
using namespace std;

//类对象作为类成员
//手机类
class Phone {
public:

	Phone(string pname) {
		cout << "Phone的构造函数调用" << endl;
		m_pname = pname;
	}
	~Phone() {
		cout << "Phone析构函数调用" << endl;
	}
	string m_pname; //手机品牌名称
};


//人类
class Person{

public:
	//Phone m_Phone = pName; 隐式转换
	Person(string name, string pName) :m_name(name), m_phone(pName) {
		cout << "Person的构造函数调用" << endl;
	}
	~Person(){
		cout << "Person析构函数调用" << endl;
	}
	//姓名
	string m_name;
	//手机
	Phone m_phone;
};

void test01() {
	Person p("张三", "苹果");
	cout << p.m_name << "拿着" << p.m_phone.m_pname << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.2.8静态成员

静态成员就是在成员变量和成员函数前加上关键字static,成为静态成员

静态成员分为：

- 静态成员变量
  + 所有对象共享同一份数据
  + 在编译阶段分配内存
  + 类内声明，类外初始化
- 静态成员函数
  + 所有对象共享同一个函数
  + 静态成员函数只能访问静态成员变量

```c++
#include <iostream>
#include <string>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员函数

class Person {
public:
	static void func() {
		m_A = 100; //静态成员函数可以访问静态的成员变量  不属于某一个对象， 共享的
		m_B = 100; //静态成员函数不可以访问非静态的成员变量 无法区分是是哪一个对象的m_B属性
		cout << "static void func函数调用" << endl;
	}
	static int m_A;
	int m_B; //非静态成员变量
	//静态成员函数也是有访问权限的
private:
	static void func2() {
		cout << "static void func2的调用" << endl;
	}

};

int Person::m_A = 0;
//两种的访问方式
void test01() {
	//通过对象访问
	Person p;
	p.func();
	//通过类名访问
	Person::func();
	Person::fun2(); //私有作用域不可访问 类外访问不到静态成员函数
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



### 4.3C++对象模型和this指针

#### 4.3.1成员变量和成员函数分开存储

在C++中，类内中的成员变量和成员函数分开存储

只有非静态成员变量才属于类的对象上的

```c++
#include <iostream>
#include <string>
using namespace std;
//成员变量和成员函数分开存储
 
class Person {
	int m_A; //非静态成员变量 属于类的对象上
	static int m;//静态成员
	void func() {} //非静态成员函数
	static void func1() {} //静态成员函数
};

int Person::m = 0;
void test01() {
	Person p;
	//空对象占用的内存空间为：1
	//c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存空间
	cout << "sizeof(p) = " << sizeof(p) << endl;

}

void test02() {
	Person p;
	cout << "sizeof(p) = " << sizeof(p) << endl;
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}
```



#### 4.3.2this指针概念

通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的

每个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会工用一块代码

那么问题是：这一块代码是如何区分那么对象调用自己的呢？

c++通过提供特殊的对象指针，this指针，解决上述问题。**this指针指向被调用的成员函数所属的对象**



this指针是隐含每一个非静态成员函数内的一种指针

this指针不需要定义，直接使用即可

this指针的用途：

- 当形参和成员函数同名时，可用this指针来区分
- 在类的非静态成员函数中返回对象本身，可以使用return *this

#### 4.3.3空指针访问成员函数

#### 4.3.4const修饰成员函数

### 4.4友元

### 4.5运算符重载

### 4.6继承

### 4.7多态

## 5.文件操作