#include"bits/stdc++.h"
using namespace std; 

void sol(){
    
    int n1 ;
    cin>>n1;
    
    vector<int> v1(n1) ;

    for(auto &x: v1 ){
        cin>>x ;
    }

    sort(v1.begin() , v1.end()) ;
    
    if(v1[0] == v1[v1.size() -1 ]){
        cout<<-1<<endl;
        return ;
    }

    vector<int> v2 ;
    int mini = v1[0] , ans ;
    bool f1=1 ;

    for( auto x : v1 ){
        if(x-mini > 0 ){
            
            if(f1){
                ans = x-mini ;
                f1=0 ;
            }
            else{
                ans = __gcd(ans , x-mini ) ;
            }

        }
    }

    cout<<ans<<endl;


}

int main(void){
    
    int t;
    cin>>t;

    while(t--){
        sol();
    }
}