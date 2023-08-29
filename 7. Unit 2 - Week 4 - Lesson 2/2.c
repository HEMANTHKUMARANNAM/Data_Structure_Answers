
struct node
{
    int data;
    struct node *next;
}; 
typedef struct node *NODE;

NODE createNode() 
{ 
    NODE temp;
    temp = (NODE) malloc(sizeof(struct
    temp ->next = NULL; return temp;
}

{

NODE insertAtEnd (NODE first, int x createNode();

NODE temp temp->data = x; if(first ==NULL)

=

{

}

first = temp; return first;

NODE siv first; = while(siv->next != NULL)

{

siv = siv->next; }

siv ->next= temp; return first;

void traverseList (NODE first)

NODE temp = first;

while(temp != NULL)

printf("%d -->

)

temp-> data ).


