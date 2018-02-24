//Detection and Removal Of A Loop in Linked List

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
	void printList(){
		Node temp=head;
		while(temp!=null){
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
		System.out.println();
	}

	void detectandRemoveLoop(Node node){
		if(node == null || node.next == null)
			return;
		Node slow = node, fast = node;

		slow = slow.next;
		fast = fast.next.next;

		while(fast!= null && fast.next != null){
			if(slow == fast)
				break;

			slow = slow.next;
			fast = fast.next.next;
		}
		if(slow == fast){
			slow = node;
			while(slow.next != fast.next){
				slow = slow.next;
				fast = fast.next;
			}

			fast.next = null;
		}
	}
}

public class Detect_And_Remove_Loop{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();

		list.head = list.new Node(5);
		list.head.next = list.new Node(20);
		list.head.next.next = list.new Node(4);
		list.head.next.next.next = list.new Node(30);
		list.head.next.next.next.next = list.new Node(5);
		list.head.next.next.next.next.next = list.head.next.next;

		System.out.println("After Removal of Loop,Linked List...");
		list.detectandRemoveLoop(list.head);
		list.printList();
	}
}