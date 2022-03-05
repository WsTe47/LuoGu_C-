//#include<iostream>
//using namespace std;
//bool is_prime(int x)
//{
//	if (x == 2 || x == 3)  
//		return true;
//	else
//	{
//		for (int i = 2; i < x; i++)
//			if (x % i==0) return false;
//		return true;
//	}
//	
//}
//int main()
//{
//	int L = 1, S = 0,n=0;
//	cin >> L;
//	for (int i = 2; i < L; i++)
//	{
//		if (is_prime(i))
//		{
//			if (S +i<= L)
//			{
//				cout << i << endl;
//				n += 1;
//				S += i;
//			}
//			else
//			{
//				break;
//			}
//			
//		}
//	}
//	cout << n;
//
//	return 0;
//
//}