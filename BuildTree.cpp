#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this->data=data;
    left = NULL;
    right = NULL;  
  }
};
Node* buildTree(){
  int data;
  cout<< "Enter the data: "<<endl;

  cin >> data;
  if(data == -1){
    return NULL;
  }
  //Step A, B, C
  Node* root =  new Node(data);
  cout << "Enter data for left part of " << data << " node " <<endl;
  root->left = buildTree();
  cout << "Enter data for right part of " << data << " node " <<endl;
  root->right = buildTree();
  return root;   
}

int main() {
  Node* root = NULL;
  root = buildTree();

}
