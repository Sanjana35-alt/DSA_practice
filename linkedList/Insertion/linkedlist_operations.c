#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *link;
};


void traversal(struct Node *ptr){
    int i = 0;
    while(ptr != NULL){
        printf("Node %d : %d\n", i, ptr->data);
        i++;
        ptr = ptr->link;
    }

}

// struct Node * insertAtBegining(struct Node *head, int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->link = head;
//     ptr->data = data;
//     return ptr;
// }


// struct Node * insertAtIndex(struct Node* head, int data, int index){
//     struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* p = head;
//     int i = 0;

//     while(i != index-1){
//         p = p->link;
//         i++;
//     }
//     ptr->data = data;
//     ptr->link = p->link;
//     p->link = ptr;
//     return head;
// }




int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter the data for first node: ");
    scanf("%d", &head->data);
    head->link = second;

    printf("Enter the data for second node: ");
    scanf("%d", &second->data);
    second->link = third;

    printf("Enter the data for third node: ");
    scanf("%d", &third->data);
    third->link = NULL;

    // traversal(head);
    // head = insertAtIndex(head, 55, 2);
    traversal(head);

    return 0;
}