//Delete A Given Node From Linked List

import java.util.*;
class LinkedList{
	Node head;
	class Node{
		Node next;
		int data;
		Node(int d){
			data = d;
			next = null;
		}
	}

	void deleteNode(Node node,Node n){
		if(node == n){
			if(node.next == null)
				System.out.println("Empty List");
			node.data = node.next.data;
			n = node.next;
			node.next = node.next.next;
			System.gc();//Free Memory
			return;
		}

		Node prev = node;
		while(prev.next!=null && prev.next != n){
			prev = prev.next;
		}
		if(prev.next == null){
			System.out.println("Node not present.");
			return;
		}
		prev.next = prev.next.next;
		System.gc();
		return;
	}
	void printList(Node head){
		while(head!=null){
			System.out.print(head.data + " ");
			head = head.next;
		}
	}
}

public class Delete_Node{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();
		list.head = list.new Node(12);
		list.head.next = list.new Node(5);
		list.head.next.next = list.new Node(10);
		list.head.next.next.next = list.new Node(7);
		list.head.next.next.next.next  = list.new Node(8);

		System.out.println("Creating Linked List....");
		list.printList(list.head);
		System.out.println("");

		//Deleting Node with value 10
		System.out.println("Deleting Node with value " + list.head.next.next.data);
		list.deleteNode(list.head, list.head.next.next);
		System.out.println("Modified Linked List...");
		list.printList(list.head);
	}
}