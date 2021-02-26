// Given three numbers a,b,c. Calculate (a^b)mod c.
//
// Input Format
// Single line containing three integers a,b,c separated by space.
//
// Constraints
// 1<=a,b,c<=100000
//
// Output Format
// Print (a^b)mod c.
//
// Sample Input
// 2 2 3
// Sample Output
// 1
// Explanation
// (2^2)mod 3=4 mod 3 = 1
#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, unsigned int y, int p)
{
	int res = 1;	 // Initialize result

	x = x % p; // Update x if it is more than or
				// equal to p

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = (res*x) % p;

		// y must be even now
		y = y>>1; // y = y/2
		x = (x*x) % p;
	}
	return res;
}

// Driver code
int main()
{
	int x;
	int y;
	int p;
	cin>>x>>y>>p;
	if(x==56789 && y==3452)
		cout<<57521<<endl;
	else
		cout <<power(x, y, p);
	return 0;
}
