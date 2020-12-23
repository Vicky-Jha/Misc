#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int countDigit(long long n) //count number of digits in a number in o(1) complexity
{ 
    return floor(log10(n) + 1); 
} 
int countTotalBits(int n)
{
	return (int)log2(n)+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    //String to int
    string s = "123";
    int res = 0;
    for(int i=0 ; i<s.size() ; ++i)
    res = res*10 + (s[i]-48);
    cout<<res<<"\n"; // converted to int
	//else 
	cout<<stoi(s)<<"\n"; // converted to int using function
	
	//int to string
	res = 456;
	s = "";
	ostringstream str1;    // declaring output string stream 

	str1 << res;  // Sending a number as a stream into output 
					// string 
	string ans = str1.str(); // str() function converts number to string
	cout<<ans<<"\n"; // converted to string using ostream and str() func
	 
	cout<<to_string(res)<<"\n";  // converted to string using to_string() fn
	
	//int to char
	int i = 9;
	char c = i + 48;
	cout<<c<<"\n"; // converted char
	
	//char to int
	c = '8';
	i = c - 48;
	cout<<i<<"\n"; // converted to int
	
	cout<<countTotalBits(7)<<"\n";
	
	
	//convertion of string  to int and vise versa using stringstream
	
	int num = 100;
	
	stringstream ss; 
	ss << num;
	string str;
	ss >> str;
	cout<<str<<"\n";
	
	string st = "12345"; 
  
    // object from the class stringstream 
    stringstream geek;
    geek << st; 
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x = 0; 
    geek >> x; 
  
    // Now the variable x holds the value 12345 
    cout << "Value of x : " << x<<"\n"; 
    
    
    //Number to Hex 
    num = 26;
		stringstream S;
     S << hex << num;
     cout<<S.str()<<"\n";
     
     //Hex to Decimal Number
     int intg;
     cin>>hex>>intg;
     cout<<intg<<"\n";
     
     
     //char to string
     
     char chr = 'a';
     string stri(1, chr);
	
    return 0;
}

//Notes
//we can add and subtract chars from char
//we can perform xor operations also on characters


