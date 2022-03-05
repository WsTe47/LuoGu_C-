//#include<iostream>
//using namespace std;
//bool is_prime(int x)
//{
//	if (x == 2 || x == 3)
//		return true;
//	else if (x % 2 == 0)
//	{
//		return false;
//	}
//	else
//	{
//		for (int i = 3; i < x; i += 2)
//			if (x % i == 0) return false;
//		return true;
//	}
//}
//
//int main()
//{
//	int n = 1;
//	cin >> n;
//	int m = 0;
//	for (int i = 2; i < n / 2; i++)
//		if (is_prime(i)&& n % i == 0)
//		{
//			m = n / i;
//			break;
//		}
//	cout << m;
//	return 0;
//}