#include <iostream>

using namespace std;

int main(){int i,j,n;
    cout<<"masukkan ordo martiks :"; cin >>n;
    for(i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            if (i==j) cout<<"1";
            else cout<<"0";
        }
        cout<<endl;
    }
}
