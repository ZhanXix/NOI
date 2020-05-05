#include "leetcode.h"

/*
 * ���㲢���� x ��ƽ���������� x �ǷǸ�������
 * ���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��
 */

int mySqrt(int x)
{
	long low = 0, high = 65536;
	long mid, temp;
	while (1)
	{
		mid = (low + high) / 2;
		temp = mid * mid;
		if (temp > x)
		{
			high = mid;
		}
		else if (temp < x) {
			low = mid;
		}
		else
		{
			return mid;
		}
		if (low == high - 1)
		{
			return low;
		}
	}
}