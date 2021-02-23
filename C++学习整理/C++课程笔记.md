

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

当其他类对象作为本类成员的时候，先构造类对象，再构造自身，析构顺序与构造顺序相反

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

```c++
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age; //this指针指向被调用的成员函数所属的对象
	}
	Person& PersonAddAge(Person &p) {
		//this指向p2指针，而*this指向的就是p2这个对象本体
		this->age += p.age;
		return *this;
	}
	int age;
};
//解决名称冲突
void test01() {
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}
//返回对象本身用*this
void test02() {
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}
```



#### 4.3.3空指针访问成员函数

C++中空指针也是可以调用函数的，但是也要注意有没有用到this指针

如果用到this指针，需要加以判断保证代码的健壮性

```c++
#include <iostream>
#include <string>
using namespace std;
//空指针调用成员函数

class Person {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}
	void showPersonage() {
		if (this == NULL) {
			return;
		}
		cout << "age = " << this->m_age << endl; 
		//报错原因因为传入的指针是空指针
	}
	int m_age;
};

void test01() {
	Person *p = NULL; //空指针
	p->showClassName();
	p->showPersonage();
}

int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.3.4const修饰成员函数

**常函数：**

- 成员函数后加const后我们称为这个函数为**常函数**
- 常函数内不可以修改成员属性
- 成员属性声明时加关键字mutable后，在常函数中依然可以修改

**常对象：**

- 声明对象前加const称该对象为常对象
- 常对象只能调用常函数

```c++
#include <iostream>
#include <string>
using namespace std;
//常函数

class Person {
public:
	//this指针 本质是指针常量 ， 指针的指向是不可以修改的
	// Person *const this
	//在成员函数后面加const,修饰的是this指向，让指针的指向的值也不可以修改
	void showPerson() const {
		//this->m_age = 100;
		//this = NULL; //this指针是不可以修改指针的指向
		this->m_age2 = 100;
	}
	void func() {
		m_age = 100;
	}
	int m_age;
	mutable int m_age2; //特殊变量，即使在常函数中也可以修改这个值
};

void test01() {
	Person p;
	p.showPerson();
}

void test02() {
	const Person p; //在对象前加const,变成常对象
	p.m_age = 100; //报错
	p.m_age2 = 100;//是特殊值，在常对象下也可以修改
	//常对象只能调用常函数
	p.showPerson();
	p.func(); //报错, 常对象不可以调用普通的成员函数，因为普通成员函数可以修改属性
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



### 4.4友元

生活中你家有客厅（Public），有你的卧室（Private）

客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去

但是呢，你也可以允许你的好闺蜜好基友进去。



在程序中，有些私有属性，也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术



友元的目的就是让一个函数或者类 访问另一个类中私有成员



友元的关键字为 ==friend==



友元的三种实现

- 全局函数做友元
- 类做友元
- 成员函数做友元

#### 4.4.1全局函数做友元

```c++
#include <iostream>
#include <string>
using namespace std;

class Building {
//goodGay全局函数时building好朋友，可以访问building中私有的成员
friend void goodgay(Building *building);
public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom; //卧室
};

//全局函数
void goodgay(Building *building) {
	cout << "好基友全局函数 正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问： " << building->m_BedRoom << endl;
}

void test01() {
	Building building;
	goodgay(&building);
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.4.2类做友元

```c++
#include <iostream>
#include <string>
using namespace std;

class Building {
	friend class GoodGay; //GoodGay是本类的好朋友 可以访问本类私有成员
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

class GoodGay {
public:
	GoodGay();
	void visit();//参观函数 访问Building中的属性
	Building *building; 
};
  
//类外写成员函数
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	//创建建筑物对象
	building = new Building;
}
void GoodGay::visit() {
	cout << "好基友类正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友类正在访问： " << building->m_BedRoom << endl;;
}

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() {
	test01();
	system("pause");
	return 0;
}

```



#### 4.4.3成员函数做友元

```c++
#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay {
public:
	GoodGay();
	void visit(); //让visit函数可以访问building中私有成员
	void visit2(); //让visit2函数不可以访问building中私有成员
	Building *building;
};

class Building {
	//告诉编译器  GoodGay类下的visit成员函数作为本类的好朋友， 可以访问私有成员
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_settingroom;
private:
	string m_bedroom;
};

//类外实现成员函数
Building::Building() {
	m_settingroom = "客厅";
	m_bedroom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "visit 函数正在访问：" << building->m_settingroom << endl;
	cout << "visit 函数正在访问：" << building->m_bedroom << endl;
}

void GoodGay::visit2() {
	cout << "visit 函数正在访问：" << building->m_settingroom << endl;
	//cout << "visit 函数正在访问：" << building->m_bedroom << endl;
}

void test01() {
	GoodGay gg;
	gg.visit();
	gg.visit2();
}
int main() {
	test01();
	system("pause");
	return 0;
}

```



### 4.5运算符重载

运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

对于内置数据类型，编译器知道如何进行运算

#### 4.5.1加号运算符重载

```c++
#include <iostream>
#include <string>
using namespace std;
//加号运算符重载


