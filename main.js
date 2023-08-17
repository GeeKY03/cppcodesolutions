function createGraph(V, E){
	// V -> Number of vertices
	// E -> list of edges

	let adjlist = [];

	for( let i=0; i<V; i++ ){
		// Appending an empty list for every vertex
		adjlist.push[[]];
	}

	// Filling the adjlist
	for( let i=0; i<E.length; i++ ){
		adjlist[E[i][0]].push[[E[i][1], E[i][2]]];
		adjlist[E[i][1]].push[[E[i][0], E[i][2]]];
	}

	return adjlist;
}



const V = 5;
const E = [[1, 2, 3], [1, 4, 2], [3, 5, 1], [3, 4, 3]];

let graph = createGraph(V, E);

console.log(graph);