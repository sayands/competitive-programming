// Union and Intersection Of Two Linked Lists

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

	void printList(){
		Node temp=head;
		while(temp!=null){
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
		System.out.println();
	}

	public void append(int new_data){
		if(this.head ==null){
			Node n = new Node(new_data);
			this.head = n;
			return;
		}
		Node n1 = this.head;
		Node n2 = new Node(new_data);

		while(n1.next != null)
			n1 = n1.next;

		n1.next = n2;
		n2.next = null;
	}

	boolean isPresent(Node head, int data){
		Node t = head;
		while(t != null){
			if(t.data == data)
				return true;
			t = t.next;
		}
		return false;
	}

	LinkedList getIntersection(Node head1, Node head2){
		HashSet<Integer> hset = new HashSet<>();
		Node n1 = head1;
		Node n2 = head2;

		LinkedList result = new LinkedList();

		while(n1 != null){
			hset.add(n1.data);
			n1 = n1.next;
		}

		while(n2 != null){
			if(hset.contains(n2.data))
				result.push(n2.data);
			n2 = n2.next;
		}

		return result;
	}

	LinkedList getUnion(Node head1, Node head2){
		HashMap<Integer, Integer> hmap = new HashMap<>();

		Node n1 = head1;
		Node n2 = head2;

		LinkedList result = new LinkedList();

		while(n1!=null){
			if(hmap.containsKey(n1.data)){
				int val = hmap.get(n1.data);
				hmap.put(n1.data, val+1);
			}
			else{
				hmap.put(n1.data, 1);
			}

			n1 = n1.next;
		}

		while(n2!=null){
			if(hmap.containsKey(n2.data)){
				int val = hmap.get(n2.data);
				hmap.put(n2.data, val+1);
			}
			else{
				hmap.put(n2.data, 1);
			}

			n2 = n2.next;
		}

		for(int a:hmap.keySet())
			result.append(a);

		return result;
	}
}

public class Union_Intersection{
	public static void main(String[] args) {
		LinkedList list1 = new LinkedList();
		LinkedList list2 = new LinkedList();
		LinkedList union = new LinkedList();
		LinkedList intersection = new LinkedList();
		LinkedList result = new LinkedList();

		list1.push(20);
		list1.push(10);
		list1.push(15);
		list1.push(20);

		list2.push(4);
		list2.push(3);
		list2.push(10);
		list2.push(20);

		intersection = result.getIntersection(list1.head, list2.head);
		union = result.getUnion(list1.head, list2.head);

		System.out.println("First List----");
		list1.printList();

		System.out.println("Second List----");
		list2.printList();

		System.out.println("Union List----");
		union.printList();

		System.out.println("Intersection List----");
		intersection.printList();


	}
}