// C++ implementation of the approach
#include<bits/stdc++.h>
using namespace std;

// Function to return the lexicographically
// smallest string of length n that
// satisfies the given condition
string lexo_small(int n, int k)
{
	string str="";
	for(int i=1;i<=n;i++)
	{
	    if(26*(n-i)<(k-1))
	        str+='a'+(k-1)%26;
	    else 
	        str+='a';
	    k=k-str[i-1]+'a'-1;
	}
	return str;
}

// Driver code
int main()
{
	int n = 3, k = 25;

	string arr = lexo_small(n, k);

	cout << arr;
}

// This code is contributed by Mohit Kumar
