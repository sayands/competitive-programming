/*
  Delete Node at a given position in a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    // This is a "method-only" submission. 
    // You only need to complete this method. 

    Node Delete(Node head, int position) {
        // Complete this method
         Node curr = head; int count = 1;
          if(position == 0){
              head = head.next;
          }
          else{
          while(curr!=null){
              if(count == position){
                  curr.next = (curr.next).next;
                  break;
              }  
              count++;
              curr = curr.next;
           }
          }   
          return head;
      
      }