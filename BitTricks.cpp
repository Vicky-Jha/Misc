#include <bits/stdc++.h>
#define lli long long int
using namespace std;


class BitwiseOperations
{

public : 

void setKthBit(int& x, int k);

void unsetKthBit(int& x, int k);

void toggleKthBit(int& x, int k);

bool checkParityOfKthBit(const int& x, int k);

bool checkParity(const int& x);

int countLeftZeros(const int& x);

int coutRightZeros(const int& x);

int posOf1stSetBitFromLeft(const int& x);

int posOf1stSetBitFromRight(const int& x);

int countSetBits(const int& x);

int differenceBetween(int& a, int& b);

int valueOfLastSetBit(int& x);

void eraseLowestBit(int& x);

void swapInplace(int& a, int& b);

int computeXOR(int n);

int countTotalBits(int x);

bool isPowerOfTwo(int x);

int findXOR(int n) ;

bool isAllBitsSet(int x);

bool isBitsInAlternatePattern(int x);

int flipBits(int& x);

int setBitsOfsizeN(int n);

};
int BitwiseOperations:: setBitsOfsizeN(int n)
{
	int x = pow(2,n)-1;
	return x;
}

bool BitwiseOperations::isPowerOfTwo(int x)
{
	return !(x ^ (x & ~( x -1)));
}
int BitwiseOperations::countTotalBits(int x)
{
	return (int)log2(x) + 1;
}
void BitwiseOperations:: swapInplace(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
int BitwiseOperations:: valueOfLastSetBit(int& x)
{
	return (x & ~(x-1));
}
void BitwiseOperations ::setKthBit(int& x, int k)
{
	x = x | (1 << k);
}
void BitwiseOperations ::unsetKthBit(int& x, int k) // also be used to clear kth bit
{
	x = x & ~(1 << k);
}
bool BitwiseOperations ::checkParityOfKthBit(const int& x, int k)
{
	return (x & (1 << k));
}
void BitwiseOperations ::toggleKthBit(int& x, int k)
{
	x = x ^ ( 1 << k);
}
bool BitwiseOperations ::checkParity(const int& x)
{
	return __builtin_parity(x);	
}
int BitwiseOperations ::countLeftZeros(const int& x)
{
	return __builtin_clz(x);
}
int BitwiseOperations:: coutRightZeros(const int& x)
{
	return __builtin_ctz(x);
}
int BitwiseOperations ::posOf1stSetBitFromLeft(const int& x)
{
	return 31 - __builtin_clz(x);
}
int BitwiseOperations ::posOf1stSetBitFromRight(const int& x)
{
	return __builtin_ctz(x);
}
int BitwiseOperations :: countSetBits(const int& x)
{
	return __builtin_popcount(x);
}

int BitwiseOperations :: differenceBetween(int& a, int& b)
{
	return (a & (~b));
}
void BitwiseOperations :: eraseLowestBit(int& x)
{
	x = x & (x  - 1);
}
// Direct XOR of all numbers from 1 to n 
int BitwiseOperations :: computeXOR(int n) 
{ 
    if (n % 4 == 0) 
        return n; 
    if (n % 4 == 1) 
        return 1; 
    if (n % 4 == 2) 
        return n + 1; 
    else
        return 0; 
}
//Xor's of all subsets 
int BitwiseOperations ::findXOR(int n) 
{ 
    // XOR is 1 only when n is 1, else 0 
    //n is size 
    if (n == 1) 
       return 0; // return 0th element; 
    else
       return 0; 
}  
bool BitwiseOperations :: isAllBitsSet(int x)
{
	if(x == 0)
	return 0;
	//return (((n + 1) & n) == 0);
	return (x == (x ^ 0));
}
bool BitwiseOperations :: isBitsInAlternatePattern(int x)
{
	//unsigned int num = n ^ (n >> 1); 
	//return isAllBitsSet(num);
	int set;
	 set = countTotalBits(x);
	 set = setBitsOfsizeN(set);
	set = x ^ set;
	set = x | set;
	return isAllBitsSet(set);
}
int BitwiseOperations :: flipBits(int& x)
{
	int value = pow(2,countTotalBits(x))-1;
	x = value - x;
	return x;
}

int BitwiseOperation :: multiplyWithoutAsterisk(int a, int b) {
	int res = 0;
	int b = min(a, b);
	int a = max(a, b);
	
	while(b != 0) {
		if(b & 1 != 0) {
			res += a;	
		}
		a = a << 1;
		b = b >> 1;
	}
	return res;
}

int BitwiseOperation :: addWithoutPlus(int x, int y) {
    while( y!= 0) {
        int carry = x & y;
        x =  x ^ y;
        y = carry << 1;
    }
    return x;
}

// same code can be recursively done as

int BitwiseOperation :: addWithoutPlus(int x, int y) {
    if (y == 0) {
        return x;
    }

    return addWithoutPlus(x^y, (x&y)<<1);
}

//Number : Given Number
//Value  : A number with all bits set in given number.
//Flipped number = Value – Number.

//Example : 
//Number = 23,
//Binary form: 10111;
//After flipping digits number will be: 01000;
//Value: 11111 = 31;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x = 8;
    bitset<32> b;
    BitwiseOperations s;
    s.setKthBit(x, 1);
    b = x;
    cout<<"Setting 1th bit"<<b<<"\n";
    s.unsetKthBit(x,1);
    s.unsetKthBit(x,1); // This also works to clear kth bit
    b = x;
    cout<<"Unsettind 1th bit"<<b<<"\n";
    (s.checkParityOfKthBit(x, 1)) ? cout<<"1\n" : cout<<"0\n";
    s.unsetKthBit(x,3);
    b = x;
    cout<<b<<"\n";
	s.toggleKthBit(x, 1);
	b = x;
	cout<<"Toggling 1th bit"<<b<<"\n";
	cout<<s.checkParity(x)<<" 1 means odd numbers of setbits and 0 means even\n";
	int aa = 10;
	int bb = 2;
	cout<<"10 - 2 = "<<s.differenceBetween(aa,bb)<<"\n"; 
	int aaa = 7;
	int bbb = 3;
	
	s.swapInplace(aaa,bbb);
	cout<<"after swapping aaa becomes "<<aaa<<" bbb becomes "<<bbb<<"\n"; 
	cout<<s.valueOfLastSetBit(aa)<<"\n";
	cout<<s.posOf1stSetBitFromLeft(10)<<"\n\n";
	cout<<"Total bits in 10 is "<<s.countTotalBits(aa)<<"\n";
	
	(s.isPowerOfTwo(40)) ? cout<<"Yes\n" : cout<<"No\n";

	bitset<32> B(pow(2,31) + pow(2,31) - 1);
	unsigned int ans = pow(2,31) + pow(2,31) - 1;
	cout<<ans<<"\n";
	cout<<B<<"\n";
	s.isAllBitsSet(7) ? cout<<"yes\n" : cout<<"No\n";
	aa = 10;
	cout<<s.flipBits(aa)<<"\n";
	cout<<s.setBitsOfsizeN(4)<<"\n";
	
    return 0;
}
