//To find out a minimum depth of a binary treeee

import java.util.*;

class Node{
	int data;
	Node left,right;
	Node(int d){
		data = d;
		left = right = null;
	}
}
public class Minimum_Depth{
	Node root;

	static int minimumDepth(Node root){
		if(root == null)
			return 0;

		if(root.left == null && root.right == null)
			return 1;

		if(root.left == null)
			return minimumDepth(root.right) + 1;

		if(root.right == null)
			return minimumDepth(root.left) + 1;

		return Math.min(minimumDepth(root.left), minimumDepth(root.right)) + 1;
	}

	static void printTree(Node root){
		if(root!=null){
			printTree(root.left);
			System.out.println(root.data);
			printTree(root.right);
		}
	}
	public static void main(String[] args) {
		Minimum_Depth tree = new Minimum_Depth();

		tree.root = new Node(1);
		tree.root.left = new Node(2);
		tree.root.right = new Node(3); 	
		tree.root.left.right = new Node(4);
		tree.root.left.right.left = new Node(5);


		System.out.println("Inorder Traversal...");
		printTree(tree.root);

		System.out.println("Minimum Depth...");
		System.out.println(minimumDepth(tree.root));
	}
}