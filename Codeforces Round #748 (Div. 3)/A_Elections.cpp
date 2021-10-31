#include "bits/stdc++.h"
using namespace std ;

void sol(){
    int arr[3] ;
    
    for(int i=0 ; i<3 ; i++){
        cin>>arr[i] ;
    }

    for(int i=0 ; i<3 ; i++){
        int num = arr[i] ;
        int maxi = INT_MIN ; 
        
        for(int j=0 ; j<3 ; j++){
            if(i!=j){
                maxi = max(maxi , arr[j]) ;
            }
        }

        if(maxi>=num){
            cout<<maxi-num+1<<" ";
        }
        else{
            cout<<0<<" ";
        }

    }

    cout<<endl;

}

int main(void){
    int t;
    cin>>t;

    while(t--){
        sol();
     }
}