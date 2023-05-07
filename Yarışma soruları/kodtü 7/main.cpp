#include <iostream>
#include <vector>

using namespace std;

int finder(vector<vector<int>> nodes,int node, bool* visited){
    if(visited[node]) return 0;
    visited[node]=true;
    if(nodes[node].size()==0) return 1;
    if(nodes[node].size()==1){
        return 1+finder(nodes,nodes[node][0],visited);
    }
    if(nodes[node].size()==2){
        return 1+finder(nodes,nodes[node][0],visited)+finder(nodes,nodes[node][1],visited);
    }
    if(nodes[node].size()==3){
        return 1+finder(nodes,nodes[node][0],visited)+finder(nodes,nodes[node][1],visited)+finder(nodes,nodes[node][2],visited);
    }
}

int main()
{
    int n,u,v;
    cin>>n;
    bool* visited=new bool[n+1];
    vector<vector<int>> nodes;
    vector<int> append;
    for(int kkk=0;kkk<=n;kkk++){
        nodes.push_back(append);
        visited[kkk]=false;
    }
    for(int j=0;j<(n-1);j++){
        cin>>u>>v;
        nodes[u].push_back(v);
        nodes[v].push_back(u);
    }
    int answer=0,temp1,temp2,temp3,temp;
    for(int i=1;i<nodes.size();i++){
        if(nodes[i].size()==0) continue;
        if(nodes[i].size()==1){
            visited[i]=true;
            temp=finder(nodes,nodes[i][0],visited);
            for(int ccc=0;ccc<=n;ccc++){
                visited[ccc]=false;
            }
        }
        if(nodes[i].size()==2){
            visited[i]=true;
            temp1=finder(nodes,nodes[i][0],visited);
            temp2=finder(nodes,nodes[i][1],visited);
            temp=temp1*temp2;
            for(int aaa=0;aaa<=n;aaa++){
                visited[aaa]=false;
            }
        }
        if(nodes[i].size()==3){
            visited[i]=true;
            temp1=finder(nodes,nodes[i][0],visited);
            temp2=finder(nodes,nodes[i][1],visited);
            temp3=finder(nodes,nodes[i][2],visited);
            temp=temp1*temp2*temp3;
            for(int bbb=0;bbb<=n;bbb++){
                visited[bbb]=false;
            }
        }
        if(temp>answer) answer=temp;
    }
    cout<<answer;
    return 0;
}
