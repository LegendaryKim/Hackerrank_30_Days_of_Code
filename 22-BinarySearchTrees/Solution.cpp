#include <iostream>
#include <cstddef>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution{
    public:
        Node* insert(Node* root, int data) {
            if (root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if (data <=root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

                return root;                

            }
        }
        int getHeight(Node* root) {
            //Write your code here
            if (root == NULL) {
                return -1;
            } else {
                int leftHeight;
                int rightHeight;
                leftHeight = getHeight(root->left);
                rightHeight = getHeight(root->right);

                // if (leftHeight >= rightHeight) {
                //     return 1 + leftHeight;    
                // } else{
                //     return 1 + rightHeight;
                // }

                return (leftHeight >= rightHeight) ?  1 + leftHeight: 1 + rightHeight;
                
            }
        }
};

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;
    while(t-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }

    int hegiht = myTree.getHeight(root);
    cout << hegiht;

    return 0;
}



