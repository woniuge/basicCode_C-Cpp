// 9cat.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//
//int main()
//{
//    return 0;
//}


/*注册信号处理函数。给你个例子*/
#include <signal.h>
#include <Windows.h>
#include <iostream>
using namespace std;
void cs(int n)
{
	if (n == SIGINT)
	{
		cout << "\n你按下了ctrl+c" << endl;
		signal(SIGINT, cs);
		return;
	}
	if (n == SIGBREAK)
	{
		cout << "\n你按下了ctrl+break,现在退出程序\n";
		exit(0);
	}
}
int main()
{
	char ch;
	signal(SIGINT, cs);  /*注册ctrl+c信号捕获函数*/
	signal(SIGBREAK, cs); /*注册ctrl+break信号捕获函数*/
	while (1)
	{
		cin >> ch;
		Sleep(10);
		if (cin.fail())
		{
			cin.clear();
			cin.sync();
		}
	}
	return 0;
}