//#include<iostream>
//using namespace std;
//int is_Year(int x)
//{
//	int m = 0;
//	if (x % 4 == 0)
//	{
//		m = 1;
//		if (x % 100 == 0)
//		{
//			m = 0;
//			if (x % 400 == 0)
//			{
//				m = 1;
//			}
//		}
//	}
//	return m;
//}
//int main()
//{
//	int y = 1, m = 1;
//	cin >> y >> m;
//	switch (m)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		printf("%d", 31);
//
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		printf("%d", 30);
//		break;
//	case 2:
//		if (is_Year(y))
//		{
//			printf("%d", 29);
//		}
//		else
//		{
//			printf("%d", 28);
//		}
//	}
//	return 0;
//}