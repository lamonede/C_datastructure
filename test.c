#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int value;
    struct ListNode *link; 
} ListNode;

ListNode* insert_first(ListNode *head, int data);
ListNode* delete_first(ListNode *head);
void print_list(ListNode *head);

int main(){
    ListNode *head = NULL;
    for(int i = 0; i < 5; i++){
        head = insert_first(head, i);
        print_list(head);
    }
    for(int i = 0; i < 5; i++){
        head = delete_first(head);
        print_list(head);
    }
}

ListNode* insert_first(ListNode *head, int data){
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->value = data;
    p->link = head;
    head = p;
    return head;
}
ListNode* delete_first(ListNode *head){
    ListNode *removed;
    if(head == NULL) return NULL;
    removed = head;
    head = head->link;
    free(removed);
    return head;
}

void print_list(ListNode *head){
    printf("lemonade");
}