//#include<iostream>
//using namespace std;
//int* Get_Ns(int n, int a, int d)
//{
//	int x[10000];
//	int m = a;
//	for (int i = 0; i < n; i++)
//	{
//		x[i] = m;
//		m += d;
//	}
//	return x;
//}
//bool Is_Not_In(int x, int* m, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (*(m + 4 * i) == x)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//bool Is_Double(int x)
//{
//	if (x % 2 == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//bool Is_True(int xi, int xj, int* m, int n)
//{
//	if (Is_Double(xi + xj) && Is_Not_In((xi + xj) / 2, m, n))
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
//	int T = 1;
//	cin >> T;
//	int n[100000] , a[100000], d[100000],t[100000];
//	for (int i = 0; i < T; i++)
//	{
//		cin >> n[i] >> a[i] >> d[i];
//	}
//
//	for (int i = 0; i < T; i++)
//	{
//		int* m = Get_Ns(n[i], a[i], d[i]);
//
//
//		
//	}
//
//
//	/*cout << m << endl;
//	cout << *m << endl;
//	cout << *(m + 1) << endl;*/
//
//	return 0;
//}