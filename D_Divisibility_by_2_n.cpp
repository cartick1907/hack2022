#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> ar(n+1);
        int cnt=0;
        int cnt1=0;
        vector<int> p;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            while(ar[i]>0){
                if(ar[i]%2==0){
                    cnt++;
                }
                else
                    break;
                ar[i]=ar[i]/2;
            }
            int j=i;
            int x=0;
            while (j > 0)
            {
                if (j % 2 == 0)
                {
                    cnt1++;
                    x++;
                }
                else
                    break;
                j = j / 2;
            }
            if(x>0){
                p.push_back(x);
            }
        }

        // cout<<cnt<<" "<<cnt1<<endl;
        if(cnt>=n){
            cout<<0<<endl;
        }
        else if(cnt+cnt1>=n){
            // cout<<n-cnt<<endl;
            sort(p.begin(),p.end());
            int req=n-cnt;
            int x=0;
            int i=p.size()-1;
            while(req>0){
                // cout<<p[i]<<" ";
                req-=p[i];
                x++;
                i--;
            }
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}