#include <iostream>
using namespace std;

int solution(int n)
{
	static int d[1000001];
	d[1] = 0;
	for(int i = 2; i<=n; i++)
	{
		d[i] = d[i-1] + 1;
		
		if( i%2==0 && d[i] > d[i/2] +1 )
		{
			d[i] = d[i/2] + 1;
		}
		
		if( i%3==0 && d[i] > d[i/3] + 1 )
		{
			d[i] = d[i/3] + 1;
		}
	}
	return d[n];
		
}


int main()
{
	
	int n;
	cin>>n;
	cout<<solution(n);
	
}