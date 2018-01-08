/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
Node Insert(Node head,int data) {
    // This is a "method-only" submission. 
    // You only need to complete this method. 
        Node curr;
        Node temp = new Node();
        temp.data = data;
        if(head == null){
            head = temp;
        }
        else{
        for(curr=head;curr.next!=null;curr=curr.next);
       
        curr.next = temp;
        temp.next = null;
        }   
        return head;
      
    }