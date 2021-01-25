#include <bits/stdc++.h>
using namespace std;
int n, e;
map<int, char> mp;  //to map the characters in the using mp in case of printing
map<int, char> mp1; // to map the nodes from char to int so that in bfs and dfs we can give parameter of nodes' corresponding int value
map<int, pair<int, int>> mp2;
vector<int> adj[25]; // to access the source, dest and weight so that min edge can be found easily
int visited[25];
int cost[25][25]; //cost matrix of weight between two nodes
//before dfs we need to clear the visited array for proper result
void initVISITED()
{
    for (int i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
}

vector<int> min_cost_edge(int i)
{
    vector<int> adjEdge; //to store the min costs accordingly
    for (auto j : adj[i])
    {
        adjEdge.push_back(cost[i][j]);
    }
    int size = adjEdge.size();
    sort(adjEdge.begin(), adjEdge.end());
    // vector<int> dest;
    // int k = 0;

    // for (auto j : adj[i])
    // {
    //     dest.push_back(j);
    //     k++;
    // }

    return adjEdge;
}

void dfs(int s)
{

    int y = 17;
    if (s == y)
        return; //when the start node itself is Node y we would return

    visited[s] = 1;
    cout << s << " ";
    for (auto i : adj[s])
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}

void bfs(int start, int end)
{
    cout << "BFS sequence: ";
    vector<int> min_cost_edges; //to have the min edge sequence
    visited[start] = 1;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int king = q.front();

        q.pop();
        cout << mp[king] << " ";
        if (king == end)
        {
            return; //if we get to NODE y
        }
        min_cost_edges = min_cost_edge(king); //storing the min_cost_edges accordingly which are adjacent to king
        for (auto i : adj[king])
        {
            int child = i;

            if (!visited[child])
            {
                q.push(child);
                visited[child] = 1;
            }
        }
    }
}

int main()
{

    //for file input output
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    n = 19;
    e = 27;
    int x = 0;  //Node X ->A
    int y = 17; //Node Y-> R
    char c = 'A';
    for (int i = 0; i < 19; i++)
    {
        if (i == 13)
        {
            i--;
            continue;
        }
        else
        {

            mp[i] = c;
            c = c + 1;
        }
    }
    for (int i = 0; i < e; i++)
    {
        char u, v;
        int w;
        cin >> u >> v >> w;

        int count = 0;
        if (mp1[u] == 0)
        {
            count++;
            mp1[u] = count;
        }
        if (mp[v] == 0)
        {
            count++;
            mp1[v] = count;
        }
        mp2[mp1[u]] = {mp1[v], w};
        cost[mp1[u]][mp1[v]] = w;

        adj[mp1[u]].push_back(mp1[v]);
        adj[mp1[v]].push_back(mp1[u]);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (!visited[i])
    //         bfs(i);
    // }
    bfs(x, y);
    initVISITED();
    dfs(x);

    return 0;
}