/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
    
int GetNode(Node head,int n) {
    // This is a "method-only" submission. 
    // You only need to complete this method. 
    Node curr = head;
    int count = 0,pos = 0;
   for(;curr!=null;curr=curr.next)
       count++;
   for(curr=head;curr!=null;curr=curr.next){
       pos++;
       if(count-n == pos)
           break;
   }
   return curr.data;

}