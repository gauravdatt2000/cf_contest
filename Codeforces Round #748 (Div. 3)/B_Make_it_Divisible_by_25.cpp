#include "bits/stdc++.h"
using namespace std;

void sol(){
    
    string s1;
    cin>>s1;

    int ans = INT_MAX ; 
    
    for(int i=1 ; i<s1.length() ; i++){
    int l1 = s1.length() ;    

        // 2 - 5 and 7 -5 logic 
        
        if(s1[i] == '5'){

            int two_sevn = INT_MAX ;

            for(int k=i-1 ; k >=0 and  two_sevn == INT_MAX ; k--){
                
                if(s1[k]=='2' or s1[k]=='7' ){
                    two_sevn = min(two_sevn , k ) ;
                }

            }

            if(two_sevn!=INT_MAX){
                int gp1 = i-two_sevn-1 ;
                int gp2 = s1.length() -(i+1) ;
                ans = min(ans , gp1+gp2 ) ;
            }

        }

        //  x00  or 50 
        if( s1[i] == '0' ){
            
            int s0 = INT_MAX , s5 = INT_MAX ;
            
            for(int k=i-1 ; k>=0 and s0==INT_MAX and s5==INT_MAX ; k--){
                if( s1[k]=='0' ){
                    s0 = k ;
                }
                if( s1[k]=='5' ){
                    s5 = k ;
                }
            }

            if(s0!=INT_MAX){
                ans = min(ans , ( i-s0-1 ) + (l1 -(i+1) ) ) ;
                // cerr<< i-s0-1<<" "<< l1 << endl;
            }

            if(s5!=INT_MAX){
                ans = min(ans , ( i-s5-1 ) + ( l1 -(i+1) ) ) ;
            }

        }

    } 

    cout<<ans<<endl;

}

int main(void){
    
    int t;
    cin>>t;
    while(t--){
    sol() ;
    }



}