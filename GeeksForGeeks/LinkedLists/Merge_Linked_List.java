//Merge two Linked Lists at Alternate Positons

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
	void push(int new_data){
		Node new_node = new Node(new_data);
		new_node.next = head;
		head = new_node;
	}
	void merge(LinkedList q){
		Node p_curr = head, q_curr = q.head;
		Node p_next,q_next;

		while(p_curr != null && q_curr != null){
			p_next = p_curr.next;
			q_next = q_curr.next;

			q_curr.next = p_next;
			p_curr.next = q_next;

			p_curr = p_next;
			q_curr = q_next;
		}
		q.head = q_curr;
	}
	void printList(){
		Node temp = head;
		while(temp!=null){
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
		System.out.println();
	}
}

public class Merge_Linked_List{
	public static void main(String[] args) {
		LinkedList list1 = new LinkedList();
		LinkedList list2 = new LinkedList();
		list1.push(3);
		list1.push(2);
		list1.push(1);

		System.out.println("First Linked List...");
		list1.printList();

		list2.push(8);
		list2.push(7);
		list2.push(6);
		list2.push(5);
		list2.push(4);

		System.out.println("Second Linked List...");
		list2.printList();

		list1.merge(list2);

		System.out.println("Modified First Linked List...");
		list1.printList();

		System.out.println("Modified Second Linked List...");
		list2.printList();
	}
}