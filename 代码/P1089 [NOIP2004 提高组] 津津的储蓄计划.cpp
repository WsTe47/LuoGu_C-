//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[12];
//	for (int i = 0; i < 12; i++)
//		cin >> a[i];
//	double s = 0, b = 0;		//s为储蓄的，b为手头有的
//	for (int i = 0; i < 12; i++)
//	{
//		b += 300;
//		while (b - a[i] >= 100)
//		{
//			b -= 100;
//			s += 100;
//		}
//		if (b - a[i] < 0)
//		{
//			printf("-%d", i + 1);
//			goto endd;
//		}
//		else
//			b -= a[i];
//	}
//	printf("%0.0f", 1.2 * s + b);
//endd:	return 0;
//}