class Person {
public:
	//1.成员函数重载
	/*Person operator+(Person &p) {
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
public:
	int m_A;
	int m_B;
};
//2.全局函数重载
Person operator+(Person &p1, Person &p2) {
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//函数重载版本
Person operator+(Person &p1, int num) {
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test01() {
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	//成员函数调用本质：Person p3 = p1.operator+(p2);
	//全局函数调用本质：Person p3 = operator+(p1, p2);
	Person p3 = p1 + p2;
	//运算符重载也可以发生函数重载
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	Person p4 = p1 + 100;
	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}

```



#### 4.5.2左移运算符重载

作用：可以输出自定义数据类型

```c++
#include <iostream>
#include <string>
using namespace std;
//左移运算符重载
class Person {
	friend ostream& operator<<(ostream &cout, Person &p);
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
	//利用成员函数重载 左移运算符
	//不会利用成员函数左移运算符，因为无法实现cout在左侧
	//void operstor << (Person &p) {
	//}
private:
	int m_A;
	int m_B;
};

ostream& operator<<(ostream &out , Person &p) {
	cout << "m_A = " << p.m_A << " " << "m_B = " << p.m_B;
	return out;
}
void test01() {
	Person p(20, 20);
	cout << p << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：重载左移运算符配合友元可以实现输出自定义数据类型

#### 4.5.3递增运算符重载

作用：通过重载递增运算符，实现自己的整型数据

```c++
#include <iostream>
#include <string>
using namespace std;
//重载递增运算符

class MyInteger {
friend ostream& operator<<(ostream &out, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	//重载前置++运算符 返回引用为了对一个数据进行操作
	MyInteger& operator++() {
		m_Num++;
		return *this;
	}
	//重载后置++运算符 int代表占位参数，用于区分前置，后置
	MyInteger operater(int) {
		//先记录当前结果
		MyInteger temp = *this;
		//后递增
		m_Num++;
		//最后将记录结果做返回值
		return temp;
	}
private:
	int m_Num;
};

ostream& operator<<(ostream &out, MyInteger myint) {
	cout << myint.m_Num;
	return out;
}

void test01() {
	MyInteger myint;
	cout << ++myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

```



#### 4.5.4赋值运算符重载

C++编译器至少给一个类添加4个函数

1.默认构造函数（无参，函数体为空）

2.默认析构函数（无参，函数体为空）

3.默认拷贝构造函数对属性进行值拷贝

4.赋值运算符operator=,对属性进行值拷贝

如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题

```c++
#include <iostream>
#include <string>
using namespace std;
//赋值运算符重载

class Person {
public:
	Person(int age) {
		m_Age = new int(age);
	}
	~Person() {
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	Person& operator=(Person &p) {
		//编译器提供浅拷贝
		//m_Age = p.m_Age;
		//应该先判断是否有堆区， 如果有先释放干净，然后再深拷贝
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		return *this;
	}
	int *m_Age;
};

void test01() {
	Person p1(19);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;//赋值运算
	cout << "p1的年龄为：" << *p1.m_Age << endl;
	cout << "p1的年龄为：" << *p2.m_Age << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}

```



#### 4.5.5关系运算符重载

作用：重载关系运算符，可以让两个自定义类型进行对比操作

```c++
#include <iostream>
#include <string>
using namespace std;
//关系运算符重载
class Person {
public:
	Person(string name, int age) {
		m_name = name;
		m_age = age;
	}
	//重载关系运算符==号
	bool operator==(Person &p) {
		if (this->m_age == p.m_age && this->m_name == p.m_name) {
			return true;
		} 
		return false;
	}
	bool operator!=(Person &p) {
		if (this->m_age != p.m_age || this->m_name != p.m_name) {
			return true;
		}
		return false;
	}
	string m_name;
	int m_age;
};

void test01() {
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2) {
		cout << "p1 等于 p2" << endl;
	}
	else {
		cout << "p1 不等于 p2" << endl;
	}
	if (p1 != p2) {
		cout << "p1 不等于 p2" << endl;
	}
	else {
		cout << "p1 等于 p2" << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}

```



#### 4.5.6函数调用运算符重载

- 函数调用运算符（）也可以重载
- 由于重载后使用的方式非常像函数调用，因此称为仿函数
- 仿函数没有固定写法，非常灵活

```c++
#include <iostream>
#include <string>
using namespace std;
//函数调用运算符重载

//打印输出类
class MyPrint {
public:
	//重载函数调用运算符
	void operator()(string test) {
		cout << test << endl;
	}
};

void myPrint02(string test) {
	cout << test << endl;
}
void test01() {
	MyPrint myPrint;
	myPrint("hello world"); //由于使用非常类似于函数调用，因此称为仿函数
	myPrint02("hello world");
	//仿函数非常灵活，没有固定写法
}

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};
void test02() {
	MyAdd myadd;
	int ret = myadd(100, 200);
	cout << "ret = " << ret << endl;
	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

```



### 4.6继承

**继承是面向对象三大特性之一**

有些类之间存在特殊关系，定义这些类时，下级成员除了拥有上一级的共性，还拥有自己的特性

这个时候我们就要考虑利用继承的技术，减少代码量

#### 4.6.1继承的基本语法

**语法：class 子类：继承方式 父类**

子类也被称为派生类

父类也被称为基类

**菜鸟写法：**

```c++
#include <iostream>
using namespace std;
//普通实现页面
//java页面

class Java {
public:
	void header() {
		cout << "首页 、公开课、登入、注册" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内信息" << endl;
	}
	void left() {
		cout << "java、Python、C++" << endl;
	}
	void content() {
		cout << "Java学科视频" << endl;
	}
};

//Python页面

class Python {
public:
	void header() {
		cout << "首页 、公开课、登入、注册" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内信息" << endl;
	}
	void left() {
		cout << "java、Python、C++" << endl;
	}
	void content() {
		cout << "Python学科视频" << endl;
	}
};

//C++页面
//java页面

class Cpp{
public:
	void header() {
		cout << "首页 、公开课、登入、注册" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内信息" << endl;
	}
	void left() {
		cout << "java、Python、C++" << endl;
	}
	void content() {
		cout << "C++学科视频" << endl;
	}
};

void test01() {
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

**继承写法：**

```c++
#include <iostream>
using namespace std;
//
class BasePage {
public:
	void header() {
		cout << "首页 、公开课、登入、注册" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内信息" << endl;
	}
	void left() {
		cout << "java、Python、C++" << endl;
	}
};

//Java页面
class Java :public BasePage {
public:
	void content() {
		cout << "Java学科视频" << endl;
	}
};
//Python页面
class Python :public BasePage {
public:
	void content() {
		cout << "Python学科视频" << endl;
	}
};
//C++页面
class Cpp :public BasePage {
public:
	void content() {
		cout << "c++学科视频" << endl;
	}
};

void test01() {
	cout << "Java下载视频页面如下：" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "------------------------" << endl;
	cout << "Python下载视频页面如下：" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "------------------------" << endl;
	cout << "C++下载视频页面如下：" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

**总结：减少重复代码**

**派生类中的成员，包含两大部分：**

一类是从基类继承过来的，一类是自己增加的成员

从基类继承过来的表现出其共性，而新增的成员体现出个性

#### 4.6.2继承的方法

继承语法：`class 子类: 继承方式 父类`

继承方式一共三种：

- 公共继承
- 保护继承
- 私有继承

```c++
#include <iostream>
#include <string>
using namespace std;

//继承方式
//公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1 {
public:
	void func() {
		m_A = 10; //父类中公共权限成员，到子类中依旧是公共权限
		m_B = 20; //父类中保护权限成员，到子类中依旧是保护权限
		//m_c = 30; 父类中私有权限成员，到子类中访问不到
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 20;
	//s1.m_B = 30;类外访问不到
}

//保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2 {
public:
	void func() {
		m_A = 10; //父类中公共权限成员，到子类中变成保护权限
		m_B = 20; //父类中保护权限成员，到子类中依旧是保护权限
		//m_c = 30; 父类中私有权限成员，到子类中访问不到
	}
};

void test02() {
	Son2 s1;
	s1.m_A = 100;//在Son2中m_A变为保护权限，类外访问不到
	s1.m_B = 100;//在Son2中m_A变为保护权限，类外访问不到
}

class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3 {
public:
	void func() {
		m_A = 10; //父类中公共权限成员，到子类中变成私有成员
		m_B = 20; //父类中保护权限成员，到子类中变成私有成员
		//m_c = 30; 父类中私有权限成员，到子类中访问不到
	}
};

void test03() {
	Son3 s1;
	s1.m_A = 100;//在Son3中m_A变为私有权限，类外访问不到
	s1.m_B = 100;//在Son3中m_A变为私有权限，类外访问不到
}

class GrandSon3 :public Son3 {
public:
	void func() {
		m_A = 100; //到了Son3已经变成私有，再到儿子也访问不到
		m_B = 100;
	}
};

int main() {
	system("pause");
	return 0;
}
```



#### 4.6.3继承中的对象模型

**问题：**从父类继承过来的成员，哪些属于子类对象中？

```c++
#include <iostream>
#include <string>
using namespace std;
//继承中的对象模型

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base {
public:
	int m_D;
};
//用开发人员命令提示工具查看对象模型
//跳转盘符 E:
//跳转文件路径cd 具体路径下
//查看命名
//cl /dl reportSingleClassLayout类名 文件名
void test01() {
	//父类中所有非静态成员属性都会被子类继承
	//父类中私有成员属性，是被编译器给隐藏了， 因此时访问不到，但确实被继承了
	cout << "size of Son = " << sizeof(Son) << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：父类中私有成员也是被子类继承下去了，只是编译器给隐藏后访问不到。

#### 4.6.4继承中的构造和析构顺序

子类继承父类后，当创建子类对象，也会调用父类的构造函数

**问题**：父类和子类的构造和析构顺序是谁前谁后？

```c++
#include <iostream>
#include <string>
using namespace std;
//继承中的构造和析构顺序
class Base {
public:
	Base() {
		cout << "Base构造函数！" << endl;
	}
	~Base() {
		cout << "Base析构函数！" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son构造函数！" << endl;
	}
	~Son() {
		cout << "Son析构函数！" << endl;
	}
};

void test01() {
	//Base b;
	//继承中的构造和析构顺序如下：
	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
	Son s;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：先构造父类，再构造子类，析构的顺序与构造的顺序相反

#### 4.6.5继承同名成员处理方式

问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？

- 访问子类同名成员 直接访问即可
- 访问父类同名成员 需要加作用域

```c++
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	Base() {
		m_A = 100;
	}
	void func() {
		cout << "Base - func 调用" << endl;
	}
	void func(int a) {
		cout << "Base - func() 调用" << endl;
	}
	int m_A;
};

class Son :public Base {
public:
	Son() {
		m_A = 200;
	}
	void func() {
		cout << "Son - func 调用" << endl;
	}
	int m_A;
};
//同名成员属性
void test01() {
	Son s;
	cout << "Base 下 s.m_A = " << s.Base::m_A << endl;
	//如果通过子类对象 访问到父类同名成员吗需要加作用域
	cout << "Son 下 s.m_A = " <<s.m_A << endl;
}
//同名成员函数
void test02() {
	Son s;
	s.Base::func();
	s.func();
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类的同名成员函数
	//s.func(100); 如果想访问加作用域
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```



#### 4.6.6继承同名静态成员处理方式

问题：继承中同名的静态成员在子类对象上如何进行访问？

静态成员和非静态成员出现同名，处理方式一致

- 访问子类同名成员，直接访问即可
- 访问父类同名成员，需要加作用域

```c++
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	static int m_A;
	static void func() {
		cout << "Base - static void func()" << endl;
	}
};

int Base::m_A = 100;
class Son :public Base {
public:
	static int m_A;
	static void func() {
		cout << "Son - static void func()" << endl;
	}
};

int Son::m_A = 200;
//同名静态成员属性
void test01() {
	Son s;
	//1.通过对象访问
	cout << "通过对象访问" << endl;
	cout << "Son 下 m_A:" << s.m_A << endl;
	cout << "Base下 m_A:" << s.Base::m_A << endl;
	//2.通过类名访问
	cout << "通过类名访问" << endl;
	cout << "Son 下 m_A:" << Son::m_A << endl;
	cout << "Base下 m_A:" << Son::Base::m_A << endl;
}
void test02() {
	Son s;
	//对象访问
	cout << "对象访问" << endl;
	s.func();
	s.Base::func();
	//类名访问
	cout << "类名访问" << endl;
	Son::func();
	Son::Base::func();
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：同名静态成员处理方式和非静态处理方式相同，只是有两种访问方式

#### 4.6.7多继承语法

C++中允许一个类继承多个类

语法：`class 子类:继承方式 父类一, 继承方式 父类二`

多继承可能会引发父类中有同名成员出现，需要加作用域区分

**C++实际开发中不建议使用多继承**

```c++
#include <iostream>
#include <string>
using namespace std;

//多继承语法
class Base1 {
public:
	Base1() {
		m_A = 100;
	}
	int m_A;
};

class Base2 {
public:
	Base2() {
		m_A = 100;
	}
	int m_A;
};
class Son :public Base1, public Base2 {
public:
	Son() {
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test01() {
	Son s;
	cout << "sizeof(son)" << sizeof(Son) << endl;
	cout << "Base1:m_A:" << s.Base1::m_A << endl;
	cout << "Base2:m_A:" << s.Base2::m_A << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.6.8菱形继承

**菱形继承概念：**

两个派生类继承同一个基类

又有某个类同时继承两个派生类

这种继承被称为菱形继承，或者钻石继承

菱形继承问题：

1.羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时就会发生二义性。

2.草泥马继承自动物的数据会被继承了两份，其实我们应该清楚，两份数据只需要一份就可以。

```c++
#include <iostream>
#include <string>
using namespace std;

//动物类
class Animal {
public:
	int m_age;
};
//利用虚继承 解决菱形继承问题
//继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚继承
//羊类
class Sheep :virtual public Animal {

};
//驼类
class Tuo :virtual public Animal {

};
//草泥马类
class SheepTuo :public Sheep, public Tuo {

};

void test01() {
	SheepTuo st;
	st.Sheep::m_age = 18;
	st.Tuo::m_age = 28;
	//当菱形继承，两个父类拥有形同数据，需要加以作用域区分
	cout << "st.Sheep::m_age ="<<st.Sheep::m_age << endl;
	cout << "st.Tuo::m_age =" << st.Tuo::m_age << endl;
	cout << "st.m_age = "<<st.m_age << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 菱形继承带来的主要问题是子类继承了两份相同的数据，导致资源浪费以及毫无意义
- 利用虚继承可以解决菱形继承问题

### 4.7多态

#### 4.7.1多态的基本概念

**多态是C++面向对象三大特性之一**

多态分为两类

- 静态多态：函数重载 和运算符重载属于静态多态，复用函数名
- 动态多态：派生类和虚函数实现运行时多态

静态多态和动态多态区别：

- 静态多态的函数地址旱绑定 - 编译阶段确定函数地址
- 动态多态的函数地址晚绑定 - 运行阶段确定函数地址

下面通过案例进行讲解多态

```c++
#include <iostream>
#include <string>
using namespace std;
//多态
//动物类
class Animal {
public:
	//虚函数
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};
//猫类
class Cat :public Animal {
public:
	void speak() {
		cout << "小猫在说话" << endl;
	}
};

class Dog:public Animal {
public:
	void speak() {
		cout << "小狗在说话" << endl;
	}
};
//地址早绑定， 在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定

//动态多态满足条件：1、有继承关系 2、子类重写父类虚函数
//重写概念：函数返回值类型，函数名， 参数列表 完全相同

//动态多态使用
//父类的指针或者引用 指向子类的对象
void doSpeak(Animal &animal) { //Animal & animal = cat;
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

[![y6wH8U.png](https://s3.ax1x.com/2021/02/15/y6wH8U.png)](https://imgchr.com/i/y6wH8U)

#### 4.7.2多态案例一-计算器类

案例描述：

分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类



多态的优点：

- 代码组织结构清晰
- 可读性强
- 利用前期和后期的拓展以及维护

```c++
#include <iostream>
#include <string>
using namespace std;

//分别利用普通写法和多态技术实现计算器

//普通写法
class Calculator {
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_num1 + m_num2;
		}
		else if (oper == "-") {
			return m_num1 - m_num2;
		}
		else if (oper == "*") {
			return m_num1 * m_num2;
		}
		//如果想扩展新的功能，需求修改源码
		//真实开发中 提倡开闭原则
		//开闭原则：对拓展进行开放，对修改进行关闭
	}
	int m_num1;//操作数1
	int m_num2;//操作数2
};

void test01() {
	Calculator c;
	c.m_num1 = 10;
	c.m_num2 = 20;
	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+") << endl;
	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getResult("-") << endl;
	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getResult("*") << endl;
}

//利用多态实现计算器
//实现计算器抽象类

//多态好处
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期拓展以及维护性高
class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}
	int m_num1;
	int m_num2;
};

class AddCalculator:public AbstractCalculator {
public:
	int getResult() {
		return m_num1 + m_num2;
	}
};

class SubCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_num1 - m_num2;
	}
};

class MulCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_num1 * m_num2;
	}
};
void test02() {
	AbstractCalculator *abc = new AddCalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 100;
	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult << endl;
	delete abc;
	abc = new SubCalculator;
	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult << endl;
	delete abc;
	abc = new MulCalculator;
	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult << endl;
	delete abc;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：C++开发中提倡多态设计程序架构，因为多态的优点很多

#### 4.7.3纯虚函数和抽象类

在多态中，通常父类中虚构函数的实现是毫无意义的，主要都是调用子类重写内容

因此可以将虚函数改写为**纯虚函数**

纯虚函数语法：`virtual 返回值类型 函数名 （参数列表） = 0;`

当类中有了纯虚函数，这个类也被称为==抽象类==

抽象类特点：

- 无法实例化对象
- 子类必须重写抽象类中的纯虚函数

```c++
#include <iostream>
#include <string>
using namespace std;

//纯虚函数
class Base {
public:
	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特点
	//1.无法实例化对象
	//2.抽象类的子类， 必须要重写父类中的纯虚函数， 否则也属于抽象类
	virtual void func() = 0;
};


class Son :public Base {
public:
	virtual void func() {
		cout << "func函数调用" << endl;
	}
};
void test01() {
	//Base b; //抽象类是无法实例化对象
	Son s; //子类必须重写父类中的纯虚函数，否则无法实例化
	Base *base = new Son;
	base->func();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.7.4多态案例二-制作饮品

案例描述：

制作饮品的大致流程为：煮水 - 冲泡 - 倒入杯中 - 加入辅料

利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

[![y6wOKJ.png](https://s3.ax1x.com/2021/02/15/y6wOKJ.png)](https://imgchr.com/i/y6wOKJ)

```c++
#include <iostream>
#include <string>
using namespace std;

//多态案例二：制作饮品

class AbstractDrinking {
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	void makeDrink() {
		Boil();
		Brew();
		PutSomething();
		PourInCup();
	}
};

class Coffee :public AbstractDrinking {
public:
	virtual void Boil() {
		cout << "煮水" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入糖、牛奶" << endl;
	}
};

class tea :public AbstractDrinking {
	virtual void Boil() {
		cout << "煮水" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡茶" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入柠檬" << endl;
	}
};

void dowork(AbstractDrinking *abs) {
	abs->makeDrink();
	delete abs;
}
void test01() {
	dowork(new Coffee);
	//制作茶叶
	dowork(new tea);
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 4.7.5虚析构和纯虚析构

多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码

解决方式：将父类中的析构函数改为**虚析构**或者**纯虚析构**

虚析构和纯析构共性：

- 可以解决父类指针释放子类对象
- 都需要有具体的函数实现

虚析构和纯虚析构区别：

- 如果是纯虚析构，该类属于抽象对象，无法实例化对象

虚析构语法：

`virtual ~类名(){}`

纯虚析构语法：

`virtual ~类名() = 0`

`类名::~类名() {}`

```c++
#include <iostream>
#include <string>
using namespace std;
//虚析构和纯虚析构
class Animal {
public:
	Animal() {
		cout << "父类构造函数" << endl;
	}
	virtual void speak() = 0;
	//利用虚析构可以解决 父类指针释放子类不干净的问题
	/*virtual ~Animal() {
		cout << "父类析构函数" << endl;
	}*/
	
};
//纯虚析构 需要声明也需要实现
//有了纯虚析构之后 ，这个类也属于抽象类，无法实例化对象
Animal::Animal() {
	cout << "Animal纯虚析构函数调用" << endl;
}

