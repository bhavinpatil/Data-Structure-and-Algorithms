// Header Files
#include<iostream>
#include<string>
#include<vector>
using namespace std;


/*
 * grid represents the two-dimensional grid with N rows and M columns.
 */
 
 
void countHouse(vector<vector<int> >& grid, int i, int j)
{
	if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
 		return;
 	
 	if(grid[i][j]==0)
 		return;
 	
 	grid[i][j]=0;
 	
 	countHouse(grid,i+1,j);
 	countHouse(grid,i-1,j);
 	countHouse(grid,i,j+1);
 	countHouse(grid,i,j-1);
}
 
int areaOfLargestHouse (vector<vector<int> > grid)
{
    int  answer=0;
    // Write your code here
    for(int i=0; i<grid.size();i++)
    {
    	for(int j=0; j<grid[0].size();j++)
    	{
    		if(grid[i][j]==1)
    		{
    			countHouse(grid,i,j);
    			answer++;
    		}
    	}
    }
    return answer;
}

int main()
{
    //input for grid
	int grid_row;
	int grid_col;
	cin >> grid_row;
	cin >> grid_col;
	
	vector<vector<int> > grid;
	for ( int idx = 0; idx < grid_row; idx++ )
	{
		vector<int> temp_vector;
		for ( int jdx = 0; jdx < grid_col; jdx++ )
		{
			int temp;
			cin >> temp;
			temp_vector.push_back(temp);
		}
		grid.push_back(temp_vector);
	}
	
	
    int result = areaOfLargestHouse(grid);
	cout << result;
	
	
    return 0;
}
