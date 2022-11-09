class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	   int row = 0;
	   int col = M-1;
	   while(row < N && col >= 0)
	   {
	       if(mat[row][col]==X)
	       return 1;
	       else if(mat[row][col]>X)
	       col--;
	       else
	       row++;
	   }
	   return 0;
	}
};
