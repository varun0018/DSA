#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int key;    //address of the linked list
    int data;   //data of the linked list
    node *next; //pointer to next node of the linked list which points to the node type only

    node() //default constructor it gets called automatically when object is created
    {
        key = 0;     //assigining key value as 0
        data = 0;    //assigining data value as 0
        next = NULL; //assigining next pointer as NULL
    }

    node(int k, int d) //constructor with parameters
    {
        key = k;
        data = d;
    }
};

class singlyLinkedList
{
public:
    node *head; //pointer of type node which is the class that we created above
    singlyLinkedList()
    {
        head = NULL;
    }
    singlyLinkedList(node *n) //constructor with parameter of type node pointer
    {
        head = n;
    }

    node *nodeExists(int k) //checks if node is present by taking key as an argument
    {
        node *temp = NULL;  //temprory pointer which is NULL
        node *ptr = head;   //pointer ptr is assigned value of head
        while (ptr != NULL) //traverse through entire linked list
        {
            if (ptr->key == k) //check if key is equal to key we passed
            {
                temp = ptr; //assign value of ptr to temp
            }
            ptr = ptr->next; //else move to the next node
        }
        return temp;
    }

    //append a node to the list at the end
    //first check if node with same key name is present or not using nodeExist method
    //if it does not exist then append to end of list
    void appendNode(node *n)
    {
        if (nodeExists(n->key) != NULL) //condition of nodeExist method using the node we passed and getting its key using ->operator
        {
            cout << "Node already exist with key value: " << n->key << ",Append another node with different key value" << endl;
        }
        else //when node does not exist,we need to append
        {
            if (head == NULL) //when head is null ie the very first node of the linked list
            {
                head = n;
                cout << "Node appended" << endl;
            }
            else //when head is not null we need to traverse to last of linked list and connect the new node to the current last node of linked list
            {
                node *ptr = head;         //ptr pointer of type node pointind to head of linked list
                while (ptr->next != NULL) //treaversing using while looop
                {
                    ptr = ptr->next; //moving to next node
                }
                ptr->next = n; //ptr now has reached the end of list after execution of while loop so we can append the node that we passed
                cout << "Node Appended" << endl;
            }
        }
    }

    //here we prepend node to the linked list ie we are changing the first node or the head
    void prependNode(node *n)
    {
        if (nodeExists(n->key) != NULL) //condition of nodeExist method using the node we passed and getting its key using ->operator
        {
            cout << "Node already exist with key value: " << n->key << ",Append another node with different key value" << endl;
        }
        else
        {
            n->next = head; //storing the next poiner address of head to this n we passed
            head = n;
            cout << "Node prepended" << endl;
        }
    }

    //insert the node after a particular node
    void insertNodeAfter(int k, node *n)
    {
        node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No Node exists with key value: " << k << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL) //condition of nodeExist method using the node we passed and getting its key using ->operator
            {
                cout << "Node already exist with key value: " << n->key << ",Append another node with different key value" << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node inserted: " << endl;
            }
        }
    }

    //deleting a node by unique key
    void deleteNodeByKey(int k)
    {
        if (head == NULL)
        {
            cout << "linked list is empty cannot delete " << endl;
        }
        else if (head != NULL)
        {
            if (head->key == k) //deleating head node in linked list
            {
                head = head->next; //address is changed with next node
                cout << "Node unlinked with key value: " << k << endl;
            }
            else
            {
                node *temp = NULL;
                node *prevptr = head;
                node *currentptr = head->next;
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr->next = temp->next;
                        currentptr = currentptr->next;
                    }
                }
                if (temp != NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Node unlinked with key values " << k << endl;
                }
                else
                {
                    cout << "Node doesnot exist with key values " << k << endl;
                }
            }
        }
    }

    //update node by key value and change the data

    void updateNodeByKey(int k, int d)
    {
        node *ptr = nodeExists(k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "data updated successfully " << endl;
        }
        else
        {
            cout << "node doesnot exist with key value" << k << endl;
        }
    }

    //printing entire linked list
    void printList()
    {
        if (head == NULL)
        {
            cout << "No nodes in Linked list" << endl;
        }
        else
        {
            cout << endl
                 << "list values are: ";
            node *temp = head;

            while (temp != NULL)
            {
                cout << "(" << temp->key << "," << temp->data << ")-->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    singlyLinkedList s;
    int option;
    int key1, k1, data1;
    do
    {
        cout << "\n what operation do you want to perform.Enter 0 to exit" << endl;
        cout << "1.appendnode" << endl;
        cout << "2.prependnode" << endl;
        cout << "3.insert node after a particular node" << endl;
        cout << "4.delete a partiular node" << endl;
        cout << "5.update node key value" << endl;
        cout << "6.print the values" << endl;
        cout << "7.clear screen" << endl;
        cin >> option;
        node *n1 = new node();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "append node operation \nenter key and data of the node to be appended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            //cout<<n1.key<<" "<<n1.data<<endl;
            break;
        case 2:
            cout << "prepended node operation \nenter key and data of the node to be prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout << "insert node after operation \n edter key of existing node after which you want to insert this new node" << endl;
            cin >> k1;
            cout << "enter key and data of the new node first " << endl;
            cin >> key1;
            cin >> data1;
            n1->key = key1;
            n1->data = data1;
            s.insertNodeAfter(k1, n1);
            break;
        case 4:
            cout << "delete node by key operation \n enter key of the node to be deleted " << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "update node by key operation \nenter key and new data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updateNodeByKey(key1, data1);
            break;
        case 6:
            s.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "enter proper option no" << endl;
        }

    } while (option != 0);
}