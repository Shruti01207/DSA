# include <iostream>
using  namespace std;
void print(int ** edges,int n,int sv, bool *visited);// sv=starting vertex from where graph is to be printed 
int main( ){

int n,e;
cin>>n>>e;
//n=no. of vertices in a graph
// e=no. of edges i.e. direct connection b/w 2 vertices
// How 2 dynamically allocate a 2 d array?
int**edges= new int *[n];
for(int i=0;i<n;++i){
edges[i]=new int[n];
for(int j=0;j<n;++j){
    edges[i][j]=0;// Intially mark that no 2 vertices are connected to each other
}
}

for(int i=0;i<e;++i){
int firstedge,secondedge;
cin>>firstedge>>secondedge;// 2 connected vertices
edges[firstedge][secondedge]=1;
edges[secondedge][firstedge]=1;
}
// Graphs
// 2--3__0n=6,e=5
// |
// 4__1__5
bool *visited= new bool[n+1];// This array is created to keep track of the already printed loop, to avoid the infinite loop
for(int i=0;i<=n;++i)
visited[i]=0;// Initially mark all the nodes  as not visited
print(edges,n,1,visited);

// Note:Deallocate dynamically allocated memory 


}
void print(int ** edges,int n,int sv, bool *visited){
cout<<sv<<" ";
visited[sv]=1;
// Now check if the starting vertex make edge with rest of the vertices
//  for that run a loop from i=0;i<n;++i ,if i is not visited then make a call on that vertex to print
for(int i=0;i<n;++i){
  if(!visited[i] && edges[sv][i])//-->it show that it is not printed & there exist edge b/w sv & ith node
{
    print(edges,n,i,visited);
}

}


}