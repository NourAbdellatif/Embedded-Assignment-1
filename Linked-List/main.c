#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    int id;
    int date[3];
    int ly_result;
};

struct node{
    struct student;
    struct node* next;
    int data;
};

struct node* insert_at_head(struct node* newp,struct node* head){       /*el newp deh eh new pointer ely h3mlo insert*/
    int x;
    printf("please enter the new data node which will be the head \n");
    scanf("%d",&x);
    newp->data=x;
    newp->next=head;
    head=newp;
    return head;

};
void insert_at_middle(struct node* newp,struct node* head){
    int x;
    int y;
    printf("please enter the index of the node to be inserted \n");
    scanf("%d",&x);
    struct node* temp;
    temp=head;
    for (int i=0;i<x-1;i++){
        temp= temp->next;
        }
    printf("please enter the new data node which will be the tail \n");
    scanf("%d",&y);
    newp->next=temp->next;
    newp->data=y;
    temp->next=newp;
};


void insert_at_end(struct node* newp,struct node* head){
    struct node* temp;
    int x;
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    printf("please enter the new data node \n");
    scanf("%d",&x);
    temp->next=newp;
    newp->data=x;
    newp->next=NULL;

};

struct node* createList(int n)
{
    struct node *newNode, *temp, *head;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
    return head;
}
void traverseList(struct node *head)
{
    struct node *temp;

    // Return if list is empty
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
int main()
{
    int N;
    struct student st1;
    struct node* head1;
    printf("Greetings this is our project! \nplease enter the number of elements in the linked list \n");
    scanf("%d",&N);
    head1=createList(N);
    traverseList(head1);
    struct node* st0;
    struct node* st7;
    struct node* st8;
    st0=(struct node *)malloc(sizeof(struct node));
    st7=(struct node *)malloc(sizeof(struct node));
    st8=(struct node *)malloc(sizeof(struct node));
    head1=insert_at_head(st0,head1);
    traverseList(head1);
    insert_at_middle(st7,head1);
    traverseList(head1);
    insert_at_end(st8,head1);
    traverseList(head1);

    return 0;
}
