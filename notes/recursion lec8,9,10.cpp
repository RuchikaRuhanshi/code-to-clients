#include<bits/stdc++.h>
using namespace std;

// printing 5 for n times using recursion
// void f(int i,int n){
// 	if (i>n) return;
// 	cout<<5<<endl;
// 	f(i+1,n);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	f(1,n);

// 	return 0;
// }

//printing n times backwards using recursion
// void f(int i,int n){
// 	if (i<0) return;
// 	cout<<i<<endl;
// 	f(i-1,n);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	f(n,n);

// 	return 0;
// }

//printing linearly from 1 to n using backtrack
// void f(int i,int n){
// 	if (i<0) return;
// 	cout<<n-i<<endl;
// 	f(i-1,n);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	f(n-1,n);

// 	return 0;
// }

//printing linearly from n to 1 using backtrack
// void f(int i,int n){
// 	if (i>n-1) return;
// 	cout<<n-i<<endl;
// 	f(i+1,n);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	f(0,n);

// 	return 0;
// }


//printing the sum of first n numbers using parameterised recursion
// void f(int i, int sum){
// 	if (i<1)
// 	{
// 	   cout<<sum<<endl;
// 	   return;
// 	}
// 	f(i-1, sum+i);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	f(n,0);
// 	return 0;
// }

//printing the sum of n numbers using functional recursion
// int f(int n){
// 	if (n==0){
// 		return 0;
// 	}
// 	return n+ f(n-1);
// }

// int main()
// {
// 	int n;
// 	cin>> n;
// 	cout<< f(n);
// 	return 0;
// }

//printing factorial 
// void f(int i, int fac){
// 	if (i==0){
// 		cout<<fac<<endl;
// 		return;
// 	}
// 	f(i-1, fac*i);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	f(n,1);
// 	return 0;
// }

//printing factorial using functional 
// long long fac(int n){
// 	if (n==0){
// 		return 1;
// 	}
// 	return n*fac(n-1);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	cout<<fac(n);
// 	return 0;
// }