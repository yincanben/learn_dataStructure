#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "BST.h"
 
using namespace std;
 
// BST是满足如下3个条件的二叉树：
// 1. 节点的左子树包含的节点的值小于该节点的值
// 2. 节点的右子树包含的节点的值大于等于该节点的值
// 3. 节点的左子树和右子树都是BST
 
// 插入操作：
// 1. 当前节点的关键值等于待插入节点关键值，则不做任何处理（若需要可更新该节点），返回；
// 2. 当前节点的关键值小于待插入节点关键值,待插入节点应插入当前节点的左子树：
// 3. 当前节点的关键值大于待插入节点关键值，待插入节点应插入当前节点的右子树：
// 4. 若当前节点为空，则说明当前为空树，待插入节点应为树根。
 
// 删除操作：
// 1.定位待删除结点z后，如果z有左孩子，先删除z的前驱，此情况下z的前驱即z左子树的最大结点y，然后用y的值替换z的值
// 2.如果z没有左孩子，有右孩子，先删除z的后继，此情况下z的后继即z右子树的最小结点y，然后用y的值替换z的值
// 3.如果z没有孩子，则修改其父节点，是NULL作为其父节点的一个相应的孩子；
 
int main()
{
  int NodeNum = 20;
  srand(time(0));
 
  // int *intArray = new int[NodeNum];
  // for ( int i = 0; i < NodeNum; i++){
  //   intArray[i] = rand() % 100;
  // }
 
  int intArray[] = {21,23,16,64,0,57,93,10,77,30,80,46,72,40,96,90,95,61,25,19};
   
  cout<<"Insert order:"<<endl;
  for ( int i = 0; i < NodeNum; i++){
    cout << intArray[i] <<" ";
  }
  cout << endl;
 
 
  BinarySearchTree<int> tree(intArray, NodeNum);
  // cout << "Inorder: " << endl;
  // tree.inOrder();
 
  // cout << "\nInorderNorRec: " << endl;
  // tree.inOrderNorRec();
 
  // cout << "\nThe number of nodes is " << tree.treeSize << endl;
 
  // tree.maxValue();
  // tree.minValue();
 
  // // tree.successor(intArray[ rand() % NodeNum ]);
  tree.successor(64);
  tree.predecessor(intArray[ rand() % NodeNum ]);
  tree.output();
   
   
  for ( int i = 0; i < NodeNum/3; i++){
    tree.deleteNode(intArray[ rand() % NodeNum ]);
    tree.output();
    cout << "\nThe number of nodes is " << tree.treeSize << endl;
  }
 
  return 0;
}
