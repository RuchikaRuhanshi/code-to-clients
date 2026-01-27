#include<bits/stdc++.h>
using namespace std;

//integer hashing (frquency counting)

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}

// 	//precomputation 
// 	int hash[13] = {0};
// 	for (int i=0; i<n; i++){
// 		hash [arr[i]] += 1;
// 	}

// 	int q;
// 	cin>>q;
// 	while(q--){
// 		int num;
// 		cin>> num;
// 		// fetching 
// 		cout<< hash[num]<< endl;
// 	}
// 	return 0;
// }

//character hashing (only for lowercase letters)

// int main()
// {
// 	string s;
// 	cin>> s;

// //  precomputation 
// 	int hash[26] = {0};             //hashing array size only fo r lowercase letters, can also be done using 256 size 
// 	for (int i=0; i<s.size(); i++){
// 		hash [s[i]- 'a'] ++;        // in case of 256 size, use only s[i]++
// 	}

// 	int q;
// 	cin>>q;
// 	while(q--){
// 		char c;
// 		cin>> c;
// 		// fetching 
// 		cout<< hash[c- 'a']<< endl; //in case of 256 size, use only hash[c]
// 	}
// 	return 0;
// }

// int main(){
// 	string s;
// 	cin>> s;

// //  precomputation 
// 	int hash[256] = {0};            //hashing array size is increased to ascii values number to ease the precompute process for all types of letters
// 	for (int i=0; i<s.size(); i++){
// 		hash [s[i]]++;              // hash takes in int value thus converts them directly to their ascii values
// 	}

// 	int q;
// 	cin>>q;
// 	while(q--){
// 		char c;
// 		cin>> c;
// 		// fetching 
// 		cout<< hash[c]<< endl;
// 	}
// 	return 0;
// }

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  iteration in the map
  for (auto it : mpp) {
    cout << it.first << "-->" << it.second << endl;
  }

  int q;
  cin >> q;
  while (q--) {
    int number;
    cin >> number;
    cout << mpp[number] << endl;
  }
  return 0;
}

// *time complexity of maps: O(log n)

//int main() {
//  int n;
//  cin >> n;
//  int arr[n];
//  unordered_map<int, int> mpp;        // unordered map given in default case, if worst case runs, then use maps.
//  for (int i = 0; i < n; i++) {
//    cin >> arr[i];
//    mpp[arr[i]]++;
//  }
