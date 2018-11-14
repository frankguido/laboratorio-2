class X
{
	int m;
	int mf()
	{
		return m;
	}
	public:
		int f(int i)
		{
			m=i;
			return mf();
		}
};
int main()
{
	X x;
	int y=x.f(2);
	return y;
}
