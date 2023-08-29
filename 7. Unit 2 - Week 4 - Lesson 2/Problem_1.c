
//                                       ANSWER CODE
//................................................................................................

struct node
{
    int data;
    struct node *next; 
}; 
typedef struct node *NODE;

NODE createNode()
{
    NODE temp;
    temp = (NODE) malloc(sizeof(struct node));
    temp->next= NULL;
    return temp;

}

NODE insertAtBegin(NODE first, int x) 
{

    NODE temp;
    temp = createNode(); 
    temp->data = x; 
    NODE siv = first;
    first = temp;
    first->next = siv;
    return first;
}

int count(NODE first)
{
    NODE temp; 
    temp = first; 
    int count =0; 
    while(temp = NULL)
    {
        temp = temp->next; 
        count++;
    }

    return count;
}
    
void traverseList(NODE first) 
{ 
    NODE temp = first;

    while (temp != NULL) 
    {
        printf("%d --> ",temp -> data); 
        temp = temp ->next;

    } 
    printf("NULL\n");

}