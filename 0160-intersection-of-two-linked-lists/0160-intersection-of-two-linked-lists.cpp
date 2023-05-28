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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *l1 = headA, *l2 = headB;
        map <ListNode *, int> exist;
        while (l1 != NULL)
        {
            exist [l1] = 1;
            l1 = l1 -> next;
        }

        while (l2 != NULL)
        {
            if (exist [l2])
                return l2;
            l2 = l2 -> next;
        }

        return NULL;
    }
};