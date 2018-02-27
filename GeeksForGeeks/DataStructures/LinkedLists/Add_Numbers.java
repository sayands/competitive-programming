//Add Two Numbers represented as Linked Lists

import java.util.*;

class LinkedList{
	class Node{
		Node next;
		int data;
		Node(int d){
			data = d;
			next = null;
		}
	}

	void printList(Node head){
		while(head != null){
			System.out.print(head.data);
			head = head.next;
		}
		System.out.println();
	}

	Node head1,head2,result;
	int carry;

	void push(int val,int list){
		Node newnode = new Node(val);

		if(list == 1){
			newnode.next = head1;
			head1 = newnode;
		}
		else if(list == 2){
			newnode.next = head2;
			head2 = newnode;
		}
		else{
			newnode.next = result;
			result = newnode;
		}
	}

	void addSameSize(Node n,Node m){
		if(n == null)
			return;

		addSameSize(n.next, m.next);

		int sum = n.data + m.data + carry;
		carry = sum/10;
		sum = sum%10;

		push(sum, 3);
	}

	Node curr;

	void propagateCarry(Node head1){
		if(head1 != curr){
			propagateCarry(head1.next);
			int sum = carry + head1.data;
			carry = sum/10;
			sum%=10;

			push(sum, 3);
		}
	}

	int getSize(Node head){
		int count = 0;

		while(head != null){
			count++;
			head = head.next;
		}

		return count;
	}

	void addLists(){
		if(head1 == null){
			result = head2;
			return;
		}
		if(head2 == null){
			result = head1;
			return;
		}

		int size1 = getSize(head1);
		int size2 = getSize(head2);

		if(size1 == size2)
			addSameSize(head1, head2);
		else{
			if(size1<size2){
				Node temp = head1;
				head1 = head2;
				head2 = temp;
			}

			int diff = Math.abs(size1 - size2);

			Node temp = head1;
			while(diff-- >= 0){
				curr = temp;
				temp = temp.next;
			}

			addSameSize(curr, head2);

			propagateCarry(head1);
		}

		if(carry>0)
			push(carry, 3);
	}

}

public class Add_Numbers{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();

		list.head1 = null;
		list.head2 = null;
		list.result = null;
		list.carry = 0;

		int arr1[] = {9, 9, 9};
		int arr2[] = {1, 8};

		for(int i = arr1.length-1;i>=0;i--)
			list.push(arr1[i], 1);

		for(int i = arr2.length-1;i>=0;i--)
			list.push(arr2[i], 2);

		list.addLists();

		System.out.println("First Number---");
		list.printList(list.head1);

		System.out.println("Second Number---");
		list.printList(list.head2);

		System.out.println("Added Number---");
		list.printList(list.result);
	}
}