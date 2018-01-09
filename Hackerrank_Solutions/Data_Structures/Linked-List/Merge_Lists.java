/*
  Merge two linked lists 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

Node mergeLists(Node a, Node b) {
    // This is a "method-only" submission. 
    // You only need to complete this method 
   Node c;
   if(a==null && b==null)
       return null;
   if(a==null)
       return b;
   if(b==null)
       return a;
   if(a.data<b.data){
       c=a;
       c.next=mergeLists(a.next,b);
   }
   else{
       c=b;
       c.next=mergeLists(a,b.next);
   }
   return c;

}