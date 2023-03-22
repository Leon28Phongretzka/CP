const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

class Graph{
    constructor() {
        this.nodes = new Set();
        this.edges = new Map();
    }

    addNode(node) {
        this.nodes.add(node);
        this.edges.set(node, new Map());
    }

    addEdge(node1, node2, weight) {
        this.edges.get(node1).set(node2, weight);
        this.edges.get(node2).set(node1, weight);
    }
    print() {
        for (let node of this.nodes) {
            let neighbors = this.edges.get(node);
            let result = "";
            for (let neighbor of neighbors) {
                result += neighbor[0] + " " + neighbor[1] + " ";
            }
            console.log(node + " => " + result);
        }
    }
    // Dijkstra's algorithm to find minimum value path from source to all other nodes
    dijkstra(source){
        let distance = new Map();
        let predecessor = new Map();
        // Set all distances to infinity and all predecessors to null
        for(let node of this.nodes){
            distance.set(node, Infinity);
            predecessor.set(node, null);
        }
        // Set distance of source to 0
        distance.set(source, 0);
        // Relax all edges |V|-1 times
        for(let node of this.nodes){
            for(let neighbor of this.edges.get(node).keys()){
                let alt = distance.get(node) + this.edges.get(node).get(neighbor);
                if(alt < distance.get(neighbor)){
                    distance.set(neighbor, alt);
                    predecessor.set(neighbor, node);
                }
            }
        }
        // Check for negative-weight cycles
        for(let node of this.nodes){
            for(let neighbor of this.edges.get(node).keys()){
                let alt = distance.get(node) + this.edges.get(node).get(neighbor);
                if(alt < distance.get(neighbor)){
                    console.log("Graph contains a negative-weight cycle");
                    return;
                }
            }
        }
        return {distance, predecessor};
    }

}




let graph = new Graph();
// node from readline
rl.on('line', (line) => {
    let input = line.split(' ');
    if(input[0] == 'V')
    {
        for(let i = 1; i < input.length; i++){
            graph.addNode(input[i]);
        }
    }
    else if(input[0] == 'E'){
        let input = line.split(' ');
        for(let i = 1; i < input.length; i++){
            let edge = input[i].split(',');
            graph.addEdge(edge[0], edge[1], parseInt(edge[2]));
        }
    }
    // print the graph
    else if(input[0] == 'p'){
        console.log(graph.print());
    }
    else if(input[0] == 's'){
        let result = graph.dijkstra(input[1]);
        console.log(result);
    }

});

// Input
// V a b c d e
// E a,b,6 a,c,7 b,c,8 b,d,5 c,d,11 c,e,9 d,e,10
// s a

// Output
// { distance: Map { 'a' => 0, 'b' => 6, 'c' => 7, 'd' => 11, 'e' => 16 },
//     predecessor: Map { 'a' => null, 'b' => 'a', 'c' => 'a', 'd' => 'b', 'e' => 'c' } }


// Input
// V a b c d e
// E a,b,6 a,c,7 b,c,8 b,d,5 c,d,11 c,e,9 d,e,-10
// s a

// Output
// Graph contains a negative-weight cycle
