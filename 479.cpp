#include<iostream>
using namespace std;
main()
{  
int a,b,c;
cin>>a>>b>>c;
cout<<max(max(a+b+c,(a+b)*c),max(a*(b+c),a*b*c));
}
