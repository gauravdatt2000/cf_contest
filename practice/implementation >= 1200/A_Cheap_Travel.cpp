// https://codeforces.com/problemset/problem/466/A solved AC

#include "bits/stdc++.h"
using namespace std;

int main(void){
    
    int n , m , a, b;
    cin>>n>>m>>a>>b;

    vector< vector<int> > dp(2 , vector<int> (n+1 , INT_MAX )) ;

    dp[0][0] = 0 ;
    dp[1][0] = 0 ;

    for(int i=1 ; i<=n ; i++){
        
        dp[0][i] = min( dp[0][i-1] , dp[1][i-1]  ) + a ;

        if( i-m >= 0){
            dp[1][i] = min( dp[0][i-m] , dp[1][i-m]  ) + b ;
            // int excep = ceil ( double (i) / double  (m ) ) * b ;
            // dp[1][i] = min(dp[1][i] , excep ) ;
        }
    }

    int excep = ceil ( double (n) / double  (m ) ) * b ;
    dp[1][n] = min(dp[1][n] , excep ) ;

    cout<<min( { dp[0][n] , dp[1][n] , excep }) ;


}