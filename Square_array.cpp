#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a base : ";
    cin>>n;
    int dadu[n];
    
    for(int i=0; i<=n; i++){
        dadu[i] = (i+1) *(i + 1);
    }
    cout<<"The square of the "<<n<<" is :-> "<<endl;

    for(int i=0; i<=n; i++){
        cout<<dadu[i]<<" ";
    }
    return 0;
}