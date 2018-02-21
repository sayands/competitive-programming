//Insert a node into a sorted linked list 

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

	void sortedInsert(Node new_node){
		Node current;
		if(head == null || head.data >= new_node.data){
			new_node.next = head;
			head = new_node;
		}
		else{
			current = head;
			while(current.next!=null && current.next.data < new_node.data)
				current = current.next;
			new_node.next = current.next;
			current.next = new_node;
		}
	}
	Node newNode(int data){
		Node x = new Node(data);
		return x;
	}
	void printList(){
		Node temp = head;
		while(temp!=null){
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}
}
public class Insert_Sorted{
	public static void main(String[] args) {
		LinkedList llist = new LinkedList();
		LinkedList.Node new_node;
		new_node = llist.newNode(5);
		llist.sortedInsert(new_node);
		new_node = llist.newNode(10);
		llist.sortedInsert(new_node);
		new_node = llist.newNode(7);
		llist.sortedInsert(new_node);
		new_node = llist.newNode(2);
		llist.sortedInsert(new_node);
		new_node = llist.newNode(1);
		llist.sortedInsert(new_node);
		System.out.println("Created Linked List");
		llist.printList();

	}
}