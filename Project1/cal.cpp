class Cal
{
public:
	int getDivide(int a, int b)
	{
		return a / b;
  }

	int getSum(const int a, const int b)
	{
		return a + b;
  }

	int getGop(const int a, const int b)
	{
		return a * b;
	}

	int getZegop(int a)
	{
		return a * a;
	}

	int getSumSum(const int a, const int b, const int c)
	{
		return getSum(getSum(a, b),c);
	}
};