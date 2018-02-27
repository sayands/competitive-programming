//Applying Merge Sort On A Linked List

import java.util.*;

import java.util.*;

class LinkedList{
	Node head = null;
	class Node{
		int data;
		Node next;
		Node(int d){
			data = d;
			next = null;
		}
	}
	Node sortedMerge(Node a,Node b){
		Node result = null;

		if(a==null)
			return b;
		if(b==null)
			return a;

		if(a.data<=b.data){
			result = a;
			result.next = sortedMerge(a.next, b);
		}
		else{
			result = b;
			result.next = sortedMerge(a, b.next);
		}
		return result;
	}
	Node mergeSort(Node h){
		if(h==null || h.next == null)
			return h;

		Node middle = getMiddle(h);
		Node nextOfMiddle = middle.next;

		middle.next = null;

		Node left =  mergeSort(h);

		Node right = mergeSort(nextOfMiddle);

		Node sortedList = sortedMerge(left, right);

		return sortedList;
	}
	Node getMiddle(Node h){
		if(h==null)
			return h;
		Node fastptr = h.next;
		Node slowptr = h;

		while(fastptr!=null){
			fastptr = fastptr.next;
			if(fastptr!=null){
				slowptr = slowptr.next;
				fastptr = fastptr.next;
			}
		}

		return slowptr;
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


public class Merge_Sort_List{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();

		list.push(2);
		list.push(1);
		list.push(0);
		list.push(5);
		list.push(3);
		list.push(10);
		list.push(8);
		list.push(4);
		list.push(20);

		System.out.println("Creating Linked List...");
		list.printList();

		System.out.println("Sorted Linked List...");
		list.head = list.mergeSort(list.head);
		list.printList();

	}
}