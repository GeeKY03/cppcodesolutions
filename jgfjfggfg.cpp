
int fightingTraffic(int n, int m, vector < vector < int >> & roads, vector < int > & t, vector < int > & f, int x) {

	int lowerLimit = 0;
	int upperLimit = 1e9;
	int result = -1;


	// while (lowerLimit <= upperLimit) {
	// int mid = lowerLimit + (upperLimit - lowerLimit) / 2;
	// vector<vector<int>> graph(n);
	// int ctr=0;
	// for (int i = 0; i < m; i++) {
	//     int cityA = roads[i][0];
	//     int cityB = roads[i][1];
	//     int traffic = t[i];
	//     if (traffic <= mid) {
	//         graph[cityA].pb(cityB);
	//         graph[cityB].pb(cityA);
	//     }
	// }

	vector<int> visited(n, 0);
	int totalFun = 0;
	queue<int> queue;
	queue.push(0);
	visited[0] = 1;
	while (!queue.empty()) {
		int currentCity = queue.front();
		queue.pop();
		totalFun |= f[currentCity];
		for (int neighbor : graph[currentCity]) {
			if (visited[neighbor] == 0 && mid >= 0) {
				queue.push(neighbor);
				visited[neighbor] = 1;
			}
		}
	}
	if (totalFun >= x) {
		result = mid;
		upperLimit = mid - 1;
	} else {
		lowerLimit = mid + 1;
	}
}


return result;
}