// ROTATE BY 90 DEGREE
void rotate(vector<vector<int> >& matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0,k=n-1;j<k;j++,k--)
        {
            swap(matrix[j][i],matrix[k][i]);
        }
    }
    // Your code goes here
}
