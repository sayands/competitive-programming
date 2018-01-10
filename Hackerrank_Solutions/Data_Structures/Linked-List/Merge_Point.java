/*
  Find merge point of two linked lists
  head pointer input could be NULL as well for empty list
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/
int getCount(Node head){
    Node curr = head;
    int count = 0;
    while(curr!=null){
        count++;
        curr=curr.next;
     }
    return count;
}
int getIntersectionNode(int d,Node headA,Node headB){
    int i;
    Node currA = headA,currB = headB;
    for(i=0;i<d;i++){
        if(currA == null)
            return -1;
        currA = currA.next;
    }
    while(currA!=null && currB!=null){
        if(currA.data == currB.data)
            return currA.data;
        currA=currA.next;
        currB=currB.next;
    }
    return -1;
}
int FindMergeNode(Node headA, Node headB) {
    // Complete this function
    // Do not write the main method. 
    int c1 = getCount(headA);
    int c2 = getCount(headB);
    int d;
    if(c1>c2){
        d=c1-c2;
        return getIntersectionNode(d,headA,headB);
    }
    else{
        d=c2-c1;
        return getIntersectionNode(d,headB,headA);
    }
  
}