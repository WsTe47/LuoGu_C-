//#include<iostream>
//using namespace std;
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Pai_Xu(int a[3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = i; j < 3; j++)
//		{
//			if (a[i] > a[j])
//			{
//				swap(a[i], a[j]);
//			}
//		}
//	}
//}
//bool is_triangle(int a, int b, int c)
//{
//	if ((a + b) > c)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	int m[3];
//	cin >> m[0] >> m[1] >> m[2];
//	Pai_Xu(m);
//	int a = m[0];
//	int b = m[1];
//	int c = m[2];
//	int x = 1, y = 1;
//	x = a * a + b * b;
//	y = c*c;
//	if (is_triangle(a, b, c) == false)
//	{
//		cout << "Not triangle" << endl;
//	}
//	else
//	{
//		if (x == y)
//		{
//			cout << "Right triangle" << endl;
//		}
//		if (x > y)
//		{
//			cout << "Acute triangle" << endl;
//		}
//		if (x < y)
//		{
//			cout << "Obtuse triangle" << endl;
//		}
//		if (a == b)
//		{
//			cout << "Isosceles triangle" << endl;
//		}
//		if (a == c)
//		{
//			cout << "Equilateral triangle" << endl;
//		}
//	}
//	return 0;
//}