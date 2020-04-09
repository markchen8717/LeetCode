/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
  Initialize an empty array to hold ListNode pointers. Traverse the linked list, and store the pointer in the array, keeping
  count of the number of nodes in the list, and finally returning the appropriate middle element in the array. 
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

