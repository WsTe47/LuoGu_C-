//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 1, b = 1, c = 1;
//	cin >> a >> b >> c;
//	int m = 1, n = 1;		//m is max, n is min
//	m = a > b ? a : b;
//	m = m > c ? m : c;
//	n = a < b ? a : b;
//	n = n < c ? n : c;
//	for (int i = n; i > 0; i--)
//	{
//		if (n % i ==0 && m % i==0)
//		{
//			n /= i;
//			m /= i;
//		}
//	}
//	printf("%d/%d", n, m);
//	return 0;
//}