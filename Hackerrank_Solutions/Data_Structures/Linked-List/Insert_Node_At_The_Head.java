/*
  Insert Node at the beginning of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
// This is a "method-only" submission. 
// You only need to complete this method. 

Node Insert(Node head,int x) {
    Node temp = new Node();
    temp.data = x;
    if(head == null)
        head = temp;
    else{
        temp.next = head;
        head = temp;
    }
    return head;
}
