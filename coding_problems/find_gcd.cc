// https://edabit.com/challenge/BzEQsTSmPATbsZJCR
// Find Greatest Common Divisor (GCD) of two numbers

#include <iostream>

#include <assert.h>

int gcd(int a, int b) {
    int max = (a > b) ? a : b;
    for (int divisor = max; divisor > 0; divisor--) {
        if ((a % divisor == 0) &&
            (b % divisor == 0)) {
                return divisor;
            }
    }
    // fallback
    return 1;	
}

int main()
{
    std::cout << "test starts" << std::endl;
    
    assert(gcd(1, 1) == 1);
    assert(gcd(1, 2) == 1);
    assert(gcd(2, 3) == 1);
    assert(gcd(2, 4) == 2);
    assert(gcd(6, 8) == 2);
    assert(gcd(9, 12) == 3);
    assert(gcd(12, 9) == 3);
    
    std::cout << "test ends" << std::endl;

    return 0;
}


// There was an amazing solution using recursive call
// From Hary
// https://edabit.com/user/qJZsi5rhRnWA38FbA
int gcd_solution(int a, int b) {
	return b > 0 ? gcd_solution(b, a % b) : a;
}

/* Here comes provement I found 
Let a = n * x
Let b = m * x
x is GCD

When a > b, there should be some number, y
a = b * y + a % b

a % b = a - b * y
      = n * x - m * x * y
      = (n - m * y) * x
      
So a % b share GCD with a and b!
( a < b case will be same )

So it is safe to find GCd between a, b and even a % b
Narrowing down (n - m * y) will find out GCD some day because there is a lower limit, 1
*/
