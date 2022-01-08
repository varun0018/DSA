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

    void insertNode(TreeNode *new_node)
    {
        if (root == NULL)
        {
            root = new_node;
            cout << "Value inserted as a root" << endl;
        }
        else
        {
            TreeNode *t = root;
            while (t != NULL)
            {
                if ((new_node->value < t->value) && (t->left == NULL))
                {
                    t->left = new_node;
                    cout << "value inserted as left" << endl;
                    break;
                }
                else if (new_node->value < t->value)
                {
                    t = t->left;
                }
                else if ((new_node->value > t->value) && (t->right == NULL))
                {
                    t->right = new_node;
                    cout << "value insertd at right node" << endl;
                    break;
                }
                else
                {
                    t = t->right;
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
};

int main()
{
    int option, val;
    BST obj;

    do
    {
        cin >> option;
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

            break;

            break;
        default:
            break;
        }
    } while (option != 0);
}