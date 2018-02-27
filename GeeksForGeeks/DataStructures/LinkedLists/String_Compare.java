//Compare Two Strings Represented As Linked Lists

import java.util.*;

class LinkedList{
	Node a,b;
	class Node{
		char data;
		Node next;
		Node(char d){
			data = d;
			next = null;
		}
	}
	int compare(Node l1,Node l2){
		if(l1 == null && l2 == null)
			return 1;
		while(l1!=null && l2!=null && l1.data == l2.data){
			l1 = l1.next;
			l2 = l2.next;
		}

		if(l1!=null && l2!=null)
			return (l1.data>l2.data)?1:-1;
		if(l1!=null && l2 == null)
			return 1;
		if(l1==null && l2!=null)
			return -1;
		return 0;
	}

}
public class String_Compare{
	public static void main(String[] args) {
		LinkedList list = new LinkedList();
		list.a = list.new Node('a');
		list.a.next = list.new Node('b');
		list.a.next.next = list.new Node('c');
		list.a.next.next.next = list.new Node('d');
		list.a.next.next.next.next  = list.new Node('e');

		list.b = list.new Node('c');
		list.b.next = list.new Node('d');
		list.b.next.next = list.new Node('a');
		list.b.next.next.next = list.new Node('q');
		
		int value = list.compare(list.a,list.b);
		System.out.println(value);

	}
}