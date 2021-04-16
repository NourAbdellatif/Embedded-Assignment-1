#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[100];
    int id;
    int day,month,year;
    int ly_result;
};

struct node{
    struct student st;
    struct node* next;
    int data;
};

struct node* insert_at_head(struct node* newN,struct node* head){       /*el newp deh eh new node ely h3mlo insert*/
    int x;
    printf("please enter the data of the new student which will be the head \n");
    printf("Please enter the Name: ");
    scanf("%s",&newN->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newN->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newN->st.day);
    printf("month: ");
    scanf("%d",&newN->st.month);
    printf("year: ");
    scanf("%d",&newN->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newN->st.ly_result);
    //newp->st.id=x;
    newN->next=head;
    head=newN;
    return head;

};
void insert_at_middle(struct node* newN,struct node* head){
    int x;
    int y;
    printf("please enter the index of the node to be inserted \n");
    scanf("%d",&x);
    struct node* temp;
    temp=head;
    for (int i=0;i<x-1;i++){
        temp= temp->next;
        }
    printf("please enter the data of the new student \n");
    printf("Please enter the Name: ");
    scanf("%s",&newN->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newN->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newN->st.day);
    printf("month: ");
    scanf("%d",&newN->st.month);
    printf("year: ");
    scanf("%d",&newN->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newN->st.ly_result);
    newN->next=temp->next;
    temp->next=newN;
};


void insert_at_end(struct node* newN,struct node* head){
    struct node* temp;
    int x;
    temp=head;
    while(temp->next!=NULL)
        temp=temp->next;

    printf("please enter the data of the new student which will be the tail \n");
    printf("Please enter the Name: ");
    scanf("%s",&newN->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newN->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newN->st.day);
    printf("month: ");
    scanf("%d",&newN->st.month);
    printf("year: ");
    scanf("%d",&newN->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newN->st.ly_result);
    temp->next=newN;
    newN->next=NULL;

};

struct node* createList(int n)
{
    struct node *newNode, *temp, *head;
    int i;

    head = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of student 1: \nPlease enter the Name: ");
    scanf("%s",&head->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&head->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&head->st.day);
    printf("month: ");
    scanf("%d",&head->st.month);
    printf("year: ");
    scanf("%d",&head->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&head->st.ly_result);

    //head->data = x; // Link data field with data
    head->next = NULL; // Link address field to NULL
    //head->st.id=x;

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

    printf("Enter the data of student %d: \nPlease enter the Name: ",i);
    scanf("%s",&newNode->st.name);
    printf("Please enter the ID: ");
    scanf("%d",&newNode->st.id);
    printf("Please enter the Birthday:\nday: ");
    scanf("%d",&newNode->st.day);
    printf("month: ");
    scanf("%d",&newNode->st.month);
    printf("year: ");
    scanf("%d",&newNode->st.year);
    printf("Please enter the last year result: ");
    scanf("%d",&newNode->st.ly_result);

        //newNode->data = x; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL
       // newNode->st.id=x;
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
        printf("Name: %s\nID = %d\nbirthday : %d / %d / %d\nlast year result : %d\n", temp->st.name,temp->st.id,temp->st.day,temp->st.month,temp->st.year,temp->st.ly_result); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
int main()
{
    int N;
    struct student st1;
    struct node* head1;
    printf("Greetings this is our project! \nPlease enter the number of elements in the linked list \n");
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
