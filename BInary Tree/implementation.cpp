#include <iostream>

using namespace std;
#define SPACE 10

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;
    BST()
    {
        root = NULL;
    }
    bool isTreeEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void insertNode(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "Value Inserted as root node!" << endl;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (new_node->value == temp->value)
                {
                    cout << "Value Already exist,"
                         << "Insert another value!" << endl;
                    return;
                }
                else if ((new_node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = new_node;
                    cout << "Value Inserted to the left!" << endl;
                    break;
                }
                else if (new_node->value < temp->value)
                {
                    temp = temp->left;
                }
                else if ((new_node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = new_node;
                    cout << "Value Inserted to the right!" << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
    void print2D(TreeNode *r, int space)
    {
        if (r == NULL) // Base case  1
            return;
        space += SPACE;           // Increase distance between levels   2
        print2D(r->right, space); // Process right child first 3
        cout << endl;
        for (int i = SPACE; i < space; i++) // 5
            cout << " ";                    // 5.1
        cout << r->value << "\n";           // 6
        print2D(r->left, space);            // Process left child  7
    }

    void printPreorder(TreeNode *r)
    {
        if (r == NULL)
        {
            return;
        }
        cout << r->value << " ";
        printPreorder(r->left);
        printPreorder(r->right);
    }

    void printInorder(TreeNode *r)
    {
        if (r == NULL)
        {
            return;
        }
        printInorder(r->left);
        cout << r->value << " ";
        printInorder(r->right);
    }

    void printPostorder(TreeNode *r)
    {
        if (r == NULL)
        {
            return;
        }
        printPostorder(r->left);
        printPostorder(r->right);
        cout << r->value << " ";
    }

    TreeNode *iterativeSearch(int v)
    {
        if (root == NULL)
        {
            return root;
        }
        else
        {
            TreeNode *temp = root;
            if (temp->value == v)
            {
                return temp;
            }
            else if (v < temp->value)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
    }
    int treeHeight(TreeNode *r)
    {
        if (r == NULL)
        {
            return -1;
        }
        else
        {
            int lheight = treeHeight(r->left);
            int rheight = treeHeight(r->right);
            if (lheight > rheight)
            {
                return (lheight + 1);
            }
            else
            {
                return (rheight + 1);
            }
        }
    }

    void printGivenLevel(TreeNode *r, int level)
    {
        if (r == NULL)
        {
            return;
        }
        else if (level == 0)
        {
            cout << r->value;
        }
        else
        {
            printGivenLevel(r->left, level - 1);
            printGivenLevel(r->right, level - 1);
        }
    }
    //printing each level
    void printLevelOrder(TreeNode *r)
    {
        int h = treeHeight(r); //getting height of the tree
        for (int i = 0; i < h; i++)
        {
            printGivenLevel(r, i);
        }
    }

    TreeNode *minValueNode(TreeNode *node)
    {
        TreeNode *current = node;
        /* loop down to find the leftmost leaf */
        while (current->left != NULL)
        {
            current = current->left;
        }
        return current;
    }

    TreeNode *deleteNode(TreeNode *r, int v)
    {
        TreeNode *temp;
        if (r == NULL)
        {
            return r;
        }
        else if (v < r->value) //if v value is smaller then move to left
        {
            r->left = deleteNode(r->left, v);
        }
        else if (v > r->value) //if v value is larger then move to right
        {
            r->right = deleteNode(r->right, v);
        }
        else //if value matches
        {
            if (r->left == NULL) //only one right child
            {
                temp = r->right;
                delete r;
                return temp;
            }
            else if (r->right == NULL)
            {
                temp = r->left;
                delete r;
                return temp;
            }
            else
            {
                temp = minValueNode(r->right);
                r->value = temp->value;
                r->right = deleteNode(r->right, temp->value);
            }
        }
        return r;
    }
};

int main()
{
    BST obj;
    int option, val;

    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print/Traversal BST values" << endl;
        cout << "5. Height of Tree" << endl;
        cout << "6. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        //Node n1;
        TreeNode *new_node = new TreeNode();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "INSERT" << endl;
            cout << "Enter VALUE of TREE NODE to INSERT in BST: ";
            cin >> val;
            new_node->value = val;
            // obj.root = obj.insertRecursive(obj.root, new_node);
            obj.insertNode(new_node);
            cout << endl;
            break;
        case 2:
            cout << "PRINT 2D: " << endl;
            obj.print2D(obj.root, 5);
            cout << endl;
            obj.printPreorder(obj.root);
            cout << endl;
            obj.printInorder(obj.root);
            cout << endl;
            obj.printPostorder(obj.root);
            cout << endl;
            break;
        case 3:
            cout << "Enter value to search" << endl;

            int v;
            cin >> v;
            new_node = obj.iterativeSearch(v);
            if (new_node != NULL)
            {
                cout << "node found" << endl;
            }
            else
            {
                cout << "node not found" << endl;
            }
            break;
        case 4:
            cout << "height of the tree is " << obj.treeHeight(obj.root) << endl;
            break;
        case 5:
            cout << "bfs of the tree is" << endl;
            obj.printLevelOrder(obj.root);
            cout << endl;
            break;
        case 6:
            int num;
            cout << "Enter the num to delete" << endl;
            cin >> num;
            obj.deleteNode(obj.root, num);
            break;

        default:
            cout
                << "enter an valid number" << endl;
            break;
        }

    } while (option != 0);
}
