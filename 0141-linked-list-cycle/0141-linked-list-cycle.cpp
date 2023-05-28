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
    bool hasCycle(ListNode *head) 
    {
        map <ListNode*, int> ptr;

        while (head != NULL)
        {
            if (ptr [head -> next])
                return true;
            
            ptr [head]++;
            head = head -> next;
        }
        return false;
    }
};