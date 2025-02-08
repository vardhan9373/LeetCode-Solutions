/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

 public void inorderAdd(TreeNode root,List<Integer>b)
 {
      if(root==null)
      return;
   
    inorderAdd(root.left,b);
      b.add(root.val);
     inorderAdd(root.right,b);

 }


    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer>b=new ArrayList<>();
         inorderAdd(root,b);
         return b;
    }
   
}