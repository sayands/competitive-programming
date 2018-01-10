/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
     Node prev;
  }
*/

Node SortedInsert(Node head,int data) {
    Node curr = head;
    Node temp = new Node();
    temp.data = data;
    if(head == null)
        head=temp;
    else if(head.data >= temp.data){
        temp.next = head;
        temp.next.prev = temp;
        head=temp;
    }    
    else{
     while(curr.next!=null && curr.next.data<=data)
         curr=curr.next;
     temp.next = curr.next;
     if(curr.next!=null)
         temp.next.prev = temp;
     curr.next = temp;
     temp.prev = curr;
    }
    return head;
}