Find Minimum Cost Spanning Tree of a given undirected graph using Prim’s algorithm.
Prim’s algorithm constructs a minimum spanning tree through a sequence of expanding subtrees. The initial subtree in such a sequence consists of a single vertex selected arbitrarily from the set V of the graph’s vertices. On each iteration, the algorithm expands the current tree in the greedy manner by simply attaching to it the nearest vertex not in that tree. The algorithm stops after all the graph’s vertices have been included in the tree being constructed

ALGORITHM:

ALGORITHM Prim(G)
//Prim’s algorithm for constructing a minimum spanning tree
//Input: A weighted connected graph G = <V, E>
//Output: ET , the set of edges composing a minimum spanning tree of G
VT ←{v0} //the set of tree vertices can be initialized with any vertex
ET ←∅
for i ←1 to |V| − 1 do
find a minimum-weight edge e∗ = (v∗, u∗) among all the edges (v, u)
such that v is in VT and u is in V − VT
VT←VT ∪ {u∗}
ET ←ET ∪ {e∗}
return ET

PROGRAM :

#include<stdio.h> 
#include<conio.h> 
int a, b, u, v, n, i, j, ne=1; 
int visited[10]={0}, min, mincost=0, cost[10][10]; 
void main() 
{ 
clrscr(); 
printf("\n Enter the number of nodes:"); 
scanf("%d",&n); 
printf("\n Enter the adjacency matrix:\n"); 
for(i=1;i<=n;i++) 
for(j=1;j<=n;j++) 
{ 
scanf("%d",&cost[i][j]); 
if(cost[i][j]==0) 
cost[i][j]=999; 
} 
visited[1]=1; 
printf("\n"); 
while(ne<n) 
{ 
for(i=1,min=999;i<=n;i++) 
for(j=1;j<=n;j++) 
       if(cost[i][j]<min) 
if(visited[i]!=0) 
{ 
min=cost[i][j]; 
a=u=i; 
b=v=j; 
} 
if(visited[u]==0 || visited[v]==0) 
{ 
printf("\n Edge %d:(%d %d) cost:%d",ne++,a,b,min); 
mincost+=min; 
visited[b]=1; 
} 
cost[a][b]=cost[b][a]=999; 
} 
printf("\n Minimun cost=%d",mincost); 
getch(); 
}


