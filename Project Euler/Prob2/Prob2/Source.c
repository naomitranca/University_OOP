#include <stdio.h>
#include <math.h>
//Problem 2
int fib()
{
	int sum = 0;
	int f1 = 1, f2 = 2;
	int aux= f1+f2;
	while (f1 <4000000)
	{
		if (f1 % 2 == 0)
		{
			sum = sum + f1;
		}
		f1 = f2;
		f2 = aux;
		aux = f1 + f2;
	}
	return sum;
}
//Problem 3 
int prime_nr(long long number)
{	
	if (number == 1)
		return 0;
	if (number == 2)
		return 1;
	if (number % 2 == 0)
		return 0;
	for (long long d = 3; d*d<=number; d=d+2)//d*d for big numbers
		if (number % d == 0)
			return 0;
	return 1;
}
int factors(long long number)
{
	int factor = 0;
	long long d = 2;
	for (d = 2; d * d < number;d++)
	{
		if (number % d == 0)
			if (prime_nr(d) == 1 && factor < d)
				factor = d;
	}
	return factor;
}
//Problem 4

int number_to_vector(long long number,int v[])
{
	int i=0;
	while (number)
	{
		v[i] = number % 10;
		number = number / 10;
		i++;
	}
	return i;
}
long long  palindrom(int number,int n,int v[])
{	
	
	int sem = 1;
	int j = n-1;
	for (int i = 0; i <= n/2; i++)
	{
		if (v[i] == v[j] && sem==1)
			j--;
		else if (v[i] != v[j])
		{
			sem = 0;
			break;
		}
	}
	if (sem == 1)
		return 1;
	else
	{
		return 0;
	}
}
int number_generator()
{
	long long max = 0;
	int v[1000];
	long long  a=999, b=999;
	long long number = a*b;
	if (palindrom(number,number_to_vector(number,v),v) == 1)
		return number;
	for (long long  i = a; i >= 100; i--)
	{
		for (long long j = b; j >= 100; j--)
		{
			number = i * j;
			if (palindrom(number, number_to_vector(number, v), v) == 1 && max < number)
				max = number;

		}
	}
	return max;
}
//Problem 5 
int sum_of_every_number(int n)
{
	int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum = sum + pow(i, 2);
		}
		return sum;
}

int  squared_sum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	sum = pow(sum, 2);
	return sum;
}
int diffrence(int n)
{
	int s1 = sum_of_every_number(n);
	int s2 = squared_sum(n);
	if (s1 < s2)
		return s2 - s1;
	else
		return s1 - s2;
}
int the_10001_prime_number()
{
	int i = 0;
	int ct = 0;
	while (ct != 10001)
	{
		if (prime_nr(i) == 1)
			ct++;
		i++;	
	}
	return i-1;
}
// Main for the problems
int main()
{
	printf("%d", fib());//P2
	printf("\n%d", factors(600851475143));//P3
	printf("\n%d", number_generator());//P4
	printf("\n%d", diffrence(100));//Pb5
	printf("\n%d", the_10001_prime_number());//Pb6


	return 0;
}