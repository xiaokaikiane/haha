#include <stdio.h>
#include <stdlib.h>
int Strlen1(char str[])//µÝ¹é
{
	if (str[0] == '\0')
	{
		return 0;
	}
	return 1 + Strlen1(str + 1);
}
int Strlen(char str[])//·ÇµÝ¹é
{
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}
int factor1(int n)//·ÇµÝ¹é
{
	int ret = 1;
	for (int i = 1; i <= n; ++i)
	{
		ret *= i;
	}
	return ret;
}
int factor2(int n)//µÝ¹é
{
	if (n == 1)
	{
		return 1;
	}
	return n * factor2(n - 1);
}
int print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int reverse_string(char*string)
{
	if (*string != '\0')
	{
		reverse_string(string+1);
	}
	printf("%c", *(string));
}
int factor(int n, int k)
{
	if (k > 1)
	{
		return factor(n, k - 1)*n;
	}
	return n;
}
int DigiSum(int n)
{
	if (n > 0)
	{
		return n % 10 + DigiSum(n / 10);
	}
	return 0;
}
int func1(int n)//µÝ¹é
{
	if (n > 2)
	{
		return func1(n - 1) + func1(n - 2);
	}
	return 1;
}
int func(int n)//·ÇµÝ¹é
{
	int s1 = 1; int s2 = 1;
	int s;
	for (int i = 3; i <= n; i++)
	{
		s = s1 + s2;
		s1 = s2;
		s2 = s;
	}
	return s;
}
int main()
{
	char string[]="abcdef";
	printf("%d\n", func(9));
	printf("%d\n", func1(9));
	printf("%d\n", factor(2, 5));
	printf("%d\n", DigiSum(1729));
	reverse_string(string);
	printf("\n");
	printf("%d\n", Strlen(string));
	printf("%d\n", Strlen1(string));
	printf("%d\n", factor1(5));
	printf("%d\n", factor2(5));
	print(1234);
	printf("\n");
system("pause");
return 0;
}