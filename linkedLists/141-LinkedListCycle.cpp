/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*
    The function uses two nodes, one that goes slow(for each iteration of the while loop, the node goes one step forward into the linked list, 
    and one that goes fast(for each iteration of the while loop, the node goes two steps further into the linked list).
    When the two nodes are equal, it means that there is a cycle inside the linked list and the function returns true.
    If the loop is finnished, it means that the whole linked list was iterated and no cycle was found, the function returns false.
    The concept behind the solution is the Floyd’s Cycle Detection
    Space complexity:
    Since the algotrithm is only using two nodes and updates them , the space complexity is O(1)
    Time complexity : O(n)
    */
    bool hasCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    
        if(slow==fast) return true;

       }
        return false;
    }
};
