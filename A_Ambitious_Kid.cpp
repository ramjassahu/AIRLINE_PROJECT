#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        A[i]=abs(a);
    }
    sort(A.begin(),A.end());
    cout<<A[0];
}