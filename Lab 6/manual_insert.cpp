#include <iostream>

using namespace std;

typedef int valueType;

struct TreeNode {
    valueType val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(valueType val, TreeNode *left = 0, TreeNode *right = 0)
            : val(val), left(left), right(right) {}
};

void check(TreeNode *r) {
    /* the code for checking is hidden. */
}

int main() {
    TreeNode *root = new TreeNode(20);
    TreeNode *n1 = new TreeNode(5);
    root->left = n1;
    TreeNode *n2 = new TreeNode(40);
    root->right = n2;
    TreeNode *n3 = new TreeNode(35);
    n2->left = n3;
    TreeNode *n4 = new TreeNode(7);
    n1->right = n4;
    check(root);
}