class Cat :public Animal {
public:
	Cat() {

	}
	Cat(string name) {
		cout << "Cat构造函数" << endl;
		m_name = new string(name);
	}
	virtual void speak() {
		cout << *m_name << "小猫在说话" << endl;
	}
	~Cat() {
		if (m_name != NULL) {
			cout << "Cat 析构函数调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string *m_name;
};

void test01() {
	Animal *animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时候 不会调用子类中析构函数，导致子类如果有堆区属性出现内存泄漏
	delete animal;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象

2.如果子类中没有堆区数据，可以不写为虚析构或纯虚析构

3.拥有纯虚析构函数的类也属于抽象类

#### 4.7.6多态案例三-电脑组装

**案例描述：**

电脑主要组成部件为CPU(用于计算)，显卡(用于显示)，内存条(用于存储)

将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商

创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口

测试是组装三台不同的电脑进行工作

```c++
#include <iostream>
#include <string>
using namespace std;

//抽象不同零件类
//抽象cpu类
class CPU {
public:
	virtual void calculate() = 0;
};
//抽象显卡
class  VideoCard {
public:
	virtual void display() = 0;
};
//抽象内存条
class Memory {
public:
	virtual void storage() = 0;
};
//电脑类
class Computer {
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *men) {
		m_cpu = cpu;
		m_vc = vc;
		m_men = men;
	}
	//提供工作函数
	void work() {
		m_cpu->calculate();
		m_vc->display();
		m_men->storage();
	}
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		} 
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_men != NULL) {
			delete m_men;
			m_men = NULL;
		}
	}
private:
	CPU *m_cpu; //CPU的零件指针
	VideoCard *m_vc; //显卡零件指针
	Memory *m_men; //内存条零件指针
};
//具体厂商
//Intel厂商
class IntelCPU :public CPU{
public:
	virtual void calculate() {
		cout << "Intel的CPU开始计算了" << endl;
	}
};

class Intelvideocard :public  VideoCard {
public:
	virtual void display() {
		cout << "Intel的显卡开始显示了" << endl;
	}
};

class IntelMemory :public  Memory{
public:
	virtual void storage() {
		cout << "Intel的内存条开始存储了" << endl;
	}
};

//联想
class LenovoCPU :public CPU {
public:
	virtual void calculate() {
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class  Lenovovideocard :public  VideoCard {
public:
	virtual void display() {
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class  LenovoMemory :public  Memory {
public:
	virtual void storage() {
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};

void test01() {
	cout << "第一台电脑开始工作" << endl;
	//第一台电脑
	CPU *intelcpu = new IntelCPU;
	VideoCard *intelcard = new Intelvideocard;
	Memory *intelmemory = new IntelMemory;
	//创建第一台电脑
	Computer *computer1 = new Computer(intelcpu, intelcard, intelmemory);
	computer1->work();
	delete computer1;
	cout << "第二台电脑开始工作" << endl;
	//创建第二台电脑
	Computer *computer2 = new Computer(new LenovoCPU, new Lenovovideocard,new LenovoMemory);
	computer2->work();
	delete computer2;
	cout << "第三台电脑开始工作" << endl;
	//创建第二台电脑
	Computer *computer3 = new Computer(new IntelCPU, new Lenovovideocard, new LenovoMemory);
	computer3->work();
	delete computer3;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



## 5.文件操作

程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放

**通过文件可以将数据持久化**

C++中对文件操作需要包含头文件==\<fstream>==

文件类型分为两种：

1.**文本文件** - 文件一文本的ASCII码形式存储在计算机中

2.**二进制文件** - 文件一文本的二进制形式存储在计算机中，用户一般不能直接读懂它们



操作文件三大类：

1.ofstream: 写caozu

2.ifsteam: 读操作

3.fstream: 读写操作

### 5.1文本文件

#### 5.1.1写文件

写文件步骤如下：

1.包含头文件

\#include \<fstream>

2.创建流对象

ofstream ofs;

3.打开文件

ofs.open("文件路径"，打开方式)；

4.写数据

ofs<<"写入的数据"；

5.关闭文件

ofs.close();

文件打开方式：

| 打开方式    | 解释                       |
| ----------- | -------------------------- |
| ios::in     | 为读文件而打开文件         |
| ios::out    | 为写文件而打开文件         |
| ios::ate    | 初始位置：文件尾           |
| ios::app    | 追加方式写文件             |
| ios::trunc  | 如果文件存在先删除，再创建 |
| ios::binary | 二进制方式                 |

**注意**：文件打开方式可以配合使用，利用|操作符

**例如：**用二进制方式写文件`ios::binary | ios::out`

```c++
#include <iostream>
#include <fstream>
using namespace std;

//文本文件写文件

void test01() {
	//1.包含头文件
	//2.创建流对象
	ofstream ofs;
	//3.指定打开方式
	ofs.open("test.txt", ios::out);
	//4.写内容
	ofs << "姓名:张三" << endl;
	ofs << "性别:男" << endl;
	ofs << "年龄：18" << endl;
	//5.关闭
	ofs.close();

}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结:

- 文件操作必须包含头文件fstream
- 读文件可以利用ofstream, 或者fstream
- 打开文件时候需要指定操作文件路径，以及打开方式
- 利用<<可以向文件中写数据
- 操作完毕，要关闭文件

#### 5.1.2读文件

读文件与写文件步骤相似，但是读取方式相对于比较多



读文件步骤如下：

1.包含头文件

\#include\<fstream>

2.创建流对象

ifstream ifs;

3.打开文件并且判断文件是否打开成功

ifs.open("文件路径"，打开方式)；

4.读数据

四种方式读取

5.关闭文件

ifs.close();

```c++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//文本文件读文件

void test01() {
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.指定打开方式
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}
	//4.读内容
	//第一种
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}*/
	//第二种
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}*/
	//第三种
	/*string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}*/
	//第四种
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}
	//5.关闭
	ifs.close();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



### 5.2二进制文件

以二进制的方式对文件进行读写操作

打开方式要指定为==ios::binary==

#### **5.2.1写文件**

二进制方式写文件主要利用流对象调用成员函数write

函数原型：`ostream& write((const char *)buffer, int len)`

参数解释：字符串buffer指向内存中的一段存储空间。len是读写的字节数

```c++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//二进制文件 写文件
class Person {
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test01() {
	//1.包含头文件
	//2.创建流对象
	ofstream ofs("Person.txt", ios::out | ios::binary);;
	//3.打开文件
	//ofs.open("Person.txt", ios::out | ios::binary);
	//4.写文件
	Person p = { "张三", 19 };
	ofs.write((const char *)&p, sizeof(Person));
	//5.关闭
	ofs.close();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### **5.2.2读文件**

二进制方式读文件主要利用流对象调用成员函数read

函数原型：`istream& read(char *buffer, int len)`

参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

```c++
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//二进制文件 读文件
class Person {
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test01() {
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件 判断打开是否成功
	ifs.open("Person.txt", ios::out | ios::binary);
	if (!ifs.is_open()) {
		cout << "打开失败！" << endl;
		return;
	}
	//4.读文件
	Person p;
	ifs.read((char *)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
	//5.关闭
	ifs.close();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

# 职工管理系统

## 1.管理系统需求

职工管理系统可以用来管理公司内所有员工的信息

本教程主要利用C++来实现一个基于多态的职工管理系统



公司中职工分为三类：普通员工、经理、老板，显示信息时，需要显示职工编号，职工姓名，职工岗位、以及职责

普通员工职责：完成经理交给的任务

经理职责：完成老板交给的任务，并下发任务给员工

老板职责：管理公司所有事务

### 1.1管理系统中需要实现的功能如下：

- 退出管理系统：退出当前管理系统
- 增加职工信息：实现批量添加职工功能，将信息录入文件中，职工信息为：职工编号、姓名、部门编号
- 显示职工信息：显示公司内部所有职工的信息
- 删除离职职工：按照编号删除指定的职工
- 修改职工信息：按照编号修改职工个人信息
- 查找职工信息：按照职工的编号或职工姓名进行查找相关的人员信息
- 按照编号排序：按照职工编号，进行排序，排序规则由用户指定
- 清空所有文档：清空文件中记录所有职工信息（清空前需要再次确认，防止误删）

## 2.创建项目

### 2.1创建项目步骤如下：

- 创建新项目
- 添加文件

## 3.创建管理类

管理类负责内容如下：

- 与用户的沟通菜单界面
- 对职工增删改查的操作
- 与文件的读写交互

### 3.1创建文件

在头文件和源文件中分别创建workerManager.h和workerManager.cpp文件

### 3.2头文件实现

在workerManager.h中设计管理类

```c++
#pragma once //防止头文件重复包含
#include <iostream>//包含输入输出流头文件
using namespace std;//使用标准命名空间

class WorkerManager {
public:
	//构造函数
	WorkerManager();
	//析构函数
	~WorkerManager();
};
```

### 3.3源文件实现

在workerManger.cpp中将构造和析构函数空实现补全

```c++
#include "workerManager.h"

	//构造函数
WorkerManager:: WorkerManager() {

}
	//析构函数
WorkerManager::~WorkerManager() {

}
```



## 4.菜单功能

功能描述：与用户的沟通界面

### 4.1添加成员函数

在管理类workManager.h中添加成员函数 `void Show_Menu();`

### 4.2在管理类功能实现

在管理类workManager.cpp中实现Show_Menu()函数

```c++
void WorkerManager::Show_Menu() {
	cout << "*******************************************" << endl;
	cout << "********** 欢迎使用职工管理系统！**********" << endl;
	cout << "************** 0.退出管理程序 *************" << endl;
	cout << "************** 1.增加职工信息 *************" << endl;
	cout << "************** 2.显示职工信息 *************" << endl;
	cout << "************** 3.删除离职员工 *************" << endl;
	cout << "************** 4.修改职工信息 *************" << endl;
	cout << "************** 5.查找职工信息 *************" << endl;
	cout << "************** 6.按照编号排序 *************" << endl;
	cout << "************** 7.清空所有文档 *************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}
```



### 4.3测试成员函数

在职工管理系统中测试菜单功能

```c++
#include <iostream>
#include "workerManager.h"
using namespace std;

int main() {
	//实例化管理者对象
	WorkerManager wm;
	//调用展示菜单成员函数
	wm.Show_Menu();

	system("pause");
	return 0;
 }
```

运行效果图：

[![ycu6De.png](https://s3.ax1x.com/2021/02/16/ycu6De.png)](https://imgchr.com/i/ycu6De)

## 5.退出功能

### 5.1提供功能接口

在main函数中提供分支选择，提供每个函数接口

```c++
int main() {
	//实例化管理者对象
	WorkerManager wm;
	//调用展示菜单成员函数
	int chioce;
	while (true) {
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> chioce;
		switch (chioce) {
			case 0://退出系统
				break;
			case 1://添加职工
				break;
			case 2://显示职工
				break;
			case 3://删除职工
				break;
			case 4://修改职工
				break;
			case 5://查找职工
				break;
			case 6://排序职工
				break;
			case 7://清空文件
				break;
			default:
				system("cls");
				break;
		}

	}
	system("pause");
	return 0;
 }
```



### 5.2实现退出功能

在workerManager.h提供系统的成员函数 `void exitSystem();`

在workerManager.cpp中提供具体实现功能

```c++
void WorkerManager:: ExitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //退出程序
}
```



## 6.创建职工类

### 6.1创建职工抽象类

职工的分类为：普通员工、经理、老板

将三种职工抽象到一个类（Worker）中，利用多态管理不同职工种类

职工的属性为：职工编号、职工姓名、职工所在部门编号

职工的行为为：岗位职责信息描述，获取岗位名称



头文件文件夹下 创建文件Worker.h文件并且添加如下代码：

```c++
#pragma once
#include <iostream>
using namespace std;

class Worker {
public:
	//显示个人信息
	virtual void showInfo() = 0;
	//获取岗位名称
	virtual string getDepName() = 0;
	int m_id;//职工编号
	string m_name;//职工姓名
	int m_DeptId; //职工所在部门名称编号
};

```

### 6.2创建普通员工类

普通员工类**继承**职工抽象类，并重写父类中纯虚函数

在头文件和源文件中分别创建employee.h 和 employee.cpp文件

employee.h代码如下：

```c++
#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;

class employee:public Worker {
public:
	//构造函数
	employee();
	employee(int id, string name, int dId);
	//显示个人信息
	virtual void showInfo();
	//获取岗位名称
	virtual string getDepName();
};
```

employee.cpp中代码如下：

```c++
#include "employee.h"

employee::employee() {

}
employee::employee(int id, string name, int dId) {
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = dId;
}

void employee::showInfo() {
	cout << "职工编号：" << this->m_id << endl;
	cout << "\t职工姓名：" << this->m_name << endl;
	cout << "\t岗位：" << this->getDepName();
	cout << "\t岗位责任：完成经理交给的任务" << endl;
}
string employee::getDepName() {
	return string("员工");
}
```



### 6.3创建经理类

经理类**继承**职工抽象类，并重写父类中纯虚函数，和普通员工类似

在头文件和源文件中分别创建manager.h 和 manager.cpp文件

manager.h代码如下：

```c++
#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;

class manager :public Worker {
public:
	//构造函数
	manager();
	manager(int id, string name, int dId);
	//显示个人信息
	virtual void showInfo();
	//获取岗位名称
	virtual string getDepName();
};
```

manager.cpp代码如下：

```c++
#include "manager.h"

manager::manager() {

}
manager::manager(int id, string name, int dId) {
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = dId;
}

void manager::showInfo() {
	cout << "职工编号：" << this->m_id << endl;
	cout << "\t职工姓名：" << this->m_name << endl;
	cout << "\t岗位：" << this->getDepName();
	cout << "\t岗位责任：完成老板交给的任务，并下发任务给员工" << endl;
}
string manager::getDepName() {
	return string("经理");
}
```



### 6.4创建老板类

老板类**继承**职工抽象类，并重写父类中纯虚函数，和普通员工类似

在头文件和源文件中分别创建boss.h 和 boss.cpp文件

boss.h代码如下：

```c++
#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;

class boss :public Worker {
public:
	//构造函数
	boss();
	boss(int id, string name, int dId);
	//显示个人信息
	virtual void showInfo();
	//获取岗位名称
	virtual string getDepName();
};
```

boss.cpp代码如下：

```c++
#include "boss.h"

boss::boss() {

}
boss::boss(int id, string name, int dId) {
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = dId;
}

void boss::showInfo() {
	cout << "职工编号：" << this->m_id << endl;
	cout << "\t职工姓名：" << this->m_name << endl;
	cout << "\t岗位：" << this->getDepName();
	cout << "\t岗位责任：管理公司所有事务" << endl;
}
string boss::getDepName() {
	return string("老板");
}
```

### 6.5测试多态

在职工管理系统.cpp中添加测试函数，并且运行能够产生多态

## 7.添加职工

功能描述：批量添加职工，并且保存到文件中

### 7.1功能分析

分析：

用户在批量创建时，可能会创建不同种类的职工

如果想将所有不同种类的员工都放入到一个数组中，可以将所有员工的指针维护到一个数组里

如果想在程序中维护这个不定长度的数组，可以将数组创建到堆区，并利用Worker  **的指针维护



[![ycaa9S.png](https://s3.ax1x.com/2021/02/16/ycaa9S.png)](https://imgchr.com/i/ycaa9S)



### 7.2 功能实现

在WorkManager.h头文件中添加成员属性代码：

```c++
#pragma once
#include <iostream>
#include "employee.h"
#include "boss.h"
#include "manager.h"
#include "Worker.h"
using namespace std;

class WorkerManager {
public:
	//构造函数
	WorkerManager();
	//显示菜单
	void Show_Menu();
	//退出函数
	void ExitSystem();
	//记录文件中人数的个数
	int m_EmpNum;
	//员工数组的指针
	Worker **m_EmpArray;
	void Add_Emp();
	//析构函数
	~WorkerManager();
};

```

在WorkManager.cpp头文件中添加成员属性代码：

```c++
#include "workerManager.h"

	//构造函数
WorkerManager:: WorkerManager() {
	this->m_EmpNum = 0; //初始化属性
}
//显示菜单
void WorkerManager::Show_Menu() {
	cout << "*******************************************" << endl;
	cout << "********** 欢迎使用职工管理系统！**********" << endl;
	cout << "************** 0.退出管理程序 *************" << endl;
	cout << "************** 1.增加职工信息 *************" << endl;
	cout << "************** 2.显示职工信息 *************" << endl;
	cout << "************** 3.删除离职员工 *************" << endl;
	cout << "************** 4.修改职工信息 *************" << endl;
	cout << "************** 5.查找职工信息 *************" << endl;
	cout << "************** 6.按照编号排序 *************" << endl;
	cout << "************** 7.清空所有文档 *************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}
//退出系统
void WorkerManager:: ExitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0); //退出程序
}

void WorkerManager::Add_Emp() {
	cout << "请输入添加职工数量：" << endl;
	int addnum = 0; //保存用户的输入数量
	cin >> addnum;
	if (addnum > 0) {
		//添加
		//计算添加新空间大小
		int newSize = this->m_EmpNum + addnum; //新空间人数 = 原来空间人数 + 新添加人数
		//开辟空间
		Worker **newSpace = new Worker*[newSize];
		//将原来空间下数据，拷贝到新空间下
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//批量添加新数据
		for (int i = 0; i < addnum; i++) {
			int id; //职工编号
			string name; //职工姓名
			int dSelect; //部门选择
			cout << "请输入第" << i + 1 << "个新职工编号" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名" << endl;
			cin >> name;
			cout << "请选择该职工岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;
			Worker *worker = NULL;
			switch (dSelect) {
				case 1:
					worker = new employee(id, name, 1);
					break;
				case 2:
					worker = new manager(id, name, 2);
					break;
				case 3:
					worker = new boss(id, name, 3);
					break;
				defualt:
					break;
			}
			//将创建职工指针保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		//释放原有空间
		delete[] this->m_EmpArray;
		//更新新空间的指向
		this->m_EmpArray = newSpace;
		//更新新的职工人数
		this->m_EmpNum = newSize;

		//成功添加后 保存到文件中

		//提示添加成功
		cout << "成功添加" << addnum << "名新职工" << endl;

	}
	else {
		cout << "输入有误！" << endl;
	}
	//按任意键 清屏回到上一级目录
	system("pause");
	system("cls");
}
	//析构函数
WorkerManager::~WorkerManager() {

}
```



## 8.文件交互-写文件

功能描述：对文件进行读写

在上一个添加功能中，我们只是将所有数据添加到内存中，一旦程序结束就无法保存了

因此文件管理类需要一个与文件进行互动的功能，对于文件进行写操作

### 8.1设定文件路径

首先我们将文件路径， 在workerManager.h中添加宏常量，并且包含头文件fstream

```c++
#include <fstream>
#define FILENAME "empFile.txt"
```

### 8.2成员函数声明

在workManager.h中类里添加成员函数`void save()`

```c++
void WorkerManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out); //用输出的方式打开文件 -- 写文件
	//将每一个人数据写到文件中
	for (int i = 0; i < this->m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->m_name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}
```



## 9.文件交互-读文件

功能描述：将文件中的内容分读取到程序中

虽然我们实现了添加职工保存到文件的操作，但是每次开始运行程序，并没有将文件中的数据读取到程序中，而我们的程序功能中还要清空文件的需求

因此构造函数初始化数据分为三种情况

1.第一次使用，文件未被创建

2.文件存在，但是数据被用户清空

3.文件存在，并且保存职工的所有数据

### 9.1文件未创建

在workManager.h中添加新的成员属性m_FileEmpty标志文件是否为空

```c++
//判断文件是否为空 标志
	bool m_FileIsEmpty;
```

修改WorkerManager.cpp中构造函数代码

```c++
WorkerManager:: WorkerManager() {
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //读文件
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		//初始化属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化文件数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	this->m_EmpNum = 0; //初始化属性
	this->m_EmpArray = NULL;
}
```



### 9.2文件存在且数据为空

在workerManager.cpp中的构造函数追加代码：

```c++
//2.文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//文件为空
		cout << "文件为空！" << endl;
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化文件数组指针
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
```

同时若添加职工将职工文件标志m_FileIsEmpty为假

```c++
	//更新职工不为空时
		this->m_FileIsEmpty = false;
```

### 9.3文件存在且保存职工数据

#### 9.3.1获取记录的职工人数

在workerManager.h中添加成员函数`int get_EpNum();`

```c++
//统计文件中的人数
	int get_EmpNum();
```

workerManager.cpp中实现

```c++
int WorkerManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //打开文件 读
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		//统计人数变量
		num++;
	}
	return num;
}
```

在workerManager.cpp构造函数中继续追加代码：

```c++
//3.文件存在,并且记录数据
	int num = this->get_EmpNum();
	cout << "职工人数为： " << num << endl;
	this->m_EmpNum = num;
```

9.3.2初始化数组

根据职工的数据以及职工数据，初始化workerManager中的Worker **m_EmpArray指针

在WorkManager.h中添加成员函数 `void init_Emp();`

```c++
//初始化员工
	void init_Emp();
```

在WorkerManager.cpp中实现

```c++
void WorkerManager::init_Emp() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id; 
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker *worker = NULL;
		if (dId == 1) { //普通员工
			worker = new employee(id, name, dId);
		}
		else if (dId == 2) {
			worker = new manager(id, name, dId);
		}
		else {
			worker = new boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	//关闭文件
	ifs.close();
}
```

构造函数中添加

```c++
this->m_EmpArray = new Worker *[this->m_EmpNum];
	//将文件中的数据 存到数组中
	this->init_Emp();
	//测试代码
	for (int i = 0; i < this->m_EmpNum; i++) {
		cout << " 职工编号： " << this->m_EmpArray[i]->m_id
			<< " 姓名：" << this->m_EmpArray[i]->m_name <<
			" 部门编号： " << this->m_EmpArray[i]->m_DeptId << endl;
	}
```



## 10.显示职工

## 11.删除职工

## 12.修改职工

## 13.查找职工

## 14.排序

## 15.清空文件

# C++提高编程

- 本阶段主要针对C++==泛型编程==和==STL==技术做详细讲解，探讨C++更深层的使用

## 1.模板

### 1.1模板的概念

模板就是建立**通用的模具**，大大提高复用性

例如：生活中的模板，一寸照片的模板

### 1.2函数模板

- C++中另一种编程思想称为 ==泛型编程==， 主要利用的技术就是模板
- C++提供两种模板机制：**函数模板**和**类模板**

#### 1.2.1函数模板语法

函数模板作用：

建立一个通用函数，其函数返回值类型和参数形参类型可以不具体制定，用一个**虚拟的类型**来代表

语法：

```c++
template<typename T>
函数声明或定义
```

解释：

template -- 声明创建模板

typename -- 表面其后面的符号是一种数据类型，可以用class代替

T -- 通用的数据类型，名称可以替换，通常为大写字母

```c++
#include <iostream>
using namespace std;
//函数模板

//两个整型交换的函数
void swapInt(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
 }

//两个浮点型交换的函数
void swapDouble(double &a, double &b) {
	double temp = a;
	a = b;
	b = temp;
}

//函数模板

template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	int a = 10;
	int b = 20;
	//swapInt(a, b);
	//利用函数模板交换
	//两种方式使用函数模板
	//1.自动类型推导
	mySwap(a, b);
	//2.显示指定类型
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	double c = 1.1, d = 2.2;
	//swapDouble(c, d);
	mySwap<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 函数模板利用关键字template
- 使用函数模板有两种方式：自动类型推导、显示指定类型
- 模板的目的是为了提高复用性，将类型参数化

#### 1.2.2函数模板注意事项

注意事项：

- 自动类型推导，必须推导出一致的数据类型T,才可以使用
- 模板必须确定出T的数据类型，才可以使用

```c++
#include <iostream>
using namespace std;
//函数模板注意事项
//1.自动类型推导，必须推导出一致的数据类型T才可以使用


template<class T> //typename可以替换成class
void myswap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

//2.模板必须要确定出T的数据类型，才可以使用
template <class T>
void func() {
	cout << "func 的调用" << endl;
}

void test02() {
	func<int>();
}
void test01() {

	int a = 10;
	int b = 20;
	double d = 1.3;
	char c = 'c';
	myswap(a, b);//正确
    myswap(a, c);//错误
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：

- 使用模板时必须要确定出通用数据类型T, 并且能够推导出一致的类型

#### 1.2.3函数模板案例

案例描述：

- 利用函数模板封装一个排序的函数，可以对不同的数据类型进行排序
- 排序规则从大到小，排序算法为选择排序
- 分别利用**char**数组和**int**数组进行测试

```c++
#include <iostream>
using namespace std;
//实现通用的对数组的排序函数

//交换函数模板
template<class T>
void Myswap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<class T> //函数模板
void mysort(T *arr, int len) {
	for (int i = 0; i < len; i++) {
		int max = i; //认定最大值下标
		for (int j = i + 1; j < len; j++) {
			//认定的最大值 比遍历的数值要小， 说明j下标才是最大值
			if (arr[max] < arr[j]) {
				max = j; //更新最大值
			}
		}
		if (max != i) {
			//交换max和i
			Myswap(arr[max], arr[i]);
		}
	}
}

//提供打印数组模板
template<class T>
void prtinfArry(T *arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01() {
	//测试数组
	char charArr[] = "bacdok";
	mysort(charArr, sizeof(charArr) / sizeof(char));
	prtinfArry(charArr, sizeof(charArr) / sizeof(char));
}

void test02() {
	int arr[] = { 1,2,4,7,3,8 };
	mysort(arr, sizeof(arr) / sizeof(int));
	prtinfArry(arr, sizeof(arr) / sizeof(int));
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```



#### 1.2.4普通函数与函数模板的区别

普通函数与函数模板区别：

- 普通函数调用时可以发生自动类型转换（隐式类型转换）
- 函数模板调用时，如果利用自身类型推导，不会发生隐式类型转换
- 如果利用显示指定类型的方式，可以发生隐式类型转换

```c++
#include <iostream>
using namespace std;
//普通函数与函数模板区别
//1.普通函数调用可以发生隐式类型转换
//2.函数模板 用自动类型推导，不可以发生隐式类型转换
//3.函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
int myadd(int a, int b) {
	return a + b;
}

template<class T>
T myadd2(T a, T b) { //不可以中引用
	return a + b;
}

void test01() {
	int a = 10;
	int b = 20;
	cout << myadd(a, b) << endl;
	char c = 'c';
	cout << myadd(a, c) << endl;//隐式类型转换
	cout << "————函数模板————" << endl;
	cout << myadd2(a, b) << endl;
	//cout << myadd2(a, c) << endl; 无法自动类型转换
	cout << myadd2<int>(a, c) << endl; //显示指定类型是可以发生转换的
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：建议使用显示指定类型的方式，调用函数模板，因为可以自己确定好通用类型T

#### 1.2.5普通函数与函数模板的调用规则

调用规则如下：

1.如果函数模板和普通函数都可以实现，优先调用普通函数

2.可以通过空模板参数列表强制调用函数模板

3.函数模板也可以发生重载

4.如果函数模板可以产生更好的匹配，优先调用函数模板

```c++
#include <iostream>
using namespace std;

//普通函数与函数模板的调用规则
//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//2.通过空模板参数列表 强制调用函数模板
//3.函数模板可以发生重载
void myprintf(int a, int b) {
	cout << "调用的普通函数" << endl;
}

template<class T>
void myprintf(T a, T b) {
	cout << "函数模板调用" << endl;
}

template<class T>
void myprintf(T a, T b, T c) {
	cout << "函数模板调用!" << endl;
}
void test01() {
	int a = 10;
	int b = 10;
	//myprintf(a, b);
	//通过空模板参数列表强制调用函数模板
	myprintf<>(a, b);
	myprintf<>(a, b, 100); //3.函数模板可以发生重载
	//4.如果函数模板可以产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myprintf(c1, c2); //调用函数模板
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 1.2.6模板的局限性

**局限性：**

- 模板的通用性并不是万能的

```c++
template<class T>
void f(T a, T b) {
	a = b
}
```

上述代码中提供的赋值操作，如果传入的a和b是一个数组，就无法实现了

再例如：

```c++
temptale<class T>
void f(T a, T b) {
	if (a > b) {...}
}
```

在上述代码中,如果T的数据类型传入的是像Person这样的自定义数据类型，也无法正常运行

因此C++为了解决这种问题，提供模板的重载，可以为这些**特定的类型**提供**具体化的模板**

```c++
#include <iostream>
#include <string>
using namespace std;
//模板的局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

class Person {
public:
	Person(string a, int b) {
		m_Name = a;
		m_Age = b;
	}
	string m_Name;//姓名
	int m_Age;//年龄
};

//对比两个数据是否相等函数
template<class T>
bool myCompare(T &a, T &b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}

//利用具体化的Person的版本实现代码， 具体化优先调用
template<>bool myCompare(Person &a, Person &b) {
	if (a.m_Age == b.m_Age && a.m_Name == b.m_Name) {
		return true;
	}
	else {
		return false;
	}
}

void test01() {
	int a = 10;
	int b = 10;
	bool ret = myCompare(a, b);
	if (ret) {
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}
}

void test02() {
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = myCompare(p1, p2);
	if (ret) {
		cout << "p1 == p2" << endl;
	}
	else {
		cout << "p1 != p2" << endl;
	}
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结:

- 利用具体化的模板，可以解决自定义类型的通用性
- 学习模板并不是为了写模板，而是在STL能够运用系统提供的模板

### 1.3类模板

#### 1.3.1类模板语法

类模板作用：

- 建立一个通用类，类中的成员 数据类型可以不具体制定，用一个虚拟的类型来表示。

**语法：**

```c++
template<typename T>
类
```

**解释：**

template -- 声明创建模板

typename -- 表示其后面的符号是一种数据类型，可以用class代替

T -- 通用的数据类型， 名称可以替换，通常为大写字母

```c++
#include <iostream>
#include <string>
using namespace std;

//类模板
template<class NameType, class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson() {
		cout << "name: " << this->m_Name << endl;
		cout << "age:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

void test01() {
	Person<string, int> p1("Tom",10);
	p1.showPerson();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：类模板和函数模板语法相似，在声明模板template后面加类，此类就是类模板。

#### 1.3.2类模板与函数模板区别

类模板与函数模板区别主要有两点：

1.类模板没有自动类型推导的使用方法

2.类模板在模板参数列表中可以有默认参数

```c++
#include <iostream>
#include <string>
using namespace std;

//类模板与函数模板区别

template<class NameType, class AgeType = int> //模板参数列表
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_age = age;
		this->m_name = name;
	}
	void showPerson() {
		cout << "name:" << this->m_name << " age: " << this->m_age << endl;
	}
	NameType m_name;
	AgeType m_age;
};

//1.类模板没有自动类型推导
void test01() {
	Person<string, int> p("孙悟空", 100);
	p.showPerson();
}
//2.类模板在参数列表中可以有默认参数
void test02() {
	Person<string> p("猪八戒", 120);
	p.showPerson();
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：

- 类模板使用只能用显示指定类型方式
- 类模板中的模板参数列表可以有默认参数

#### 1.3.3类模板中成员函数创建时机

类模板中成员函数和普通类中成员函数创建时机是由区别的：

- 普通类中的成员函数一开始就可以创建
- 类模板中的成员函数在调用时才创建

```c++
#include <iostream>
#include <string>
using namespace std;

//类模板中成员函数创建时机

//类模板中成员函数在调用时才去创建

class Person1 {
public:
	void showPerson1() {
		cout << "Person1 show" << endl;
	}
};

class Person2{
public:
	void showPerson2() {
		cout << "Person2 show" << endl;
	}
};

template<class T>
class myClass {
public:
	T obj;
	//类模板中成员函数
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

void test01() {
	myClass<Person1>m;
	m.func1();
	//m.func2();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：类模板中成员函数并不是一开始就创建，在调用时才去创建。

#### 1.3.4类模板对象做函数参数

学习目标：

- 类模板实例化出的对象，向函数传参的方式

一共有三种传入方式：

1.指定传入的类型  -- 直接显示对象的数据类型

2.参数模板化         -- 将对象中的参数变为模板进行传递

3.整个类模板化     -- 将这个对象类型 模板化进行传递

```c++
#include <iostream>
#include <string>
using namespace std;
//类模板对象做函数参数

template<class T1, class T2> 
class Person {
public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson() {
		cout << "name: " << m_Name << " age: " << m_Age << endl;
	}
	T1 m_Name;
	T2 m_Age;
};
//1.指定传入类型
void PrintfPerson1(Person<string, int>&p) {
	p.showPerson();
}
void test01() {
	Person<string, int> p("孙悟空", 100);
	PrintfPerson1(p);
}
//2.参数模板化
template<class T1, class T2>
void PrintfPerson2(Person<T1, T2>&p) {
	p.showPerson();
	cout << "T1的类型：" << typeid(T1).name() << endl;
	cout << "T2的类型：" << typeid(T2).name() << endl;
}
void test02() {
	Person<string, int> p("猪八戒", 100);
	PrintfPerson2(p);
	
}
//3.整个类模板化
template<class T>
void PrintfPerson3(T &p) {
	p.showPerson();
	cout << "T的类型：" << typeid(T).name() << endl;
}
void test03() {
	Person<string, int> p("唐僧", 20);
	PrintfPerson3(p);
}
int main() {
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
```



#### 1.3.5类模板与继承

当类模板碰到继承时，需要注意一下几点：

- 当子类继承的父类是一个类模板时，子类在声明的时候，要指出父类中的T的类型
- 如果不指定，编译器无法给子类分配内存
- 如果想灵活指定出父类中T的类型，子类也需变为类模板

```c++
#include <iostream>
#include <string>
using namespace std;
//类模板与继承
template<class T>
class Base {
public:
	T m;
};

//class Son :public Base { //错误 必须知道父类中的T类型,才能继承给子类
class Son :public Base<int> {
public:

};

void test01() {
	Son s1;
}

template<class T1, class T2>
class Son2 :public Base<T2> {
public:
	Son2() {
		cout << "T1的类型：" << typeid(T1).name() << endl;
		cout << "T2的类型：" << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02() {
	Son2<int, char> s;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：如果父类是类模板，子类需要指出父类中T的数据类型

#### 1.3.6类模板成员函数类外实现

学习目标：能够掌握类模板中成员函数类外实现

```c++
#include <iostream>
#include <string>
using namespace std;
//类模板成员函数类外实现

template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);
	/*{
		this->m_name = name;
		this->age = age;
	}*/
	void showPerson();
	/*{
		cout << "姓名：" << m_name << " 年龄：" << m_age << endl;
	}*/
	T1 m_name;
	T2 m_age;
};

//构造函数类外实现
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age) {
	this->m_name = name;
	this->m_age = age;
}
//成员函数类外实现
template<class T1, class T2>
void Person<T1,T2>::showPerson() {
	cout << "姓名：" << m_name << " 年龄：" << m_age << endl;
}
void test01() {
	Person<string, int> p("Tom",20);
	p.showPerson();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：类模板中成员函数类外实现时，需要加上模板参数列表

#### 1.3.7类模板分文件编写

学习目标：

- 掌握类模板成员函数分文件编写产生的问题以及解决方式

问题：

- 类模板中成员函数创建时机是在调用阶段，导致分文件编写是链接不到

解决：

- 解决方式一：直接包含.cpp文件
- 解决方式二：将声明和实现写到同一个文件中，并更改后缀名为.hpp, hpp是约定的名称，并不是强制

```c++
#include <iostream>
#include <string>
using namespace std;
//#include "Person.cpp"//第一种解决方式
//第二种解决方式，将.h和.cpp的内容写到一起，将后缀名改为.hpp文件
#include "Person.hpp"

/*template<class T1, class T2>
class Person {
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 m_name;
	T2 m_age;
};
*/
//构造函数类外实现
/*template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->m_name = name;
	this->m_age = age;
}
//成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson() {
	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
}*/
void test01() {
	Person <string, int> p("Tom", 10);
	p.showPerson();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：主流的解决方式是第二种，将类模板成员函数写到一起，并将后缀名改为.hpp

#### 1.3.8类模板与友元

学习目标：

- 掌握类模板配合友元函数的类内和类外实现

全局函数类内实现 - 直接在类内生声明友元即可

全局函数类外实现 - 需要提前让编译器知道全局函数的存在

```c++
#include <iostream>
#include <string>
using namespace std;

//通过全局函数打印Person信息
//提前知道Person存在
template<class T1, class T2>
class Person;

//类外实现
template<class T1, class T2>
void PrintPerson2(Person<T1, T2> p) {
	cout << "类外实现——姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person {
	//全局函数 类内实现
	 friend void PrintPerson(Person<T1, T2> p) {
		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
	}
	 //全局函数 类内实现 加空模板参数列表
	 //如果全局函数 是类外实现需要提前让编译器知道全局函数的存在
	 friend void PrintPerson2<>(Person<T1, T2> p);
public:
	Person(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};



//1.全局函数 类内实现
void test01() {
	Person<string, int> p("Tom", 10);
	PrintPerson(p);
}
//2.全局函数类外实现
void test02() {
	Person<string, int> p("Tom", 10);
	PrintPerson2(p);
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：建议全局函数做类内实现，用法简单，而且编译器可以直接识别

#### 1.3.9类模板案例

案例描述：实现一个通用的数组类，要求如下：

- 可以对内置数据类型以及自定义数据类型的数据进行存储
- 将数组中的数据存储到堆区
- 构造函数中可以传入数组的容量
- 提供对应的拷贝构造函数以及operator=防止前拷贝问题
- 提供尾插法和尾删法对数组中的数据进行增加和删除
- 可以通过下标的方式访问数组中的元素
- 可以获取数组中当前元素个数和数组的容量

未完成————————————————————————

## 2.STL初识

### 2.1STL的诞生

- 长久以来，软件界一直希望建立一种可重复利用的东西
- C++的**面向对象**和**泛型编程**思想，目的就是复用性的提升
- 大多情况下，数据结构和算法都未能有一套标准，导致被迫从事大量重复工作
- 为了建立数据结构和算法的一套标准，诞生了STL

### 2.2STL基本概念

- STL（Standard Template Library，标准模板库）
- STL从广义上分为：**容器（container）、算法(algorithm)、迭代器(iterator)**
- **容器**和**算法**之间通过**迭代器**进行无缝连接
- STL几乎所有代码都采用了模板类或者模板函数

### 2.3STL六大组件

STL大体分为六大组件，分别是：容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器

1.容器：各种数据结构，如vector、list、deque、set、map等，用来存放数据

2.算法：各种常用的算法，如sort、find、copy、for_each等

3.迭代器：扮演了容器与算法之间的胶合剂

4.仿函数：行为类似函数，可作为算法的某种策略

5.适配器：一种用来修饰容器或者仿函数或迭代器接口的东西

6.空间配置器：负责空间的配置与管理

### 2.4STL中容器、算法、迭代器

**容器**：置物之所也

STL容器就是将运用**最广泛的一些数据结构**实现出来

常用的数据结构：数组、链表、树、栈、队列、集合、映射表等

这些容器分为**序列式容器**和**关联式容器**两种：

​			**序列式容器**：强调值的排序，序列式容器中每个元素均有固定的位置

​			**关联式容器：**二叉树结构，个元素之间没有严格的物理上的顺序关系



**算法**：问题之解法也

有限的步骤，解决逻辑或数学上的问题，这一门学科我们叫做算法(algorithm)

算法分为：**质变算法**和**非质变算法**

质变算法：是指运算过程中会更改区间内的元素的内容。例如拷贝、替换、删除等等

非质变算法：是指运算过程中不会更改区间内的元素的内容。例如查找、计数、遍历等等



**迭代器**：容器和算法之间粘合剂

提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方式

**每个容器都有自己专属的迭代器**

迭代器使用非常类似于指针，初学阶段我们可以先理解迭代器为指针



迭代器种类：

| 种类           | 功能                                                     | 支持运算                                |
| -------------- | -------------------------------------------------------- | --------------------------------------- |
| 输入迭代器     | 对数据的只读访问                                         | 只读，支持++、==、！=                   |
| 输出迭代器     | 对数据的只写访问                                         | 只写，支持++                            |
| 前向迭代器     | 读写操作，并能够向前推进迭代器                           | 读写，支持++、--、！=                   |
| 双向迭代器     | 读写操作，并能够向前和向后操作                           | 读写，支持++、--                        |
| 随机访问迭代器 | 读写操作，可以以跳跃的方式访问任意数据，功能最强的迭代器 | 读写，支持++、--、[n]、-n、<、<=、>、>= |

常用的容器中迭代器种类为双向迭代器、和随机访问迭代器

### 2.5容器算法迭代器初识

了解STL中容器、算法、迭代器概念之后，我们利用代码感受STL的魅力

STL中最常用的容器为vector,可以理解为数组，下面我们将学习如何向这个容器中插入数据、并遍历这个容器

#### 2.5.1vector存放内置数据类型

容器： `vector`

算法： `for_each`

迭代器：`vector<int>::iterator`

```c++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//vector容器

void myprint(int val) {
	cout << val << endl;
}
void test01() {
	vector<int> v;
	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin(); //起始迭代器  指向容器中第一个元素
	vector<int>::iterator itEnd = v.end(); //结束迭代器  指向容器中结束的下一个位置
	//第一种遍历方式
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}
	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	//第三种遍历方式 利用STL提供遍历算法
	for_each(v.begin(), v.end(), myprint);
}


int main() {
	test01();
	system("pause");
	return 0;
}
```

#### 2.5.2vector容器中自定义数据类型

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector容器中自定义数据类型

class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->age = age;
	}
	string m_name;
	int age;
};

void test01() {
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 10);
	Person p3("ccc", 10);
	Person p4("ddd", 10);
	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	//遍历容器中的数据
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名："<< (*it).m_name << " 年龄：" << (*it).age << endl;
		cout << "姓名：" << it->m_name << " 年龄：" << it->age << endl;
	}
}


//存放数据类型 指针

void test02() {
	vector<Person*> v;
	Person p1("aaa", 10);
	Person p2("bbb", 10);
	Person p3("ccc", 10);
	Person p4("ddd", 10);
	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	//遍历容器
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名：:" << (*it)->m_name << " 年龄：" << (*it)->age << endl;
	}
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

#### **2.5.3vector容器嵌套容器**

学习目标：容器中嵌套容器，我们将所有数据进行遍历输出

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector容器中自定义数据类型

void test01() {
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	//向小容器中添加数据
	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器，把所有数据遍历一遍
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
		//(*it)------容器vector<int>
		for (vector<int>::iterator it1 = (*it).begin(); it1 != (*it).end(); it1++) {
			cout << *it1 << endl;
		}
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

## 3.STL- 常用容器

### 3.1string容器

#### 3.1.1string基本概念

**本质：**

- string是C++风格的字符串，而string本质上是一个类

**string和char *区别：**

- char *是一个指针
- string是一个类，类内部封装了char *, 管理这个字符串，是一个char *型的容器。

**特点：**

string类内封装了很多成员方法

例如：查找find, 拷贝copy,删除delete,替换replace, 插入insert

string管理char *所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

#### 3.1.2string构造函数

构造函数原型：

- `string();`                                      //创建一个空的字符串  例如：string str;

  `string(const char& str);`      //使用字符串s初始化

- `string(const string& str)`    //使用一个string对象初始化另一个string对象

- `string(int n, char c);`           //使用n个字符c初始化

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//string的构造函数

/*
-string();                                      //创建一个空的字符串  例如：string str;
string(const char& str);      //使用字符串s初始化
-string(const string& str)    //使用一个string对象初始化另一个string对象
- string(int n, char c);           //使用n个字符c初始化
*/
void test01() {

	string s1; //默认构造
	const char *str = "hello world";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);//拷贝函数
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：string的多种构造方式没有可比性，灵活使用即可

#### 3.1.3string赋值操作

功能描述：

- 给string字符串进行赋值

赋值的函数原型：

- `string& operator=(const char* s);`               //char*类型字符串 赋值给当前的字符串
- `string& operator=(const string& s);`          //把字符串s赋给当前的字符串
- `string& operator=(char c);`                             //字符串赋值给当前的字符串
- `string& assgin(const char *s);`                     //把字符串s赋给当前的字符串
- `string& assign(const char *s, int n);`      //把字符串s的前几个字符赋给当前的字符串
- `string& assign(const string &s);`                //把字符串s赋给当前字符串
- `string& assign(int n, char c);`                    //用n个字符c赋值给当前字符

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

/*
-string& operator=(const char* s);               //char*类型字符串 赋值给当前的字符串
-string& operator=(const string& s);          //把字符串s赋给当前的字符串
-string& operator=(char c);                             //字符串赋值给当前的字符串
-string& assgin(const char *s);                     //把字符串s赋给当前的字符串
-string& assign(const char *s, int n);      //把字符串s的前几个字符赋给当前的字符串
-string& assign(const string &s);                //把字符串s赋给当前字符串
-string& assign(int n, char c);                    //用n个字符c赋值给当前字符
*/

void test01() {
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;
	string str2 = str1;
	cout << "str2 = " << str2 << endl;
	string str3;
	str3= 'a';
	cout << "str3 = " << str3 << endl;
	string str4;
	str4.assign("hello C++");
	cout << "str4 = " << str4 << endl;
	string str5;
	str5.assign("world + world", 5);
	cout << "str5 = " << str5 << endl;
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;
	string str7;
	str7.assign(10, 'a');
	cout << "str7 = " << str7 << endl;

	

}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 3.1.4string字符串拼接

**功能描述：**

- 实现在字符串末尾拼接字符串

**函数原型：**

- `string& operator+=(const char* str);`             //重载+=操作符
- `string& operator+=(const char c);`                   //重载+=操作符
- `string& operator+=(const string& str);`        //重载+=操作符
- `string& append(const char *s)`                           //把字符串s连接到当前字符串结尾
- `string& append(const char *s, int n)`             //把字符串s的前n个字符连接到当前字符串结尾
- `string& append(const string &s)`                        //同operator+=(const string& str)
- `string& append(const string &s, int pos, int n) `   //字符串s中从pos开始的n个字符连接到字符串结尾

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//string的构造函数

/*
- string& operator+=(const char* str);            //重载+=操作符
- string& operator+=(const char c);               //重载+=操作符
- string& operator+=(const string& str);          //重载+=操作符
- string& append(const char *s)                   //把字符串s连接到当前字符串结尾
- string& append(const char *s, int n)            //把字符串s的前n个字符连接到当前字符串结尾
- string& append(const string &s)                 //同operator+=(const string& str)
- string& append(const string &s, int pos, int n) //字符串s中从pos开始的n个字符连接到字符串结尾

*/
void test01() {
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;
	str1 += '!';
	cout << "str1 = " << str1 << endl;
	string str2 = "LOL!";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append("love");
	cout << "str3 = " << str3 << endl;
	str3.append("game abcde", 4);
	cout << "str3 = " << str3 << endl;

	str3.append(str2);
	cout << "str3 = " << str3 << endl;

	str3.append(str2, 0, 3);
	cout << "str3 = " << str3 << endl; //只截取三个
}

int main() {
	test01();
	system("pause");
	return 0;
}

```



#### 3.1.5string查找和替换

**功能描述：**

- 查找：查找指定字符串是否存在
- 替换：在指定的位置替换字符串

**函数原型：**

- `int find(const string& str, int pos = 0)const;`       //查找str第一次出现位置，从pos开始查找
- `int find(const char* s, int pos = 0)const;`               //查找s第一次出现位置，从pos开始查找
- `int find(const char* s, int pos, int n) const;`      //从pos位置查找s的前n个字符第一次位置
- `int find(const char c, int pos = 0) const;`               //查找字符c第一次出现位置
- `int rfind(const string& str, int pos = npos) const;`   //查找str最后一次出现位置，从pos开始查找
- `int rfind(const char* s, int pos = npos) const;`     //查找s最后一次出现位置，从pos开始查找
- `int rfind(const char* s, int pos, int n) const;`     //从pos查找s的前n个字符最后一次出现
- `int rfind(const char* s, int pos = 0) const;`            //查找字符c最后一次出现
- `string& replace(int pos,int n, const string& str);` //替换从pos开始n个字符为字符串str
- `string& replace(int pos,int n, const char* str); `		//替换从pos开始n个字符为字符串s

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//string的查找和替换

//1.查找
void test01() {
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1) {
		cout << "未找到字符串" << endl;
	}
	else {
		cout << "pos = " << pos << endl;
	}
	//rfind 从左往右  find从右往左
	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;
}

//2.替换
void test02() {

	string str1 = "abcdefg";
	str1.replace(1, 3, "11111");
	cout << "str1 = " << str1 << endl;
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

```

**总结：**

- find查找是从左到右，rfind从右往左
- find找到找到字符串后返回查找的第一个字符位置，找不到返回-1
- replace在替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串

#### 3.1.6string字符串比较

**功能描述：**

- 字符串之间的比较

**比较方式：**

- 字符串比较是按ASCII码进行对比

= 返回 0

\> 返回  1

< 返回 -1

**函数原型：**

- `int compare(const string &s) const;`     //与字符串s比较
- `int compare(const char *s) const`           //与字符串s比较

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//字符串比较

void test01() {

	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0) {
		cout << "str1 == str2" << endl;
	}
	else if (str1.compare(str2)) {
		cout << "str1 大于 str2" << endl;
	}
}



int main() {
	test01();
	//test02();
	system("pause");
	return 0;
}

```

**总结：**字符串对比主要用于比较两个字符串是否相等，判断谁大谁小的意义不大

#### 3.1.7string字符获取

string中单个字符存取方式有两种

- `char& operator[](int n);` //通过[]方式取字符
- `char& at(int n);`                  //通过at方式获取字符

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//string字符存取

void test01() {
	string str = "hello";

	//1. 通过[]访问单个字符
	for (int i = 0; i < str.size(); i++) {
		cout << str[i] << " ";
	}
	cout << endl;
	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++) {
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改单个字符
	str[0] = 'x';
	cout << "str = " << str << endl;
	str.at(1) = 'p';
	cout << "str = " << str << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}

```

**总结：**string字符串中单个字符存取有两种方法， 利用[] 或at

#### 3.1.8string插入和删除

**功能描述：**

- 对string字符串进行插入和删除字符操作

**函数原型：**

- `string& insert(int pos, const char* s)'`     //插入字符串
- `string& insert(int pos, const string& str)`  //插入字符串
- `string& insert(int pos, int n, char c);`  //在指定位置插入n个字符c
- `string& erase(int pos, int n = npos);`    //删除从pos开始的n个字符

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//字符串 插入和删除

void test01() {
	string str = "hello";
	//插入
	str.insert(1, "222");
	cout << "str = " << str << endl;

	//删除
	str.erase(1, 3); //从哪一位置起删除几个
	cout << "str = " << str << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}

```

**总结**：插入和删除的起始下标都是从0开始的

#### 3.1.9string子串

**功能描述：**

- 从字符串中获取想要的子串

**函数原型：**

- `string substr(int pos = 0, int n = npos) const;`  //返回有pos开始的n个字符组成的字符串

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//字符串 子串

void test01() {
	string str = "abcdefg";
	string sub = str.substr(1, 3);
	cout << "sub = " << sub << endl;
}

//使用操作
void test02() {
	string email = "zhangsan@qq.com";
	//从邮箱地址中 获取 用户信息
	int pos = email.find('@');
	string uesr = email.substr(0, pos);
	cout << "uesr = " << uesr << endl;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

```

总结：灵活的运用求子串功能，可以在实际开发中获取有效的信息

### 3.2vector容器

#### 3.2.1vector基本概念

功能：

- vector数据结构和**数组非常相似**，也称为**单端数组**

vector与普通数组区别：

- 不同之处在于数组是静态空间，而vector可以**动态扩展**

动态扩展：

- 并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间
- vector容器的迭代器是支持随机访问的迭代器

#### 3.2.2vector构造函数

**功能描述：**

- 创建vector容器

**函数原型：**

- `vector<T> v;`                                  //采用模板实现类实现，默认构造函数
- `vector(v.begin(), v.end());`   //将v[begin(), end()]区间中的元素拷贝给本身
- `vector(n, elem);`                          //构造函数将n个elem拷贝给本身
- `vector(const vector &vec);`     //拷贝构造函数

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector容器构造

void printfVector(vector<int> &v) {
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


void test01() {
	vector<int>v1; // 1.默认构造
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printfVector(v1);

	//2.区间方式进行构造
	vector<int> v2(v1.begin(), v1.end());
	printfVector(v2);

	//3.n个elem方式构造
	vector<int> v3(10, 100);
	printfVector(v3);

	//拷贝构造
	vector<int> v4(v3);
	printfVector(v4);
}

int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：vector的多种构造方式没有可比性灵活使用即可

#### 3.2.3vector赋值操作

**功能描述：**

- 给vector容器进行赋值

函数原型：

- `vector& operator=(const vector &vec);`     //重载等号操作符
- `assign(beg, end);`        //将[beg, end)区间中的数据拷贝赋值给本身
- `assign(n, elem);`          //将n个elem拷贝赋值给本身       

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector赋值操作

void printfVector(vector<int> &v) {
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printfVector(v1);
	//1.赋值 operator=
	vector<int> v2;
	v2 = v1;
	printfVector(v2);

	//2.assign
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printfVector(v2);

	//3.n个elem 方式赋值
	vector<int> v4;
	v4.assign(10, 100);
	printfVector(v4);
}

int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：vector赋值方式比较简单，使用operator= , 或者assgin都可以

#### 3.2.4vector容量和大小

功能描述：

- 对vector容器的容量和大小操作

函数原型：

- `empty();`                                  //判断容器是否为空

- `capacity();`                            //容器的容量

- `size();`                                    //返回容器中元素的个数

- `resize(int num);`                  //返回指定容器的长度为num，若容器变长，则以默认值填充新位置

  ​							                         //如果容器变短，则末尾超出容器长度的元素被删除

- `resize(int num, elem); `      //返回指定容器的长度为num，若容器变长，则以elem填充新位置

  ​							                         //如果容器变短，则末尾超出容器长度的元素被删除

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector赋值操作

void printfVector(vector<int> &v) {
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printfVector(v1);
	if (v1.empty()) {
		cout << "v1为空" << endl;
	}
	else {
		cout << "v1不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}
	//重新指定大小
	v1.resize(15);
	
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;
	printfVector(v1); //默认用零填充
	
	
	v1.resize(20, 35);
	cout << "v1的容量为：" << v1.capacity() << endl;
	cout << "v1的大小为：" << v1.size() << endl;
	printfVector(v1);
	
	v1.resize(5);
	printfVector(v1);
}



int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：

- 判断是否为空 -- empty
- 返回元素个数 -- size
- 返回容器容量 -- capacity
- 重新指定大小 -- resize

#### 3.2.5vector插入和删除

**功能描述：**

- 对vector容器进行插入、删除操作

**函数原型：**

- `push_back(ele);`                                         //尾部插入元素ele
- `pop_back();`                                                 //删除最后一个元素
- `insert(const_iterator pos, ele);`     //迭代器指向位置pos插入元素ele
- `insert(const_itreator pos, int count, ele);`  //迭代器指定位置pos插入count个元素ele

- `erase(const_itreator pos);`      //删除迭代器指定的元素
- `erase(const_itreator start, const_itreator end)` //删除迭代器从start到end之间的元素
- `clear();`                                            //删除容器中所有元素

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector插入和删除

/*
- push_back(ele);                                     //尾部插入元素ele
- pop_back();                                         //删除最后一个元素
- insert(const_iterator pos, ele);                    //迭代器指向位置pos插入元素ele
- insert(const_itreator pos, int count, ele);         //迭代器指定位置pos插入count个元素ele
- erase(const_itreator pos);                          //删除迭代器指定的元素
- erase(const_itreator start, const_itreator end)     //删除迭代器从start到end之间的元素
- clear();                                            //删除容器中所有元素
*/

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);//遍历

	v1.pop_back();//尾删
	printVector(v1);

	//插入
	v1.insert(v1.begin() + 2, 100); //第一个参数是迭代器, 可以在指定位置插入
	printVector(v1);
	v1.insert(v1.begin(), 2, 10000);//插入两个一千
	printVector(v1);
	//删除
	v1.erase(v1.begin());
	printVector(v1);
	v1.erase(v1.begin(), v1.end());
	printVector(v1);
}

int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：

- 尾插 -- push_back
- 尾删 -- pop_back
- 插入 -- insert(位置迭代器)
- 删除 -- erase(位置迭代器)
- 清空 -- clear

#### 3.2.6vector数据存取

功能描述：

- 对vector中的数据存取操作

函数原型：

- `at(int idx);`      //返回索引idx所指的数据
- `operator[];`        //返回索引idx所指的数据
- `front();`              //返回容器中第一个数据元素
- `back();`                //返回容器中最后一个数据元素

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector数据存取

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	vector<int> v1;
	for (int i = 10; i <= 20; i++) {
		v1.push_back(i);
	}
	//利用[]访问数组中的元素
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;
	//利用成员函数at访问
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//获取第一个元素
	cout << "第一个元素：" << v1.front() << endl;
	//获取最后一个元素
	cout << "最后一个元素：" << v1.back() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：

- 除了迭代器获取vector容器中元素，[]和at也可以
- front返回容器第一个元素
- back返回容器最后一个元素

#### 3.2.7vector互换容器

**功能描述：**

- 实现两个容器内元素进行互换

**函数原型：**

- `swap(vec);`          //将vec与本身的元素互换

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector容器互换

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
//1.基本使用
void test01() {
	vector<int> v1;
	for (int i = 10; i <= 20; i++) {
		v1.push_back(i);
	}
	cout << "交换前v1：";
	printVector(v1);
	vector<int> v2;
	for (int i = 30; i <= 40; i++) {
		v2.push_back(i);
	}
	cout << "交换前v2：";
	printVector(v2);
	v1.swap(v2);
	cout << "交换后：" << endl;
	cout << "v1容器：";
	printVector(v1);
	cout << "v2容器：";
	printVector(v2);
}
//2.实际用途
//巧用swap可以收缩内存空间
void test02() {
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
	v.resize(3); //重新指定大小
	cout << "v的容量为：" << v.capacity() << endl; //浪费空间
	cout << "v的大小为：" << v.size() << endl;

	//巧用swap收缩空间
	vector<int>(v).swap(v); //匿名对象  自动回收空间
	cout << "v的容量为：" << v.capacity() << endl; 
	cout << "v的大小为：" << v.size() << endl;
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

```

总结：swap可以使两个容器互换，可以达到实用的收缩内存效果

#### 3.2.8vector预留空间

功能描述：

- 减少vector在动态扩展时的扩展次数

函数原型：

- `reserve(int len);`    //容器预留len个元素长度，预留位置不初始化，元素不可访问

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//vector容器 预留空间

void printVector(vector<int> &v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int> v;
	//1利用reserve预留空间
	v.reserve(100000);
	int num = 0;//统计开辟次数
	int *p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main() {
	test01();
	
	system("pause");
	return 0;
}

```

总结：如果数据量较大可以一开始利用reserve预留空间

### 3.3deque容器

#### 3.3.1deque容器基本概念

**功能：**

- 双端数组，可以对头端进行插入删除操作

**deque与vector区别：**

- vector对于头部的插入删除效率低，数据量越大，效率越低
- deque相对而言，对头部的插入删除速度会比vector快
- vector访问元素时的速度会比deque快， 这和两者内部实现有关

**deque内部工作原理：**

deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据

中控器维护的是每个缓冲区的地址，使的使用deque时像一片连续的内存空间

[![yf4kGV.png](https://s3.ax1x.com/2021/02/19/yf4kGV.png)](https://imgchr.com/i/yf4kGV)

- deque容器的迭代器也是支持随机访问的



#### 3.3.2deque构造函数

**功能描述：**

- duque容器构造

**函数原型：**

- `deque<T> deq;       `                          //默认构造形式
- `deque(bed, end);`                      //构造函数将[beg,end]区间中的元素拷贝给本身
- `deque(n, elem);`                        //构造函数将n个elem拷贝给本身
- `deque(const deque &deq);`      //拷贝构造函数

```c++
#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <deque>
using namespace std;
//deque容器

void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*it = 100; 容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	deque<int>d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	printDeque(d1);

	deque<int> d3(10, 100);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);
}
int main() {
	test01();

	system("pause");
	return 0;
}

```

总结：deque容器和vector容器的构造方式几乎一样，灵活使用即可。

#### 3.3.3deque赋值操作

功能描述：

- 给deque容器进行赋值

函数原型：

- `deque& operator=(const deque &deq);`     //重载等号操作符
- `assign(beg, end);`                              //将[beg, end]区间中的数据拷贝赋值给本身
- `assgin(n, elem);`                                //将n个elem拷贝赋值给本身

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
//deque容器赋值操作

void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*it = 100; 容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	deque<int>d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	//等号operator=赋值

	deque<int> d2;
	d2 = d1;
	printDeque(d1);
	//assign 赋值
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	printDeque(d3);

	deque<int> d4;

	d4.assign(10, 50);
	printDeque(d4);
}
int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：deque赋值操作也与vector相同，需要熟练掌握

#### 3.3.4deque大小操作

**功能描述：**

- 对deque容器的大小操作

**函数原型：**

- `deque.empty();`               //判断容器是否为空

- `deque.size();`                 //返回容器中元素的个数

- `deque.resize(num);`                //返回指定容器的长度为num，若容器变长，则以默认值填充新位置

  ​							                           //如果容器变短，则末尾超出容器长度的元素被删除

- `deque.resize(num, elem);`   //返回指定容器的长度为num，若容器变长，则以elem填充新位置

  ​							                          //如果容器变短，则末尾超出容器长度的元素被删除

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
//deque容器大小操作

void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*it = 100; 容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);
	if (d1.empty()) {
		cout << "d1为空！" << endl;
	}
	else {
		cout << "d1不为空！" << endl;
	}
	cout << "d1的大小为：" << d1.size() << endl;
	d1.resize(8);
	d1.resize(15, 10);
	printDeque(d1);
}
int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：

- deque没有容量的概念
- 判断是否为空  -- empty
- 返回元素个数  -- size
- 重新指定个数  -- resize

#### 3.3.5deque插入和删除

**功能描述：**

- 向deque容器中插入和删除数据

函数原型：

两端插入操作：

- `push_back(elem);`               //在容器尾部添加一个数据
- `push_front(elem);`             //在容器头部添加一个数据
- `pop_back();`                          //删除容器最后一个元素
- `pop_front();`                        //删除容器第一个数据

指定位置操作：

- `insert(pos, elem);`             //在pos位置插入一个elem元素的拷贝，返回新数据的位置
- `insert(pos, n, elem);`       //在pos位置插入n个elem数据，无返回值
- `insert(pos, beg, end);`     //在pos位置插入[beg, end]区间的数据，无返回值
- `clear();`                                  //清空容器的所有数据
- `erase(beg, end);`                 //删除[beg, end]区间的数据，返回下一个数据的位置
- `erase(pos);`                            //删除pos位置的数据，返回下一个数据的位置

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
//deque容器插入和删除

//两端操作

void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*it = 100; 容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	deque<int> d1;
	//尾插
	for (int i = 0; i < 5; i++) {
		d1.push_back(i);
	}
	//头插
	for (int i = 6; i < 10; i++) {
		d1.push_front(i);
	}
	printDeque(d1);
	//尾删
	d1.pop_back();
	//头删
	d1.pop_front();
	printDeque(d1);
}

void test02() {
	//指定位置进行删除
	deque<int> d1;
	//尾插
	for (int i = 0; i < 5; i++) {
		d1.push_back(i);
	}
	//头插
	for (int i = 6; i < 10; i++) {
		d1.push_front(i);
	}
	printDeque(d1);
	d1.insert(d1.begin(), 1000);
	d1.insert(d1.begin(), 2, 500);
	d1.insert(d1.begin() + 3, 3, 666);
	printDeque(d1);

	//区间进行插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	//删除 
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);
	//区间删除
	d1.erase(d1.begin(), d1.end()); //d1.clear();
	printDeque(d1);
}
int main() {
	test01();
	test02();
	system("pause");
	return 0;
}

```

总结：

- 插入和删除提供的位置是迭代器！
- 尾插 -- push_back
- 头插 -- push_front
- 尾删 -- pop_back
- 头删 -- pop_front

#### 3.3.6deque数据存取

功能描述：

- 对deque中的数据的存取操作

函数原型:

- `at(int idx);`                //返回索引idx所指的数据
- `operator[];`                  //返回索引idx所指的数据
- `front();`                        //返回容器中第一个数据元素
- `back();`                           //返回容器中最后一个数据元素

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
//deque容器数据存取

//两端操作

void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*it = 100; 容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	deque<int> d1;
	//尾插
	for (int i = 0; i < 5; i++) {
		d1.push_back(i);
	}
	//头插
	for (int i = 6; i < 10; i++) {
		d1.push_front(i);
	}
	//rintDeque(d1);
	//利用[]方式访问
	for (int i = 0; i < d1.size(); i++) {
		cout << d1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++) {
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素为：" << d1.front() << endl;
	cout << "最后一个元素为：" << d1.back() << endl;
	cout << "第一个元素为：" << *d1.begin() << endl;
}


int main() {
	test01();
	system("pause");
	return 0;
}

```

总结：

- 除了用迭代器获取deque容器中的元素， []和at也都可以
- front返回容器第一个元素
- back返回容器最后一个元素

#### 3.3.7deque排序

功能描述：

- 利用算法实现对deque容器进行排序

算法：

- `sort(iterator beg, iterator end);`          //对beg和end区间内元素进行排序

```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
//deque容器排序

void printDeque(const deque<int> &d) {
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		//*it = 100; 容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	deque<int> d1;
	//尾插
	for (int i = 0; i < 5; i++) {
		d1.push_back(i);
	}
	//头插
	for (int i = 6; i < 10; i++) {
		d1.push_front(i);
	}
	printDeque(d1);
	sort(d1.begin(), d1.end());
	printDeque(d1);
}


int main() {
	test01();
	system("pause");
	return 0;
}

```



### 3.4案例-评委打分

#### 3.4.1案例描述

有五名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。

#### 3.4.2实现步骤

1.创建五名选手，放到vector中

2.遍历vector容器，取出每一名选手， 执行for循环，可以把10个评分存到deque容器中

3.sort算法多deque容器中分数排序，去除最高和最低分

5.获取平均分

```c++
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

//选手类
class Person {
public:
	Person(string name, int sorce) {
		this->m_name = name;
		this->m_sorce = sorce;
	}
	string m_name;//姓名
	int m_sorce; //平均分
};

void creatPerson(vector<Person> &v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		//将创建的Person对象， 放入到容器中
		v.push_back(p);
	}
}

void setSorce(vector<Person>&v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//将评委的分数 放入到deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60; //60 ~ 100
			d.push_back(score);
		}
		cout << "选手：" << it->m_name << endl;
		cout << "分数为：";
		for (deque<int>::iterator did = d.begin(); did != d.end(); did++) {
			cout << *did << " ";
		}
		cout << endl;
		//排序
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		//取平均分
		int num = 0;
		for (deque<int>::iterator did = d.begin(); did != d.end(); did++) {
			num += *did;
		}
		int avg = num / d.size();
		//将平均分 赋值给选手
		it->m_sorce = avg;
	}
}

int main() {
	//1.创建5名选手
	srand(time(0));
	vector<Person> v;
	creatPerson(v);
	//2.给5名选手打分
	setSorce(v);
	//3.显示最后分数
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "姓名：" << it->m_name << " 分数：" << it->m_sorce << endl;
	}
	system("pause");
	return 0;
}
```

### 3.5stack容器

#### **3.5.1stack基本概念**

**概念**：stack是一种先进后出（First In Last Out, FILO）的数据结构，它只有一个出口

栈中只有顶端的元素才可以被外界使用，因此栈不允许被外界访问

栈中进入数据称为 -- 入栈`push`

栈中弹出数据称为 -- 入栈`pop`

#### 3.5.2stack常用接口

**功能描述**：栈容器常用的对外接口



**构造函数**：

- `stack<T> stk;`                     //stack采用模板类实现， stack对象的默认构造形式
- `stack(const stack &stk);`   //拷贝构造函数

**赋值操作**：

- `stack& operator=(const stack &stk);`        //重载等号操作符

**数据存取**：

- `push(elem);`   //向栈顶添加元素
- `pop();`              //从栈顶移除第一个元素
- `top();`               //返回栈顶元素

大小操作：

- `empty();`            //判断堆栈是否为空
- `size();`              //返回栈的大小

```c++
#include <iostream>
#include <stack>
using namespace std;

//栈stack容器

void test01() {

	//特点 符合先进后出
	//入栈
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << "栈的大小：" << s.size() << endl;
}
int main() {

	test01();
	system("pause");
	return 0;
}
```

总结：

- 入栈 -- push
- 出栈 -- pop
- 返回栈顶 -- top
- 判断栈是否为空 -- empty
- 返回栈大小  -- size

### 3.6queue容器

#### 3.6.1queue基本概念

概念：Queue是一种先进先出（FIFO）的数据结构， 他有两个出口

队列容器允许从一段新增元素，从另一端移除元素

队列中只有对头和队尾才可以被外界使用，因此队列不允许遍历行为

队列中进数据称为 -- 入队 `push`

#### 3.6.2queue常用接口

```c++
#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

//队列queue容器


class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01() {
	queue<Person> q;
	Person p1("唐僧", 20);
	Person p2("孙悟空", 30);
	Person p3("猪八戒", 50);
	Person p4("沙僧", 202);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	while (!q.empty()) {
		cout << "对头元素, 姓名：" << q.front().m_name << " 年龄：" << q.front().m_age << endl;
		cout << "队尾元素, 姓名：" << q.back().m_name << " 年龄：" << q.back().m_age << endl;
		q.pop();
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 入队 -- push
- 出队 -- pop
- 返回对头元素 -- front
- 返回队尾元素 -- back
- 判断队是否为空 -- empty
- 返回队列大小 -- size

### 3.7list容器

#### 3.7.1list基本概念

**功能**：将数据进行链式存储

链表(list)是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的

链表的组成：链表有一系列结点组成

结点的组成：一个是存储数据元素的数据域，另一个是数据下一个节点地址的指针域

STL中的链表是一个双向循环链表



由于链表的存储方式并不是连续的内存空间，因此链表list中迭代器只支持前移和后移，属于双向迭代器



**list的优点：**

- 采用动态存储分配，不会造成内存浪费和溢出
- 链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素

**list的缺点：**

- 链表灵活，但是空间（指针域）和时间（遍历）额外消耗较大

list有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的实效，这在vector是不成立的

总结：STL中list和vector是两个最常被使用的容器，各有优缺点



#### 3.7.2list构造函数

**功能描述：**

- 创建list容器

**函数原型：**

- `list<T> lst;`                //list采用模板类实现，对象的默认构造形式
- `list(beg, end);`          //构造函数将[beg, end)区间中的元素拷贝给本身
- `list(n, elem);`            //构造函数将n个elem拷贝给本身
- `list(const list &lst);`    //拷贝构造函数

```c++
#include <iostream>
#include <list>
using namespace std;

//list容器构造函数
void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printfList(L1);
	//区间构造
	list<int> L2(L1.begin(), L1.end());
	printfList(L2);

	//拷贝构造
	list<int>L3(L2);
	printfList(L3);

	//n个elem
	list<int>L4(10, 100);
	printfList(L3);
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：list构造方式同其他几个STL常用容器，熟练掌握即可

#### 3.7.3list赋值和交换

**功能描述：**

- 给list容器进行赋值，以及交换list容器

**函数原型：**

- `assign(beg, end);`               //将[beg, end)区间中的数据拷贝赋值给本身
- `assign(n, elem);`                 //将n个elem拷贝赋值给本身
- `list& operator=(const list &list);`     //重载等号操作符
- `swap(lst);`                              //将lst本身的元素互换

```c++
#include <iostream>
#include <list>
using namespace std;


void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printfList(L1);
	
	list<int> L2;
	L2 = L1; //operator=赋值
	printfList(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());//assign
	printfList(L3);

	list<int> L4;
	L4.assign(10, 100);
	printfList(L4);

}
//交换
void test02() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	list<int> L2;
	L2.assign(10, 100);
	cout << "交换前：" << endl;
	printfList(L1);
	printfList(L2);
	L1.swap(L2);
	cout << "交换后：" << endl;
	printfList(L1);
	printfList(L2);
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}
```

总结：list赋值和交换操作能够灵活运用即可

#### 3.7.4list大小操作

**功能描述：**

- 对list容器的大小进行操作

**函数原型：**

- `size();`                      //返回容器中元素的个数

- `empty();`                     //判断容器中是否为空

- `resize(num);`            		 //返回指定容器的长度为num，若容器变长，则以默认值填充新位置

  ​							                    //如果容器变短，则末尾超出容器长度的元素被删除

- `resize(num, elem)`         //返回指定容器的长度为num，若容器变长，则以elem填充新位置

  ​							                    //如果容器变短，则末尾超出容器长度的元素被删除

```c++
#include <iostream>
#include <list>
using namespace std;

//list容器大小操作
void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printfList(L1);

	//判断是否为空
	if (!L1.empty()) {
		cout << "L1不为空" << endl;
		cout << "L1大小为：" << L1.size() << endl;
	}
	
	//重新指定大小
	L1.resize(10, 10000);
	printfList(L1);
	L1.resize(2);
	printfList(L1);

}

int main() {
	test01();

	system("pause");
	return 0;
}
```

总结：

- 判断是否为空 -- empty
- 返回元素个数 -- size
- 重新指定个数 -- resize

#### 3.7.5list插入和删除

**功能描述：**

- 对list容器进行数据的插入和删除

**函数原型：**

- `push_back();`                      //在容器尾部加入一个元素
- `pop_back();`                        //删除容器中最后一个元素
- `push_front();`                    //在容器开头插入一个元素
- `pop_front();`                      //在容器开头移除一个元素
- `insert(pos, elem);`          //在pos位置插入elem元素的拷贝，返回新数据的位置
- `insert(pos,n, elem);`      //在pos位置插入n个elem数据，无返回值
- `insert(pos,beg,end);`      //在pos位置插入[beg, end)区间的数据，无返回值
- `clear();`                               //移除容器中所有数据
- `erase(beg,end);`                //删除[beg， end)区间的数据，返回下一个数据的位置
- `erase(pos);`                        //删除pos位置的数据，返回下一个数据的位置
- `remove(elem);`                   //删除容器中所有与elem值匹配的元素

```c++
#include <iostream>
#include <list>
using namespace std;

//list插入和删除
void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//头插
	L1.push_front(50);
	L1.push_front(50);
	L1.push_front(60);
	L1.push_front(70);
	printfList(L1);

	//删除
	L1.pop_back();
	L1.pop_front();
	printfList(L1);

	//insert插入
	list<int> ::iterator it = L1.begin();
	L1.insert(++it, 1000);
	printfList(L1);

	//删除
	it = L1.begin();
	L1.erase(++it);
	printfList(L1);

	//移除
	L1.remove(50);
	printfList(L1);
}
//交换

int main() {
	test01();
	
	system("pause");
	return 0;
}
```

总结：

- 尾插 -- push_back()
- 尾删 -- pop_back()
- 头插 -- push_front()
- 头删 -- pop_front()
- 插入 -- insert
- 删除 -- erase
- 移除 -- remove
- 清空 -- clear

#### 3.7.6list数据存取

**功能描述：**

- 对list容器中数据进行存取

**函数原型：**

- `front();`     //返回第一个元素
- `back();`      //返回最后一个元素

```c++
#include <iostream>
#include <list>
using namespace std;

//list容器  数据存取
void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printfList(L1);

	//L1[0] 不可以用[访问] list容器中的元素
	//L1.at(0)  不可以用at访问
	//原因本质是list链表  不是用连续线性空间存取数据
	cout << "第一个元素:" << L1.front() << endl;
	cout << "最后一个元素:" << L1.back() << endl;
	list<int> ::const_iterator it = L1.begin();
	it++; //支持双向访问
	it++;
	it--;
	//it = it + 1; 不支持随机访问
	cout << *it << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- list容器中不可以通过[]访问或者at访问数据
- 返回第一个元素 -- front
- 返回最后一个元素 -- back

#### 3.7.7list反转和排序

功能描述：

- 将容器中元素反转， 以及将容器中的数据进行排序

函数原型：

- `reverse();`   //反转链表
- `sort();`         //链表排序

```c++
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

//list容器  反转和排序
void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2) {
	//降序
	return v1 > v2;
}

void test01() {
	//创建list容器
	list<int> L1;
	//添加数据
	L1.push_back(10);
	L1.push_back(70);
	L1.push_back(30);
	L1.push_back(60);
	L1.push_back(50);
	printfList(L1);
	//反转
	cout << "反转后：" << endl;
	L1.reverse();
	printfList(L1);
	//排序
	//所有不支持随机访问的迭代器不支持标准算法
	//不支持随机访问迭代器的容器，内部会提供一些对应的算法
	//sort(L1.begin(), L1.end());
	L1.sort();
	cout << "升序排序后:" << endl;
	printfList(L1);
	cout << "降序排序后:" << endl;
	L1.sort(myCompare);
}

int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 3.7.8list排序案例

案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高

排序规则：按照年龄进行排序，如果年龄相同按照身高进行降序

```c++
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

class Person {
public:
	Person(string name, int age, int height) {
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	string  m_name;
	int m_age;
	int m_height;
};

//list容器  排序案例
void printfList(const list<int> &L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(Person &v1, Person &v2) {
	if (v1.m_age == v2.m_age) {
		return v1.m_height > v1.m_height;
	}
	return v1.m_age < v2.m_age;
}

void test01() {
	list<Person> L;
	Person p1("张三", 10, 180);
	Person p2("李四", 12, 185);
	Person p3("赵五", 8, 186);
	Person p4("冯六", 18, 186);
	Person p5("王二", 25, 190);
	Person p6("孙七", 25, 170);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;
	}
	L.sort(myCompare);
	cout << "排序后:" << endl;
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;
	}
}

int main() {
	test01();
	system("pause");
	return 0;
}
```



### 3.8set/multiset容器

#### 3.8.1set基本概念

**简介：**

- 所有元素都会在插入时自动被排序

**本质：**

- set/multiset属于**关联式容器**，底层结构是用**二叉树**



**set和multiset区别：**

- set不允许容器中有重复的元素
- multiset允许容器中有重复的元素

#### 3.8.2set构造与赋值

**功能描述**：创建set容器以及赋值



构造：

- `set<T> st;`                //默认构造
- `set(const set &st);`       //拷贝构造

赋值：

- `set& operator=(const set &st);`       //重载等号操作符

```c++
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

//set容器构造和赋值

void printSet(set<int> &s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	set<int> s1;
	//插入数据只有insert
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(25);
	printSet(s1);//特点  自动排序  不允许插入重复的值

	//拷贝构造
	set<int> s2(s1);
	printSet(s2);

	//重载运算符
	set<int> s3;
	s3 = s2;
	printSet(s3);
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- set容器插入时用insert
- set容器插入数据的数据会自动排序

#### 3.8.3set大小与交换

**功能描述：**

- 统计set容器大小以及交换set容器

**函数原型：**

- `size();`         //返回容器中元素的数量
- `empty();`       //判断容器是否为空
- `swap(st);`     //交换两个集合容器

```c++
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

//set容器大小和交换

void printSet(set<int> &s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	set<int> s1;
	//插入数据只有insert
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(25);
	printSet(s1);//特点  自动排序  不允许插入重复的值

	if (!s1.empty()) {
		cout << "容器不为空！" << endl;
		cout << "容器大小为：" << s1.size() << " "<<  s1.max_size() << endl;
	}
	cout << "交换前s1：" << endl;
	printSet(s1);
	set<int> s2;
	s2.insert(28);
	s2.insert(34);
	s2.insert(45);
	cout << "交换前s2：" << endl;
	printSet(s2);
	s1.swap(s2);
	cout << "交换后s1：" << endl;
	printSet(s1);
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 统计大小 -- size
- 判断是否为空 -- empty
- 交换容器 -- swap

#### 3.8.4set插入和删除

**功能描述：**

- set容器进行插入数据和删除数据

**函数原型：**

- `insert(elem);`            //在容器中插入元素
- `clear();`                       //清楚所有元素
- `erase(pos);`                 //删除pos迭代器所指的元素，返回下一个元素的迭代器
- `erase(beg, end);`       //删除区间[beg, end)的所有元素，返回下一个元素的迭代器
- `erase(elem);`               //删除容器中值为elem的元素

```c++
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

//set容器 插入和删除

void printSet(set<int> &s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	set<int> s1;
	//插入数据只有insert
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(25);
	printSet(s1);//特点  自动排序  不允许插入重复的值
	//删除
	s1.erase(s1.begin());
	s1.erase(30); //重载版本
	s1.erase(s1.begin(), s1.end());
	s1.clear();
	
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 插入 -- insert
- 删除 -- erase
- 清空 -- clear

#### 3.8.5set查找和统计

**功能描述：**

- 对set容器进行查找数据以及统计数据

**函数原型：**

- `find(key);`           //查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();

- `count(key);`         // 统计key的元素个数

```c++
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

//set容器 查找和统计

void printSet(set<int> &s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	set<int> s1;
	//插入数据只有insert
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(25);
	printSet(s1);//特点  自动排序  不允许插入重复的值
	
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end()) {
		cout << "找到元素：" << *pos << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}

	//统计30的个数
	int num = s1.count(30); //对于set非零即一
	cout << "num :" << num << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 查找 -- find (返回的是迭代器)
- 统计 -- count (对于set ，结果为0或者1)

#### 3.8.6set和multiset

**学习目标：**

- 掌握set和multiset的区别

**区别：**

- set不可以插入重复数据，而multiset可以
- set插入数据的同时会返回插入结果，表示插入是否成功
- multiset不会检测重复数据，因此可以插入重复数据

```c++
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

//set容器 查找和统计

void printSet(set<int> &s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01() {
	set<int> s1;
	s1.insert(10);
	pair<set<int>::iterator, bool> ret = s1.insert(10);
	if (ret.second) {
		cout << "插入成功！" << endl;
	}
	else {
		cout << "插入失败！" << endl;
	}
	

	multiset<int> s2;
	s2.insert(10);
	s2.insert(10);
	cout << "s2中的元素：";
	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 如果不允许插入重复元素数据可以利用set
- 如果需要插入重复数据利用multiset

#### 3.8.7pair对组创建

功能描述：

- 成对出现的数据，利用对组可以返回两个数据

两种创建方式：

- `pair<type, type> p (value1, vlaue2);`
- `pair<type, type> p = make_pair(value1, value2);`

```c++
#include <iostream>
#include <string>
using namespace std;
//pair对组的创建


void test01() {
	//第一种方式
	pair<string, int> p("tom", 20);
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

	pair<string, int> p1;
	p1 = make_pair("tom", 20);
	cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;
	
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

#### 3.8.8set容器排序

学习目标：

- set容器默认排序规则为从小到大，掌握如何改变排序规则

主要技术点：

- 利用仿函数可以改变排序规则

```c++
#include <iostream>
#include <string>
#include <set>
using namespace std;
//set容器排序
class myCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void test01() {
	set<int> s1;
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(50);
	s1.insert(10);
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//指定排序规则为从大到小
	set<int,myCompare> s2;
	s2.insert(40);
	s2.insert(20);
	s2.insert(30);
	s2.insert(50);
	s2.insert(10);
	for (set<int,myCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

存放自定义数据类型

```c++
#include <iostream>
#include <string>
#include <set>
using namespace std;
//set容器排序，存放自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
class myCompare {
public:
	bool operator()(const Person &v1, const Person &v2) {
		return v1.m_age > v2.m_age;
	}
};

void test01() {
	//自定义数据类型 都会指定排序规则
	set<Person, myCompare> s1;
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	for (set<Person>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



### 3.9map/multimap容器

#### 3.9.1map基本概念

**简介：**

- map中所有元素都是pair
- pair中第一个元素为key(键值)， 起到索引作用第二个元素为value(实值)
- 所有元素都会根据元素的键值自动排序

**本质：**

- map/multimap属于关联式容器，底层结构是用二叉树实现

**优点：**

- 可以根据key值快速找到valur值

map和multimap区别：

- map不允许容器中有重复值元素
- multimap允许容器中有重复的key值元素

#### 3.9.2mao构造和赋值

**功能描述：**

- 对map容器进行构造和赋值操作

**函数原型：**

**构造：**

- `map<T1, T2> mp;`        //map默认构造函数
- `map(const map &mp);`   //拷贝构造函数

**赋值：**

- `map& operator=(const map &mp);`   //赋值等号操作符

```c++
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
//map容器 构造和赋值

void printMap(map<int, int> &m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key为："<<it->first << " value为：" << it->second << endl;
	}
}

void test01() {
	//创建容器
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));//匿名对象
	m.insert(pair<int, int>(2, 40));
	m.insert(pair<int, int>(6, 30));
	m.insert(pair<int, int>(4, 70));
	printMap(m);
	//拷贝构造
	map<int, int> m2(m);
	printMap(m2);
	//=赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 3.9.3map大小和交换

**功能描述：**

- 统计map容器大小以及交换map容器

**函数原型：**

- `size();`                  //返回容器中元素的数目
- `empty();`                //判断容器是否为空
- `swap(st);`              //交换两个集合容器

```c++
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
//map容器 大小和交换

void printMap(map<int, int> &m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key为：" << it->first << " value为：" << it->second << endl;
	}
}

void test01() {
	//创建容器
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));//匿名对象
	m.insert(pair<int, int>(2, 40));
	m.insert(pair<int, int>(3, 30));
	printMap(m);
	if (!m.empty()) {
		cout << "不为空！" << endl;
		cout << "m的大小：" << m.size() << endl;
	}
	else {
		cout << "为空！" << endl;
	}
	map<int, int> m2;
	m2.insert(pair<int, int>(2, 10));//匿名对象
	m2.insert(pair<int, int>(3, 40));
	m2.insert(pair<int, int>(4, 30));
	m.swap(m2);
	cout << "交换后m：" << endl;
	printMap(m);

}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 3.9.4插入和删除

功能描述：

- map容器进行插入数据和删除

函数原型：

- `insert(elem);`       //在容器中插入元素
- `clear();`                  //清除所有元素
- `erase(pos);`            //删除pos迭代器所指向的元素，返回下一个元素的迭代器
- `erase(beg,end);`    //删除区间[beg, end）的所有元素， 返回下一个元素的迭代器
- `erase(key);`             //删除容器中值key的元素

```c++
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
//map容器 插入和删除

void printMap(map<int, int> &m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key为：" << it->first << " value为：" << it->second << endl;
	}
}

void test01() {
	//创建容器
	map<int, int> m;
	//插入 第一种
	m.insert(pair<int, int>(1, 10));
	//第二种
	m.insert(make_pair(2, 20));
	//第三种
	m.insert(map<int, int>::value_type(3, 30));
	//第四种
	m[4] = 40;
	printMap(m);
	//cout << m[5] << endl; //按照没有的数，创建出来， 可以用key来访问value
	cout << endl;
	m.erase(m.begin());
	printMap(m);
	cout << endl;
	m.erase(3); //按照key删除
	printMap(m);
	cout << endl;
	m.erase(m.begin(), m.end());
	printMap(m);
	//m.clear();
}
int main() {
	test01();
	system("pause");
	return 0;
}
```



#### 3.9.5查找和统计

功能描述：

- 对map容器进行查找数据以及统计数据

函数原型：

- `find(key);`           //查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回map.end();

- `count(key);`         // 统计key的元素个数

```c++
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
//map容器 查找和统计

void printMap(map<int, int> &m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key为：" << it->first << " value为：" << it->second << endl;
	}
}

void test01() {
	//创建容器
	map<int, int> m;
	m.insert(make_pair(1, 20));
	m.insert(make_pair(2, 30));
	m.insert(make_pair(3, 40));
	m.insert(make_pair(3, 40));
	//查找
	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end()) {
		cout << "查到了元素key = " << pos->first << " value = " << pos->second << endl;
	}
	else {
		cout << "未找到！" << endl;
	}
	//统计
	//map中不允许插入重复的key元素
	int num = m.count(3);
	cout << "num = " << num << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 查找 -- find (返回的是迭代器)
- 统计 -- count (对于map,结果为0或者1)

#### 3.9.6容器排序

**学习目标：**

- map容器默认排序规则为按照key值进行，从小到大，掌握如何改变排序规则

**主要技术点：**

- 利用仿函数，可以改变排序规则

```c++
#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;
//map容器 查找和统计
class myCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

void printMap(map<int, int> &m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key为：" << it->first << " value为：" << it->second << endl;
	}
}

void test01() {
	//创建容器
	map<int, int, myCompare> m;
	m.insert(make_pair(1, 20));
	m.insert(make_pair(2, 30));
	m.insert(make_pair(3, 40));
	m.insert(make_pair(3, 40));
	for (map<int, int, myCompare> ::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << it->first << " value:" << it->second << endl;
	}
}
int main() {
	test01();
	system("pause");
	return 0;
}
```

总结：

- 利用仿函数可以指定map容器的排序规则
- 对于自定义数据类型，map必须要指定排排序规则，同set容器

### 3.10案例 - 员工分组

#### 3.10.1案例描述

- 公司今天招聘了10个员工(ABCDEFGHIJ)，10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有：姓名、工资组成;   部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息插入 key(部门编号)  value(员工)
- 分部门显示员工信息

#### 3.10.2步骤实现

1、创建10名员工，放到vector中

2、遍历vector容器，取出每个员工，进行随机分组

分组后，将员工部门编号作为key,具体员工工作为value，放入到multimap容器中

```c++
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <ctime>
#include <vector>
using namespace std;
#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker {
public:
	string m_name;
	int m_Salary;
};

void creatWorker(vector<Worker> &v) {
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		Worker worker;
		worker.m_Salary = rand() % 10000;
		worker.m_name = "员工";
		worker.m_name += nameseed[i];
		v.push_back(worker);
	}
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m) {
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		int depId = rand() % 3;
		m.insert(make_pair(depId, *it));
	}
}

void showWorkerGourp(multimap<int, Worker> &m) {
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名： " << pos->second.m_name << "工资：" << pos->second.m_Salary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "研发部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名： " << pos->second.m_name << "工资：" << pos->second.m_Salary << endl;
	}
	cout << "-----------------------------" << endl;
	cout << "美术部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名： " << pos->second.m_name << "工资：" << pos->second.m_Salary << endl;
	}
}

int main() {
	srand(time(0));
	vector<Worker> vWorker;
	creatWorker(vWorker);
	multimap<int, Worker> mworker;
	setGroup(vWorker, mworker);
	showWorkerGourp(mworker);
	system("pause");
	return 0;
}
```



## 4.STL- 函数对象

### 4.1函数对象

#### 4.1.1函数对象概念

概念：

- 重载**函数调用操作符**的类，其对象常称为**函数对象**
- **函数对象**使用重载的()时，行为类似函数调用，也叫**仿函数**

本质：

函数对象(仿函数)是一个类，不是一个函数

#### 4.1.2函数对象使用

特点：

- 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
- 函数对象超出普通函数的概念，函数对象可以有自己的状态
- 函数对象可以作为参数传递

```c++
#include <iostream>
#include <string>
using namespace std;

class Myadd {
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	}
};

