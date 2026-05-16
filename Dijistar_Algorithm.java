    From a given vertex in a weighted connected graph, find shortest paths to other vertices using Dijkstra's algorithm. 

Dijkstra’s algorithm finds the shortest paths to a graph’s vertices in order of their distance from a given source. First, it finds the shortest path from the source to a vertex nearest to it, then to a second nearest, and so on.

ALGORITHM :

Dijkstra( G , s )
//Input: A weighted connected graph G=< V , E > and its vertex v in V
//Output: The length dv of a shortest path from s to v and its penultimate vertex pv for every 
// vertex v in V.

Initialize ( Q ) //initialize vertex priority in the priority queue.
for every vertex v in V do {
dv = infinity
pv = NULL
Insert(Q, v , dv )//initialize vertex priority in the priority queue
		} //end for
ds = 0
Decrease ( Q , s , ds )	//update priority of s with ds
Vt = 0
for I = 0 to | V | - 1 do {
u*  = DeleteMin ( Q ) //delete the minimun priority element
vt = vt U { u* }
for every vertex u in V – Vt that is adjacent to u* do {
if (du* + w ( u*, u ) < du ) {
du = du* + w ( u*, u )
pu = u*
Decrease ( Q , u , du )
			} // end if
		} // end for
	} // end for

PROGRAM :

#include<stdio.h>
#include<conio.h>
# define infinity 999

void dij(int n, int v, int cost[10][10], int dist[100])
{
int i, u, count, w, flag[10], min;
for(i=1;i<=n;i++)
flag[i]=0,dist[i]=cost[v][i];
count=2;
 while(count<=n)
 {
  min=99;
  for(w=1;w<=n;w++)
  if(dist[w]<min && !flag[w])
  min=dist[w],u=w;
  flag[u]=1;
  count++;
  for(w=1;w<=n;w++)
  if((dist[u]+cost[u][w]<dist[w])&& !flag[w])
  dist[w]=dist[u]+cost[u][w];
  	}
}

void main()
{
int n, v, i, j, cost[10][10], dist[10];
clrscr();
printf("\nEnter the number of nodes:");
scanf("%d",&n);
printf("Enter the cost matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
 scanf("%d",&cost[i][j]);
 if(cost[i][j]==0)
 cost[i][j]=infinity;
}
printf("\nEnter the source vertex:");
scanf("%d",&v);
dij(n,v,cost,dist);
printf("\nShortest path:\n");
for(i=1;i<=n;i++)
if(i!=v)
printf("%d -->%d,cost=%d\n",v,i,dist[i]);
getch();
}

