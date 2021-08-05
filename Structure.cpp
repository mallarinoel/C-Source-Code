//1st Trial Switch Case Data Structure
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head = NULL, *n;

Node* newnode(int x)
{
    n = new Node;
    n-> data = x;
    n-> next = NULL;
    return (n);
}

void insert(Node *temp) {
    if (head==NULL)
        head=temp;
    else {
        temp->next = head;
        head=temp;
    }

}

Node* DeleteFirstNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    // Move the head pointer to the next node
    Node* tempNode = head;
    head = head->next;
    delete tempNode;

    return head;
}

Node* DeleteLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

// first find remove last list
    Node* remove_last = head;
    while (remove_last->next->next != NULL)
        remove_last = remove_last->next;

// Delete the last list
    delete (remove_last->next);

// set next of remove_last to null
    remove_last->next = NULL;

    return head;
}

void DisplayList() {
    Node *n;
    n= head;
    if (head==NULL) {
        cout<<"Empty List"<< endl;
    } else {
        while (n!=NULL) {
            cout<<n->data<<" ";
            n=n->next;
        }
    }
}
void clearScreen() {
    cout << "\033[H\033[2J";
}
int main()
{
    int chooser, add_list;
    Node *new_ptr;
    char yn;
    do {
        cout << "\t｡☆✼★━━━━━━━━━━━━★✼☆｡" << endl;
        cout << "//======= Linked List Menu =======//";
        cout<<"\n[1] = Add List\n[2] = Delete First List\n[3] = Delete Last List\n[4] = Display List\n[5] = Exit Program\n";
        cout<<"\nEnter your choice: ";
        cin>>chooser;
        switch(chooser) {
        case 1:
            cout<<"\n//====Add new List====//";
            cout<<"\nEnter Add List : ";
            cin>>add_list;
            new_ptr=newnode (add_list);
            insert(new_ptr);
            cout << "[ " << add_list << " ] Added successfully" << endl;
            cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << endl;
            cout << "Would you like to continue? [Y/N]" << endl;
            cout << "Choice : ";
            cin >> yn;
            clearScreen();
            break;
        case 2:
            cout<<"\n//====Delete First List====//";
            head = DeleteFirstNode(head);
            cout<<"\nNew List\n"<<endl;
            for (new_ptr = head; new_ptr != NULL; new_ptr = new_ptr->next)
                cout << new_ptr->data << " ";
            if(new_ptr == NULL)
                // DeleteFirstList();
            cout << endl;;
            cout << "[ "<< DeleteFirstNode << " ] Deleted successfully" << endl;
            cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << endl;
            cout << "Would you like to continue? [Y/N]" << endl;
            cout << "Choice : ";
            cin >> yn;
            clearScreen();
            break;
        case 3:
            cout<<"\n//==== Delete Last List====//";
            head = DeleteLastNode(head);
            cout<<"\nNew List\n"<<endl;
            for (new_ptr = head; new_ptr != NULL; new_ptr = new_ptr->next)
                cout << new_ptr->data << " ";
            if(new_ptr == NULL)

                cout << "[ " << head << " ] Deleted successfully" << endl;
           cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << endl;
             cout << "Would you like to continue? [Y/N]" << endl;
            cout << "Choice : ";
            cin >> yn;
            clearScreen();
            break;
        case 4:
            cout<<"\n//==== Display List =====//\n\n";
            cout << "List : ";
            DisplayList();
            cout << endl;
            cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << endl;
            cout << "Would you like to continue? [Y/N]" << endl;
            cout << "Choice : ";
            cin >> yn;
            clearScreen();
            break;
        case 5:
            cout<<"\n//==== Exit Program =====//\n\n";
            exit(0);
        default:
            cout<<"\n\n("<<chooser<<") "<<" not found, Try Again!" << endl;
            cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << endl;
            cout << "Would you like to continue? [Y/N]" << endl;
            cout << "Choice : ";
            cin >> yn;
            clearScreen();
        }
    }
    while(yn == 'Y' || yn == 'y');

    return 0;
}
