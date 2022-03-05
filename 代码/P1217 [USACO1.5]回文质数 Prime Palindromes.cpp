//#include<iostream>
//using namespace std;
//bool is_prime(int x)
//{
//	if (x == 2 || x == 3)  
//		return true;
//	else if (x%2==0)
//	{
//		return false;
//	}
//	else
//	{
//		for (int i = 3; i < x; i+=2)
//			if (x % i==0) return false;
//		return true;
//	}
//	
//}
//bool is_palindromic(int x)
//{
//	int y = 0, t = 0;
//	int m = x;
//	while (m!=0)
//	{
//		t = m % 10;
//		m /= 10;
//		y = y * 10 + t;
//	}
//	if (x == y)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int a = 0, b = 1;
//	cin>>a>>b;
//	for (int i = a; i < b; i++)
//		if (is_prime(i) && is_palindromic(i))
//			/*cout << i << endl;*/
//			printf("%d \n", i);
//	return 0;
//}