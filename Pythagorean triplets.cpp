// CPP program to find Pythagoras triplet
// with one side as given number.
#include <bits/stdc++.h>
using namespace std;

// Function, to evaluate the Pythagoras triplet
// with includes 'n' if possible
void evaluate(long long int n)
{

	if (n == 1 || n == 2)
		printf("No Pythagoras Triplet exists");

	else if (n % 2 == 0) {

		// Calculating for even case
		long long int var = 1LL * n * n / 4;
		//printf("Pythagoras Triplets exist i.e. ");
		printf("%lld %lld %lld", n, var - 1, var + 1);
	}

	else if (n % 2 != 0) {

		// Calculating for odd case
		long long int var = 1LL * n * n + 1;
		//printf("Pythagoras Triplets exist i.e. ");
		printf("%lld %lld", var / 2 - 1, var / 2);
	}
}

// Driver function
int main()
{
	long long int n;
    scanf("%lld",&n);
	evaluate(n);
	return 0;
}
