// Given head, the head of a linked list, determine if the linked list has a cycle in it.
// There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
// Return true if there is a cycle in the linked list. Otherwise, return false.

// Input: head = [3,2,0,-4], pos = 1
// Output: true
// Input: head = [1,2], pos = 0
// Output: true
// Input: head = [1], pos = -1
// Output: false

// Constraints:
//     The number of the nodes in the list is in the range [0, 104].
//     -105 <= Node.val <= 105
//     pos is -1 or a valid index in the linked-list.

// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     struct ListNode *next;
//  * };

//My way(尚未精簡)
bool hasCycle(struct ListNode *head) {
    if(head == NULL){
        return false;
    }
    struct ListNode *preCurrent = head;
    for(struct ListNode *current = head->next;current != NULL; current = current->next){
        if(current == preCurrent)
            return true;      
        if(current->val == -10001)
            return true;
        preCurrent->val = -10001;
        current->val = -10001;
        preCurrent = current;
    }
    return false; if(head == NULL) return false;
}