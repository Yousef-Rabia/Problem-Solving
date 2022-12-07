#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/**
 * Definition for singly-linked list.  };
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* right = head;
        ListNode* left = head;
        for (int i = 0; i < n; i++)
        {
            right = right->next;
        }
        if (!right)
            return head->next;
        right = right->next;
        while (right)
        {
            left = left->next;
            right = right->next;
        }
        left->next = left->next->next;
        return head;
    }
 





