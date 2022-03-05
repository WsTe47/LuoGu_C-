//#include<iostream>
//using namespace std;
//void swap(int &a, int &b)
//{
//	int temp= a;
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
//int main()
//{
//	int m[3];
//	cin >> m[0] >> m[1] >> m[2];
//	Pai_Xu(m);
//	int x = 0, y = 0, z = 0;
//	char a, b, c;
//	cin >> a >> b >> c;
//	if (a == 'A')
//	{
//		x = 0;
//	}
//	else if (a == 'B')
//	{
//		x = 1;
//	}
//	else
//	{
//		x = 2;
//	}
//	if (b == 'A')
//	{
//		y = 0;
//	}
//	else if (b == 'B')
//	{
//		y = 1;
//	}
//	else
//	{
//		y = 2;
//	}
//	if (c == 'A')
//	{
//		z = 0;
//	}
//	else if (c == 'B')
//	{
//		z = 1;
//	}
//	else
//	{
//		z = 2;
//	}
//	cout << m[x] <<" "<< m[y] << " " << m[z];
//
//	return 0;
//
//}