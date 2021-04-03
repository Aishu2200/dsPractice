#include<stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *getNode(int value) {
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node*));
    temp->info=value;
    temp->next=NULL;
    return temp;
}
void initList(struct node **h) {
    (*h)=getNode(0);
}

void insert(struct node *head,int value) {
    struct node *temp=NULL;
    struct node *p=head->next;
    struct node *q=head;

    while(p && p->info <= value) {
        q=p;
        p=p->next;
    }
    temp=getNode(value);
    temp->next=p;
    q->next=temp;
    head->info++;

}

void display(struct node *head) {
    struct node *p=head->next;
    while(p) {
        printf("%d",p->info);
        p=p->next;
    }
}

struct node *search(struct node *head,int key){
    head=head->next;
    while(head){
        if(head->info >= key) {
            if(head->info == key)
                return head;
        }
        head=head->next;
    }
    return head;
}

int main() {
    struct node *head=NULL;
    int value,ch,key;
    struct node *p=NULL;

    initList(&head);

    while(1) {
        printf("\n1.Insert  2.Display:  3.Search:\t");
        printf(("\nEnter the choice:\t"));
        scanf("%d",&ch);

        switch(ch) {
            case 1:printf("Enter the value:\t");
                    scanf("%d",&value);
                    insert(head,value);
                    break;
            case 2:display(head);
                    break;
            
            case 3:printf("\n Enter the key element to search:\t");
                    scanf("%d",&key);
                    p=search(head,key);
                    if(p!=NULL) 
                        printf("key is found!");
                    
                    else                     
                        printf("key is not found!!");
                    break;

        
         }
}
}