//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n = 32 * 60;		//nΪ��ǰһ��+8h���ܷ�����
//	int t = 10;				//tΪ���軨�ѵ�ʱ��
//	int s = 1, v = 1;
//	cin >> s >> v;
//	t += ceil((double)s / (double)v);
//	int t1 = 1, h1 = 0;
//	t1 = n - t;			//t1Ϊ��һ��0��������ʱ�������ķ�����
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