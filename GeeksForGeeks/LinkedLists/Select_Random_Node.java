//Select a Random Node From A Linked List 

import java.util.*;

class LinkedList{
	Node head;
	class Node{
		int data;
		Node next;
		Node(int d){
			data = d;
			next = null;
		}
	}
	void printRandom(Node node){
		if(node == null)
			return;

		Math.abs(UUID.randomUUID().getMostSignificantBits());

		int result = node.data;

		Node current = node;
		int n;
		for(n=2;current!=null;n++){
			if(Math.random() % n == 0)
				result = current.data;
			current = current.next;
		}
		System.out.println("Randomly Selected key is --- " + result);
	}
}
public class Select_Random_Node{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();
		list.head = list.new Node(5);
		list.head.next = list.new Node(20);
		list.head.next.next = list.new Node(4);
		list.head.next.next.next = list.new Node(30);
		list.head.next.next.next.next = list.new Node(3);

		list.printRandom(list.head);

	}
}