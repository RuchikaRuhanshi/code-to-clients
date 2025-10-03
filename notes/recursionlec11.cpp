#include<bits/stdc++.h>
using namespace std;

//1. Functional 
// void f(int i, int arr[], int n){
// 	if(i>= n/2) return;
// 	swap(arr[i], arr[n-i-1]);
// 	f(i+1, arr, n);
// }

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++) cin>> arr[i];
// 	f(0, arr, n);
//  for (int i = 0; i < n; i++) cout<< arr[i]<< " ";
// 	return 0;
// }

//2. Parameterized 
// void reverseArray(int l, int r, int arr[]) {
//     if (l >= r) return;   
//     swap(arr[l], arr[r]);
//     reverseArray(l+1, r-1, arr);
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
    
//     for (int i = 0; i < n; i++) cin >> arr[i];
    
//     reverseArray(0, n-1, arr);  
    
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }

bool f(int i, int n, string &s) {
    if (i >= n/2) return true;                
    if (s[i] != s[n-i-1]) return false;       
    return f(i+1, n, s);                      
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;                                 

    if (f(0, n, s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
