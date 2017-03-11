#include <iostream>
using namespace std;
 
int main()
{
	long long n,i;
    cin >> n ;
    long long a[n],c=0,max=0;
    for(i=0;i<n;i++)
        cin >> a[i] ;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            c++;
        else
        {
            if(c>max)
                max=c;
            c=0;
        }
    }
    if(c>max)
        max=c;
    cout << max << endl ;
	return 0;
}
