//sharvari murade
//23070123088
//entc-b1

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int i, k,o=1;
    for(i=0;i<n;i++){
        for(k=0;k<(i+1);k++){
            cout<<o<<" ";
            o++;
        }
        k=0;
        cout<<endl;
    }
return 0;
}
