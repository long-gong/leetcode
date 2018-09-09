//
// Created by saber on 9/8/18.
//

#ifndef LEETCODE_378_KTH_SMALLEST_ELEMENT_IN_SORTED_MATRIX_HH
#define LEETCODE_378_KTH_SMALLEST_ELEMENT_IN_SORTED_MATRIX_HH
/*
 * Given a n x n matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.
 *
 * Note that it is the kth smallest element in the sorted order, not the kth distinct element.
 */
#include <leetcode.h>
class Solution {
 public:
  int kthSmallest(vector<vector<int>>& matrix, int k) ;
};

class SolutionSteal {
 public:
  int kthSmallest(vector<vector<int>>& matrix, int k) {
    int left=matrix[0][0], right=matrix.back().back();
    while(left<right) {
      int mid=left+(right-left)/2;
      int cnt=search_less_equal(matrix, mid);
      if(cnt<k) left=mid+1;
      else right=mid;
    }
    return left;
  }
  int search_less_equal(vector<vector<int>>& matrix, int target) {
    int row=matrix.size(), col=matrix[0].size();
    int i=row-1, j=0, cnt=0;
    while(i>=0 && j<col) {
      if(target>=matrix[i][j]) {
        cnt+=(i+1);
        j++;
      } else {
        i--;
      }
    }
    return cnt;
  }
  /* - Binary Search的方法：
       先计算中值mid，如果mid在矩阵中的位置小于k，向右找，left=mid+1;否则向左找，right=mid；
       search_less_equal利用了240. Search a 2D Matrix II的方法，而且每次右移时更新res+=(row+1);
     - Binary Search的有效性：最后到了两个节点后总是能返回有效值；
     - 74	Search a 2D Matrix  & 240. Search a 2D Matrix II &  215. Kth Largest Element in an Array
  */

  /*
  nt kthSmallest(vector<vector<int>>& matrix, int k) {
      int left=matrix[0][0], right=matrix.back().back();
      while(left<right) {
          int mid=left+(right-left)/2;
          int cnt=search_less_equal(matrix, mid);
          if(cnt<k) left=mid+1;
          else right=mid;
      }
      return left;
      //return right;
  }
  int search_less_equal(vector<vector<int>>& matrix, int target){
      int n=matrix.size(), row=n-1, col=0, res=0;
      while (row>=0 && col<=n-1) {
          if(matrix[row][col]<=target) {
              res+=(row+1);
              col++;
          } else{
              row--;
          }
      }
      return res;
  }
  */

  /*//priority_queue
  int kthSmallest(vector<vector<int>>& matrix, int k) {
      priority_queue<int> q;
      for (int i=0; i<matrix.size(); i++) {
          for (int j=0; j<matrix[0].size(); j++){
              q.push(matrix[i][j]);
              if(q.size()>k) q.pop();
          }
      }
      return q.top();
  }
  /* - 215. Kth Largest Element in an Array
     - 240. Search a 2D Matrix II / 74. Search a 2D Matrix
     - Priority_queue
  */
};
#endif //LEETCODE_378_KTH_SMALLEST_ELEMENT_IN_SORTED_MATRIX_HH
