#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<string(n,'*');
            cout<<" ";
        }else{
            cout<<"* \n";
        }
      
    }
    
    

    return 0;
}