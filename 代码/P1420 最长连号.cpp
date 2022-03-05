//#include<iostream>
//using namespace std;
//int main()
//{
//		int n = 1;
//	cin >> n;
//	int a[10000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int m = 1,num=0;
//	for (int i = 1; i <= n; i++)
//	{
//		if( m >= num)	num = m;
//		if (a[i] - a[i - 1] == 1)	m += 1;
//		else	m = 1;
//	}
//	printf("%d", num);
//
//	return 0;
//}