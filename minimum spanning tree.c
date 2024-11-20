int distance(int A[], int B[]){
    int x = A[0] - B[0];
    int y = A[1] - B[1];
    if(x<0) x = -x;
    if(y<0) y = -y;
    return x + y; 
}
int minCostConnectPoints(int** points, int n, int* pointsColSize){
    int minCost = 0, min = 0, minIndex = 0, top = 0;
    int d[n][n]; // distance array

    for(int i = 0; i<n-1; i++) for(int j = i+1; j<n; j++)
        d[i][j] = d[j][i] = distance(points[i], points[j]);
    
    bool visited[n];
    for(int i=0; i<n; i++) visited[i] = false;
    int stack[n]; // stack of visited Indices
    
    while(top < n){
        for(int j=0; j<top; j++){
            int i=stack[j];
            for(int k = 0; k < n; k++){
                if(!visited[k] && d[i][k] < min){
                    min = d[i][k];
                    minIndex = k;
                }
            }
        }
        stack[top++] = minIndex;
        visited[minIndex] = true;
        minCost += min;
        min = INT_MAX;
    }
    return minCost; }