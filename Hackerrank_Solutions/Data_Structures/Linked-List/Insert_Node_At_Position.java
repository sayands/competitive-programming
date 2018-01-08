/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    

Node InsertNth(Node head, int data, int position) {
    // This is a "method-only" submission. 
     // You only need to complete this method. 
     Node curr = head;
     Node temp = new Node();
     temp.data = data;
     int count = 1;
     if(head == null){
         head = temp;
     }
     if(position == 0){
         temp.next = head;
         head = temp;
     }
     else{
     for(;curr.next!=null;curr=curr.next){
         if(count == position){
             temp.next = curr.next;
             curr.next = temp;
             break;
         }
         count++;
      }
     } 
     return head;
 }
 