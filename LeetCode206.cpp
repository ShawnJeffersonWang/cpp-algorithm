#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){};
    ListNode(int x) : val(x), next(nullptr){};
    ListNode(int x, ListNode* next) : val(x), next(next){};
};

class Solution {
   public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* cur = head;
        ListNode* pre = nullptr;
        while (cur) {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};

class Solution {
   public:
    ListNode* reverse(ListNode* pre, ListNode* cur) {
        if (cur == nullptr)
            return pre;
        ListNode* temp = cur->next;
        cur->next = pre;
        return reverse(cur, temp);
    }
    ListNode* reverseList(ListNode* head) { return reverse(nullptr, head); }
};
