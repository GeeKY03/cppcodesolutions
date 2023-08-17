function Dijkstra(graph, sz, src){
	// to keep track of visited nodes
	let vis = Array(sz).fill(0);
	let dist = [];
	for( let i=1;i<=sz;i++){
		// Assuming every node to be at a very large dist
		// -1 is parent variable to keep track of parent's variable in shortest path
		dist.push([100000, -1]);
	}

	dist[src][0] = 0; // dist of src node from itself is 0

	for(int i=0;i<sz-1;i++){
		// in each iteration we find the minnimum dist from src node to all other unvisited nodes
		let mn = -1; // minnimum distance node 
		for(int j=0;j<sz;j++){
			if(vis[j]===0){
				if(mn===-1 || dist[j][0]<dist[mn][0]){
					mn = j;
				}
			}
		}

		vis[mn] = 1;
		for (let j in graph[mn]){
			let edge = graph[mn][j];
			if(vis[edge[0]] === 0 && dist[edge[0]][0] > dist[edge[mn]][0] + edge[1]){

			}
		}
	}
}