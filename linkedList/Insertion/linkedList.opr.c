#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* link;
};

void traversal(struct Node* ptr){
    int i = 0;
    while(ptr != NULL){
        printf("Node %d: %d\n", i+1, ptr->data);
        ptr = ptr->link;
        i++;
    }
}

struct Node* insert(struct Node* head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
}

int main(){
    int n;
    printf("How many nodes you want in the linked list?\n");
    printf("Please enter here :");
    scanf("%d", &n);


    struct Node* head = NULL;
    struct Node* end = NULL;
    struct Node* newNode = NULL;

    for(int i = 0; i < n; i++){
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter the data for node %d : ", i+1);
        scanf("%d", &newNode->data);

        newNode->link = NULL;

        if(head == NULL){
            head = newNode;
            end = newNode;

        }
        else{
            end->link = newNode;
            end = newNode;
        }
    }


    printf("Linked List:\n");
    traversal(head);

    return 0;
}