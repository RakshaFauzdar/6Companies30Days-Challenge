// Spirally traversing a matrix 
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int top=0,bottom=r-1;
        int left=0,right=c-1;
        vector<int>v;
        int d=1;
        while(left<=right && top<=bottom)
        {
            if(d==1)
            {
            for(int i=left;i<=right;i++)
            {
                v.push_back(matrix[top][i]);
            }
            d=2;
            top++;
            }
            else if(d==2)
            {
                for(int i=top;i<=bottom;i++ )
                {
                    v.push_back(matrix[i][right]);
                }
                d=3;
                right--;
            }
            else if(d==3)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[bottom][i]);
                }
                d=4;
                bottom--;
            }
            else if(d==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                d=1;
                left++;
            }
        }
        return v;
        // code here 
    }
};