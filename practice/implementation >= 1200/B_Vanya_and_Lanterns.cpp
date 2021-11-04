#include "bits/stdc++.h"
using namespace std;

int main(void){
    
    int n1 , n2;
    cin>>n1>>n2;

    vector<int> v1 ;

    // v1.push_back(n2) ;

    for(int i=0 , tp ; i<n1 ; i++){
        cin>>tp;
        v1.push_back(tp) ;
    }

    sort(v1.begin() , v1.end()) ;

    int gap = 0 ;
    
    for(int i=0 ; i<v1.size() ; i++ ){
        gap = max(gap , v1[i]-v1[i-1] ) ;
    }

    double ans =  max( double(gap) /  double(2)  , double (v1[0]) );
    ans = max(ans ,  double(n2) - double (v1[v1.size() -1])  ) ;

    cout << fixed << setprecision(10) << ans ;;


}
