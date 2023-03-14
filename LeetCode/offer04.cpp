#include"util.h"
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
{
	int i=matrix.size()-1,j=0;
	while(i>=0&&j<matrix[0].size())
	{
		if(matrix[i][j]>target)
		{
			i--;
		}
		else if(matrix[i][j]<target)
		{
			j++;
		}
		else
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int taget = 5;
	vector<vector<int>> nums={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
	cout<<findNumberIn2DArray(nums,taget)<<endl;
	return 0; 
}

