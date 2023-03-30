unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	gcd;
	int	org_a;
	int	org_b;

	gcd = 0;
	org_a = a;
	org_b = b;
	while (1)
	{
		if (a == 0)
			break;
		b %=a;
		if (b == 0)
			break;
		a %= b;
	}
	gcd = (!b) ? a : b;
	return (gcd ? (org_a / gcd * org_b) : 0);
}