/*
- 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
- 函数对象超出普通函数的概念，函数对象可以有自己的状态
- 函数对象可以作为参数传递
*/

void test01() {
	Myadd myadd;
	cout << myadd(10, 12) << endl;
}


class Myprint {
public:
	void operator() (string test) {
		 cout << test << endl;
		 this->count++;
	}
	int count = 0; //内部自己状态
};

void test02() {
	Myprint myprint;
	myprint.operator()("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "调用次数为：" << myprint.count << endl;
}

void doprint(Myprint &mp, string s) {
	mp(s);
}

void test03() {
	Myprint myprint;
	doprint(myprint, "hello c++");
}
int main() {
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
```



### 4.2谓词

#### 4.2.1谓词概念

概念：

- 返回bool类型的仿函数称为谓词
- 如果operator()接受一个参数，那么叫做一元谓词
- 如果operator()接受两个参数，那么叫做二元谓词

#### 4.2.2一元谓词

```c++
#include <iostream>
#include <string>d
#include <algorithm>
#include <vector>
using namespace std;

class GreatFive{
public:
	bool operator()(int val) {
		return val > 5;
	}
};

void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	//查找容器中 有没有大于5的数字
	//匿名函数对象GreatFive()
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());
	if (it == v.end()) {
		cout << "未找到" << endl;
	}
	else {
		cout << "找到了大于5的数字" << *it <<  endl;
	}
}

