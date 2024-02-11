#include<bits/stdc++.h>
 
using namespace std;

vector<int> printSpiral(vector<vector<int>>& mat){
    int top = 0, left = 0, right = mat[0].size() -1, bottom = mat.size() -1;
    vector<int>ans;
    while(left<=right && top<=bottom){
        for(int i = left;i<=right;i++){
            ans.push_back(mat[top][i]);
        }
        top++;

        for(int i = top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i = right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        
        if(left<=right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}
 
int main() {

  vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     
  vector<int> ans = printSpiral(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}