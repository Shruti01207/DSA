#include <iostream>
using namespace std;
# include <queue>
int ** InputGraph(int V,int E);
void BFS(int ** arr,int V,int sv,bool * visited);

int main() {
  int V,E;
  cin>>V>>E;
  int ** arr=InputGraph(V, E);
  bool * visited=new bool[V];
  for (int i = 0; i < V; ++i) {
    visited[i] = 0;
  }

for(int i=0;i<V;++i){
    if(!visited[i]){
        BFS(arr,V,i,visited);
    }
}// For disconnected Graph

}

int ** InputGraph(int V,int E){

// Create Dynamic arr
int ** arr =new int*[V];
for(int i=0;i<V;++i){
arr[i]= new int[V];
for(int j=0;j<V;++j){
    arr[i][j]=0;
   
}
}

for(int i=0;i<E;++i){
 int a,b;
 cin>>a>>b;
 arr[a][b]=1;
 arr[b][a]=1;
}

return arr;

}



void BFS(int ** arr,int V,int sv,bool * visited){
  queue<int> q;
  q.push(sv);
  visited[sv] = 1;
  while (!q.empty()) {
    int val = q.front();
    for (int i = 0; i < V; ++i) {

      if (arr[val][i] == 1 && visited[i] != 1) {
        q.push(i);
        visited[i] = 1;
      }
    }
    cout << val << " ";
    q.pop();
  }
}