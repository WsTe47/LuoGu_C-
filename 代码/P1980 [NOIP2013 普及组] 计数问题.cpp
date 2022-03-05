//#include<iostream>
//using namespace std;
//int get_number(int m, int x)
//{
//	int a = 0;
//	int n = 0;
//	while (m>9)
//	{
//		a = m % 10;
//		m /= 10;
//		if (a == x) n += 1;
//	}
//	if (m == x) n += 1;
//	return n;
//}
//int main()
//{
//	int m = 0, x = 0,n=0;
//	cin >> m >>x;
//	for (int i = 1; i <= m; i++)
//	{
//		n += get_number(i, x);
//	}
//
//	cout << n;
//	return 0;
//}