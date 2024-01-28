#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e6+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;

    void preOrderTraversal(Node* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }

    void inOrderTraversal(Node* node) {
        if (node != nullptr) {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }

    void postOrderTraversal(Node* node) {
        if (node != nullptr) {
            postOrderTraversal(node->left);
            postOrderTraversal(node->right);
            cout << node->data << " ";
        }
    }

    void preOrder() {
        preOrderTraversal(root);
        cout << endl;
    }

    void inOrder() {
        inOrderTraversal(root);
        cout << endl;
    }

    void postOrder() {
        postOrderTraversal(root);
        cout << endl;
    }

    BinaryTree() : root(nullptr) {}

    void addNode(int value) {
        root = addNodeRecursive(root, value);
    }

    Node* addNodeRecursive(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = addNodeRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = addNodeRecursive(node->right, value);
        }

        return node;
    }
};

int main() {
    BinaryTree tree;

    int x;
    while (cin >> x) tree.addNode(x);

    tree.preOrder();
    tree.inOrder();
    tree.postOrder();

    return 0;
}