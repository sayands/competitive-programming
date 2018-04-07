# Problem ID --- 104 : Maximum Depth Of A Binary Tree


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        ldepth = self.maxDepth(root.left);
        rdepth = self.maxDepth(root.right);
        
        if ldepth>rdepth:
            return ldepth+1
        else:
            return rdepth+1