/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
  Initialize an empty array to hold ListNode pointers. Traverse the linked list, and store the pointer in the array. Keeping
  count of the number of nodes in the list, finally, returning the appropriate middle element in the array. 
  
  Time complexity : O(N) for traversing the linked list of N nodes
  Memory complexity : O(N) for storing the array of ListNode pointers
*/

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* arr [100];
    int len = 0;
    struct ListNode* p = head;
    
    while(p!=NULL)
    {
        arr[len]=p;
        //printf("worked");
        len++;
        p=p->next;
    }
    //printf("looped");
    return arr[len/2];
    
}

