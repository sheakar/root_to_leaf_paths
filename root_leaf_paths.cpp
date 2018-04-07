void path(TreeNode *root, int sum, vector<int> &pres, vector<vector<int> > &res)
 {
  if (root == NULL)
  {
  	return ;
   } 

    sum -= (*root).val;
    pres.push_back((*root).val); 
    if ((*root).left == NULL && (*root).right == NULL) {
        if (sum == 0) {
            res.push_back(pres);
        }
        pres.pop_back();
        return ;
    }
     path((*root).left, sum, pres, res);
    path((*root).right, sum, pres, res);
    pres.pop_back();
    return ;
 }
vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
     vector<vector<int> > ans;
    vector<int> pres;
    path(root, sum, pres, ans);
    return ans;
}
