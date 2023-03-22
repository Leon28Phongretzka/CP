const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});






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
        let result = graph.bellmanFord(input[1]);
        console.log(result);
    }

});
