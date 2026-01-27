#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector <int> bruteforceSolu(vector <int> &arr){
    int n = arr.size();
    set <int> set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    int index = 0 ;
    for(auto it : set){
        arr[index] = it;
        index++;
    }
    return arr;
}
vector <int> optimalSolu(vector <int> &arr){
    int n = arr.size();
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1]  = arr[j];
            i++;
        }
    }   
    return arr;
}
void printArr(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main(){
    int n;
    cout<<"Enter the size of array>";
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int a ;
        cout<<"Enter element"<<i+1<<":";
        cin>>a;
        arr.push_back(a);
    }
    // cout<<"Bruteforce Solution"<<endl;
    // vector <int> brute = bruteforceSolu(arr);
    // printArr(brute);
    // cout<<endl;
    cout<<"Optimal Solution"<<endl;
    vector <int> optimal = optimalSolu(arr);
    printArr(optimal);
    return 0;
}