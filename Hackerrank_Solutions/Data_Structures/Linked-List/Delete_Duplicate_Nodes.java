/*
Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

Node RemoveDuplicates(Node head) {
    // This is a "method-only" submission. 
    // You only need to complete this method. 
      if(head == null)
          return null;
      Node curr = head,next;
      while(curr.next!=null){
          if(curr.data == curr.next.data){
              next = curr.next.next;
              curr.next = null; 
              curr.next = next;    
          }
          else
              curr=curr.next;
              
      }
      return head;
  
  }
