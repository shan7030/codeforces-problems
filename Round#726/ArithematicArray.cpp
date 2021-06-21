#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    int n;
    while(t--) {
        cin>>n;
        int k=n;
        int sum=0;
        while(n--) {
            int item;
            cin>>item;
            sum+=item;
        }
        n=k;
        if(sum==n) {
            cout<<0<<endl;
        }
        else if(sum>n) {
            cout<<(sum-n)<<endl;
        }
        else {
            cout<<1<<endl;
        }


    }

    return 0;
}