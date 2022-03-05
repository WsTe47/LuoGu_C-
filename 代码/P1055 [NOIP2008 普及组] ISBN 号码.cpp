//#include<iostream>
//using namespace std;
//int main()
//{
//	char a[13];
//	for (int i = 0; i < 13; i++)
//	{
//		cin >> a[i];
//	}
//	int m = 0, n = 1;
//	for (int i = 0; i < 12; i++)
//	{
//		if (a[i] == '-')
//		{
//			continue;
//		}
//		else
//		{
//			m += n * ((int)a[i] - (int)'0');
//			n += 1;
//		}
//	}
//	char s;
//	if (m % 11 == 10)
//	{
//		s = 'X';
//	}
//	else
//	{
//		s = char(m % 11 + (int)'0');
//	}
//
//	if (s == a[12])
//	{
//		cout << "Right";
//	}
//	else
//	{
//
//		a[12] = s;
//		for (int i = 0; i < 13; i++)
//		{
//			cout << a[i];
//		}
//	}
//	return 0;
//}