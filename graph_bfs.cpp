#include<bits/stdc++.h>
using namespace std;

list<int>adj[10];
list<int>::iterator itr;
map<int,int>visited;

int dfs()
{
    int a=0;
    cout<<"Enter starting node";
    cin>>a;
    queue<int>s;
    s.push(a);
    visited[a]=1;
    while (!s.empty())
    {
       int p=s.front();
       cout<<p;
       s.pop();
       for(itr=adj[p].begin();itr!=adj[p].end();itr++)
       {
           if(visited[*itr]==0)
           {
           	visited[*itr]=1;
           	s.push(*itr);
		   }
       }
    }
}

int main()
{
    int n=0,a=0,b=0;
    cout<<"Enter no of edges";
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        visited[a]=0;
        adj[a].push_back(b);
    }
    dfs();
    return 0;
}
