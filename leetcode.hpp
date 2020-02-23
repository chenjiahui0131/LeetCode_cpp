#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *createList(vector<int> nums) {
    if (nums.size() == 0)
        return NULL;
    ListNode *result = new ListNode(nums[0]);
    ListNode *last = result;
    for (int i = 1; i < nums.size(); i++) {
        ListNode *current = new ListNode(nums[i]);
        last->next = current;
        last = current;
    }
    return result;
}

void showList(ListNode *p) {
    if (p == NULL)
        return;
    cout << p->val;
    p = p->next;
    while (p != NULL) {
        cout << " -> " << p->val;
        p = p->next;
    }
    cout << endl;
}


 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

TreeNode *createTree(vector<int> nums) {
    if (nums.size() == 0)
        return NULL;
    TreeNode *root = new TreeNode(nums[0]);
    vector<TreeNode*> nodeList(nums.size());
    nodeList[0] = root;
    for (int i = 0; i < nums.size() >> 1; i ++) {
        if (nums[i] == -1)
            continue;
        if (2 * i + 1 < nums.size() && nums[2 * i + 1] != -1) {
            nodeList[2 * i + 1] = new TreeNode(nums[2 * i + 1]);
            nodeList[i]->left = nodeList[2 * i + 1];
        }
        if (2 * i + 2 < nums.size() && nums[2 * i + 2] != -1) {
            nodeList[2 * i + 2] = new TreeNode(nums[2 * i + 2]);
            nodeList[i]->right = nodeList[2 * i + 2];
        }
    }
    return root;
}

void preorder(TreeNode *root) {
    if (root == NULL) return;
    cout << root->val << endl;
    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode *root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->val << endl;
    inorder(root->right);
}

void showTree(TreeNode *root) {
    cout << "----Tree----" << endl;
    cout << "Preorder" << endl;
    preorder(root);
    cout << "Inorder" << endl;
    inorder(root);
}
