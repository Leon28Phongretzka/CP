// Bellman Ford algorithm use implement from keyboard
function bellmanFord(graph, startNode)
{
    const distance = {};
    const predecessor = {};

    // Step 1: initialize graph
    for (let node in graph) {
        distance[node] = Infinity;
        predecessor[node] = null;
    }
    distance[startNode] = 0;

    // Step 2: relax edges repeatedly
    for (let i = 0; i < Object.keys(graph).length - 1; i++) {
        for (let u in graph) {
            for (let v in graph[u]) {
                const weight = graph[u][v];
                if (distance[u] + weight < distance[v]) {
                    distance[v] = distance[u] + weight;
                    predecessor[v] = u;
                }
            }
        }
    }

    // Step 3: check for negative-weight cycles
    for (let u in graph) {
        for (let v in graph[u]) {
            const weight = graph[u][v];
            if (distance[u] + weight < distance[v]) {
                console.log('Graph contains a negative-weight cycle');
                return;
            }
        }
    }

    return { distance, predecessor };
}

const graph = {
    a: { b: -1, c: 4 },
    b: { c: 3, d: 2, e: 2 },
    c: {},
    d: { b: 1, c: 5 },
    e: { d: -3 }
};

const { distance, predecessor } = bellmanFord(graph, 'a');
console.log(distance);