int main() {
	test01();
	
	system("pause");
	return 0;
}
```



#### 4.2.3二元谓词

```c++
#include <iostream>
#include <string>d
#include <algorithm>
#include <vector>
using namespace std;

class Mycompare {
public:
	bool operator()(int val1, int val2) {
		return val1 > val2;
	}
};

void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(30);
	v.push_back(60);
	v.push_back(20);
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	//使用函数对象  改变算法策略  变为排序规则为从大到小
	sort(v.begin(), v.end(), Mycompare());
	cout << "-------------------------" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}
```



### 4.3内建函数对象

#### 4.3.1内建函数对象意义

**概念：**

- STL内建了一些函数对象

**分类：**

- 算术仿函数
- 关系仿函数
- 逻辑仿函数

用法：

- 这些仿函数所产生的对象，用法和一般函数完全相同
- 这些内建函数对象，需要引入头文件`#include <functional>`

#### 4.3.2算术仿函数

**功能描述：**

- 实现四则运算
- 其中negate是一元运算，其他都是二元运算

仿函数原型：

- `template<class T> T plus<T>`     //加法仿函数
- `template<class T> T minus<T>`     //减法仿函数
- `template<class T> T multiplies<T>`     //乘法仿函数
- `template<class T> T divides<T>`     //除法仿函数
- `template<class T> T modulus<T>`     //取模仿函数
- `template<class T> T negate<T>`     //取反仿函数

#### 4.3.3关系仿函数

#### 4.3.4逻辑仿函数

## 5.STL- 常用算法