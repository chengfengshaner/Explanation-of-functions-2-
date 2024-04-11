//为什么会有库函数 ?
//1.我们知道在我们学习C语言编程的时候，总是在一个代码编写完成之后迫不及待的想知道结果，
//	想把这个结果打印到我们的屏幕上看看。
//	这个时候我们会频繁的使用一个功能 : 将信息按照一定的格式打印到屏幕上(printf)。
//2.在编程的过程中我们会频繁的做一些字符串的拷贝工作(strcpy)。
//3.在编程是我们也计算，总是会计算n的k次方这样的运算(pow)。
//	像上面我们描述的基础功能，它们不是业务性的代码。
//	我们在开发的过程中每个程序员都可能用的到为了支持可移植性和提高程序的效率，
//	所以C语言的基础库中提供了一系列类似的库函数，方便程序员进行软件开发。

//MSDN(Microsoft Developer Network)
//www.cplusplus.com
//http://en.cppreference.com

//简单的总结，C语言常用的库函数都有:
//IO函数 - 输入输出函数 - printf scanf getchar
//字符串操作函数  - strcmp strlen(求字符串长度)
//字符操作函数 - toupper(小写转大写) 
//内存操作函数 - memcpy memcmp memset
//时间 / 日期函数 - time
//数学函数 - sqrt(开平方) pow(求次方)
//其他库函数

//我们参照文档，学习几个库函数:(教会学生怎么使用文档来学习库函数)。
//strcpy - 拷贝字符串
//	char * strcpy(char * destination, const char * source);
//memset - memory(直接翻译为记忆 - 电脑认为为内存) - memset - 内存设置
//	void * memset(void * ptr, int value, size_t num);
//注:但是库函数必须知道的一个秘密就是:使用库函数，必须包含 #include 对应的头文件。
//这里对照文档来学习上面几个库函数，目的是掌握库函数的使用方法。

#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "你好";// 默认的\0也会被复制过去
	strcpy(arr1, arr2);
	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
	return 0;
}

//Debug版本 - 调试版本
//Release版本 - 测试版本(或发行版本)


int main()
{
	char arr[] = "你好";
	memset(arr, 'x', 4);

	printf("%s\n", arr);

	return 0;
}
