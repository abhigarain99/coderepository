// https://www.geeksforgeeks.org/count-subarrays-total-distinct-elements-original-array/
// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/the-normal-type/description/
//Abhi

#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>  
// #include <ext/pb_ds/assoc_container.hpp> 
// #include <ext/pb_ds/tree_policy.hpp> 
// using namespace __gnu_pbds; 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define ll long long int
#define MOD 1000000007
#define di2d(arr,i,j,n) for(i=0;i<n;i++){for(j=0;j<n;j++)cout<<arr[i][j]<<" ";cout<<endl;}
#define inpv(v,n,a,i) for(i=0;i<n;i++){cin>>a;v.push_back(a);}
#define pb push_back
#define ins insert
#define itq iterator
#define ritq reverse_iterator
#define f(i,j,l) for(i=j;i<l;i++)
#define deb(x) cout<<#x<<" "<<x<<endl;
#define disp(v) for(auto iterate=v.begin();iterate!=v.end();iterate++)cout<<*iterate<<" ";
//using boost::multiprecision::cpp_int;
using namespace std;

//template<typename... T>
//void read(T&&... args) {
//	((cin >> args), ...);
//}
//
//template<typename... T>
//void write(T&&... args) {
//	((cout<<args<<" "), ...);
//}

//set<ll,decltype(cmp)> s(cmp);
//ordered_set o_set; 

int fx()
{
    //change T(def T=1)
    ll n=0,right=0,left=0,i=0,ans=0,a=0,k=0;
    map<ll,ll> m;
    set<ll> s;
    vector<ll> v;
    cin>>n;
    f(i,0,n)
    {
        cin>>a;
        s.ins(a);
        v.pb(a);
    }
    k=s.size();
    s.clear();
    // m[v[0]]++;
    f(left,0,n)
    {
        // deb(right);deb(s.size());

        while(right<n && s.size()<k)
        {
            // cout<<"a"<<endl;
            s.ins(v[right]);
            m[v[right]]++;
            right++;
        // for(auto itr=m.begin();itr!=m.end();itr++)cout<<itr->first<<" "<<itr->second<<endl;
        }
        if(s.size()==k)
        {
            // deb(left);deb(right);deb(s.size());
            ans+=n-right+1;
            // cout<<ans<<" ";
        }
        // for(auto itr=m.begin();itr!=m.end();itr++)cout<<itr->first<<" "<<itr->second<<endl;
        m[v[left]]--;
        // for(auto itr=m.begin();itr!=m.end();itr++)cout<<itr->first<<" "<<itr->second<<endl;
        if(m[v[left]]==0)
        s.erase(v[left]);
    }
    cout<<ans;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //cpp_int n;
    // int T=0;
    // cin>>T;
    // while(T--)
    fx();
    return 0;
}
