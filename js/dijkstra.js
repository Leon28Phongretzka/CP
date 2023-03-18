// Bellman Ford's algorithm for finding the shortest path
// between two nodes in a graph.

function Bellman_Ford(graph, V, E, src)
{
    var dis = Array(V).fill(1e9+7);
    dis[src] = 0;

    for(var i=0; i<V-1; i++)
    {
        for(var j=0; j<E; j++)
        {
            var u = graph[j][0];
            var v = graph[j][1];
            var w = graph[j][2];

            if(dis[u] + w < dis[v])
                dis[v] = dis[u] + w;
        }
    }

    for(var i=0; i<E; i++)
    {
        var u = graph[i][0];
        var v = graph[i][1];
        var w = graph[i][2];

        if(dis[u] + w < dis[v])
        {
            console.log("Negative cycle detected.");
            return;
        }
    }

    console.log(dis);
}

function addEdge(u, v, w)
{
    graph.push([u, v, w]);
}

var V = 5;
var E = 8;

var graph = [];
addEdge(0, 1, -1);
addEdge(0, 2, 4);
addEdge(1, 2, 3);
addEdge(1, 3, 2);
addEdge(1, 4, 2);
addEdge(3, 2, 5);
addEdge(3, 1, 1);
addEdge(4, 3, -3);

Bellman_Ford(graph, V, E, 0);

