//Reverse A Linked List In Groups of 'k'

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
	Node reverse(Node head,int k){
		Node current = head;
		Node next = null;
		Node prev = null;

		int count = 0;

		while(count<k && current!=null){
			next = current.next;
			current.next = prev;
			prev = current;
			current = next;
			count++;
		}

		if(next!=null)
			head.next = reverse(next,k);

		return prev;
	}

	void push(int new_data){
		Node new_node = new Node(new_data);

		new_node.next = head;
		head = new_node; 
	}

	void printList(){
		Node temp=head;
		while(temp!=null){
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
		System.out.println();
	}
}
public class Reverse_A_Linked_List_In_Groups{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();
		list.push(1);
		list.push(2);
		list.push(3);
		list.push(4);
		list.push(5);
		list.push(6);
		list.push(7);
		list.push(8);
		list.push(9);
		list.push(10);

		System.out.println("Creating A Linked List...");
		list.printList();

		System.out.println("Reversing A Linked List...");
		list.head = list.reverse(list.head, 3);
		list.printList();

	}
}