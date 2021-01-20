#include<bits/stdc++.h>
using namespace std;
const int long long ll = 2e9+7;
int main(){
int long long n;cin >>n;int long long a[n];for(int long long i=0;i<n;i++){ cin >> a[i];}
int long long count=0,b=1;
int flag=0;
for(int long long j=0;j<n;j++){
    count++;
    for(int long long k=0;k<n;k++){
        if(a[k]== b){
            b++;
        }
        if(b==n){
            flag=1;
            break;
        }
    }
    if(flag==1){
        break;
    }


}
cout << count;
}