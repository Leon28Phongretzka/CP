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

void inorder(Node* node) {
  if (node == NULL) return;
  inorder(node->left);
  cout << node->data << " ";
  inorder(node->right);
}

void leftRotate(Node* &root)
{
    Node *temp = root->right;
    root->right = temp->left;
    temp->left = root;
    root = temp;
}

void rightRotate(Node* &root)
{
    Node *temp = root->left;
    root->left = temp->right;
    temp->right = root;
    root = temp;
}

int height(Node* node) {
  if (node == NULL) return 0;
  return max(height(node->left), height(node->right)) + 1;
}

Node *baln(Node* root)
{
    if(root == NULL) return NULL;
    if(abs(height(root->left) - height(root->right) > 1)
    {
        if (height(root->left->left) - height(root->left->right) > 0) {
        leftRotate(root->left);
        }
        rightRotate(root);
    }

    if (height(root->right) - height(root->left) > 1) {
    // If so, perform a right-right rotation.
    if (height(root->right->right) - height(root->right->left) > 0) {
      rightRotate(root->right);
    }
    leftRotate(root);
  }

  return root;

}
