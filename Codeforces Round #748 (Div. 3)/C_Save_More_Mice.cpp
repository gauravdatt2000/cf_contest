#include "bits/stdc++.h"
using namespace std;


void sol(){
    
    int tar, k ;
    cin>>tar>>k;


    priority_queue<int> pq;

    for(int i=0  , tp ; i<k ; i++){    
        cin>>tp;
        pq.push(tp) ;
    }

    int dif = 0 , cat = 0 ;
    
    while(pq.size()){

        dif = tar - pq.top() ;
        if( dif + pq.top() > dif + cat ){
            cat+= dif ;
            pq.pop();
        }
        else{
            break;
        }

        // cerr<<pq.top()<<" ";

    }

    // cerr<<endl ;

    cout<<k-pq.size()<<endl;


}

int main(void){
    int t;
    cin>>t;

    while(t--){
        sol();
    }
}