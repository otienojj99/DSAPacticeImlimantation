#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next_link;
};

int LinkedListPrac()
{
    struct node *headNode, *newNode, *tempNode;
    headNode = 0;
    int choice = 1;
    int count = 0;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newNode->data);
        newNode->next_link = 0;
        if (headNode == 0)
        {
            headNode = tempNode = newNode;
        }
        else
        {
            tempNode->next_link = newNode;
            tempNode = newNode;
        }

        printf("press 1 to continue, 0 to end: ");
        scanf("%d", &choice);
    }

    tempNode = headNode;
    while (tempNode != 0)
    {
        printf("%d\n", tempNode->data);
        tempNode = tempNode->next_link;
        count++;
    }
    return count;
}

int main()
{

    int result = LinkedListPrac();
    printf("Total nodes: %d", result);

    return 0;
}