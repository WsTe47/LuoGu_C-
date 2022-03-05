//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n = 32 * 60;		//n为提前一天+8h的总分钟数
//	int t = 10;				//t为所需花费的时间
//	int s = 1, v = 1;
//	cin >> s >> v;
//	t += ceil((double)s / (double)v);
//	int t1 = 1, h1 = 0;
//	t1 = n - t;			//t1为第一天0点至出发时所经历的分钟数
//	while (t1 >= 60)
//	{
//		t1 -= 60;
//		h1 += 1;
//	}
//	if (h1 >= 24)
//	{
//		h1 -= 24;
//		cout << "0";
//	}
//	if (t1 < 10)
//	{
//		printf("%d:0%d", h1, t1);
//	}
//	else
//	{
//		printf("%d:%d", h1, t1);
//	}
//}