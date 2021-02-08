

# C++基础入门

|   阶段   |      内容      |                 目标                  |      案例      |
| :------: | :------------: | :-----------------------------------: | :------------: |
| 第一阶段 | c+基础语法入门 |  对c++有初步了解，能够有基础编程能力  | 通讯录管理系统 |
| 第二阶段 |  c++核心编程   | 介绍c++面向对象编程，为大型项目做铺垫 |  职工管理系统  |
| 第三阶段 |  c++提升编程   | 介绍c++泛型编程思想以及STL的基础使用  |  演讲比赛系统  |

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

const 修饰指针 ——常量指针， 特点：不可以修改指针的指向可以修改，但指针指向的值

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

```
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
	s->age = 100; s->score = 200; //不可以修改
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

案例描述：

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

1.代码区：存放函数体的二进制代码，有操作系统进行管理

2.全局区：存放全局变量和静态变量以及常量

3.栈区：有编译器自动分配释放，存放函数的参数值，局部变量等

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

​		注意事项：不要返回局部变量的地址，栈区开辟的数据有编译器自动释放

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

## 2.引用

## 3.函数提高

## 4.类与对象

## 5.文件操作