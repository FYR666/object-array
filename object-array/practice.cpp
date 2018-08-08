#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
using namespace std;
/*对象数组

要求：

定义Coordinate类

数据成员：m_iX和m_iY

分别从栈和堆中实例化长度为三的对象数组

给数组中的元素分别赋值

遍历（把数组中的所有元素访问一遍）两个数组*/

int main(void)
{
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;

	Coordinate *p = new Coordinate[3];
	p->m_iX = 7;
	p[0].m_iY = 9;

	p++;
	p->m_iX = 11;
	p[0].m_iY = 13;

	p[1].m_iX = 15;
	p++;
	p->m_iY = 17;

	for (int i = 0; i < 3; i++)
	{
		cout << "coor_x" << coor[i].m_iX << endl;
		cout << "coor_y" << coor[i].m_iY << endl;
	}
	for (int j = 0; j < 3; j++)
	{
		cout << p[j].m_iX << endl;
		cout << p[j].m_iY<<endl;
	}
	system("pause");
	return 0;
}

