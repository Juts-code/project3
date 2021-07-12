#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    int *p=A;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cout<<*p<<endl;
        p++;
    }
return 0;
}
