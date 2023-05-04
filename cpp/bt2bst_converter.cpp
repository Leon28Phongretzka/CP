#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;

struct Node
{
    int data;
    Node *left, *right;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(Node *node)
{
    if(!node) return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void sort(vector<int> &v)
{
    sort(v.begin(), v.end());
}

Node* convert(Node *root)
{
    if(!root) return NULL;
    Node *left = convert(root->left);
    Node *right = convert(root->right);
    root->left = root->right = NULL;
    root->right = right;
    if(!left) return root;
    Node *temp = left;
    while(temp->right) temp = temp->right;
    temp->right = root;
    return left;
}

Node* convertToBST(Node *root)
{
    if(!root) return NULL;
    vector<int> v;
    inorder(root, v);
    sort(v);
    Node *newRoot = NULL;
    for(int i = 0; i < v.size(); i++)
        newRoot = insert(newRoot, v[i]);
    return newRoot;
}

Node* insert(Node* node, int key)
{
    if(!node) return newNode(key);
    if(key < node->data)
        node->left = insert(node->left, key);
    else if(key > node->data)
        node->right = insert(node->right, key);
    return node;
}

int main()
{
    Node* root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->left->left = newNode(8);
    root->left->right = newNode(7);
    root->right->left = newNode(12);
    root->right->right = newNode(20);

    // Print all node of tree before order
    

    cout << endl;
    
    inorder(root);
    cout << endl;
}
