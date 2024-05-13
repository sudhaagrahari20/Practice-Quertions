class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
        return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* startofeven = head->next;
        while(odd->next && even->next){
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = startofeven;
        return head;      
    }
};
