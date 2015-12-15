#ifdef BinarySearchTree_H
#define BinarySearchTree_H
#include <stack>
using namespace std;
template<typename T>
class TreeNode{
    T value ;
    TreeNode<T> *parent ;
    TreeNode<T> *left ;
    TreeNode<T> *right ;
    TreeNode(){//No-arg constructor
        parent=NULL ;
        left=NULL ;
        right=NULL ;
    }
    TreeNode(T value){//constructor
        this->value = value ;
        parent=NULL ;
        left=NULL ;
        right=NULL ;
    }
}

template <typename T>
class BinarySearchTree{
    public:
        int treeSize ;//The size of Tree
        BinarySearchTree();
        BinarySearchTree(T values[],int arraySize);
        int insert(T value);//insert
        void inOrder();
        void inOrderNorRec();
        int deleteNode(T value);
        int successor(T value) ;
        int predecessor(T value);
        void maxValude();
        void minValue();
        int getSize(T value);
        void output();
    private:
        TreeNode<T> *treeroot ;
        void inOrder(TreeNode<T> *target);
        void inOrderNorRec(TreeNode<T> *target);
        TreeNode<T> *search(T searchvalue) ;
        int deleteNode(TreeNode<T> *target) ;
        TreeNode<T> *successor(TreeNode<T> *target) ;
        TreeNode<T> *predecessor(TreeNode<T> *target);
        TreeNode<T> *maxValue(TreeNode<T> *target);
        TreeNode<T> *minValue(TreeNode<T> *target);
        int getSize(TreeNode<T> *target);
        void output(TreeNode<T> *tatget,int totalSpace);
}

template<typename T>
BinarySearchTree<T>::BinarySearchTree(){
    treeroot=NULL ;
    treeSize=NULL ;
}

template<typename T>
BinarySearchTree<T>::BinarySearchTree(T value[],int arraySize){
    treeroot=NULL ;
    treesize=0 ;
    for(int i=0 ; i<arraysize ;i++){
        this->insert(value[i]) ;
    }
}
template<typename T>
BinarySearchTree<T>::insert(T value){//insert a new value
    if(treeroot==NULL){
        treeroot = new TreeNode<T>(value); //allocate the space for node of tree
    }else{
        TreeNode<T> *former = NULL ;
        TreeNode<T> *current = treeroot ;
        while(current != NULL){
            if(value < current->value){
                former = current ;
                current = current->left ;
            }else if(value > current->value){
                former = current ;
                current = cunrrent->right ;
            }else{
                cout << "Node with value" << value << "has existed" <<endl ;
                return 1 ;
            }
        }
        if(value < former->value){
            TreeNode<T>* newNode = new TreeNode<T>(value) ;
            former->left=newNode ;
            newNode->parent=former ;
        }else if(value>former->value){
            TreeNode<T>* newNode= new TreeNode<T>(value) ;
            former->right=newNode ;
            newNode->parent=former ;
        }
    }
    treeSize++ ;
    return 0 ;
}

template <typename T>
TreeNode<T>* BinarySearchTree<T>::search(T searchValue){//find the value
    TreeNode<T> * current = treeroot ;
    int find = 0 ;
    while(current != NULL && find == 0){
        if(current->value == searchValue){
            find = 1 ;
        }else if(current->value > searchValue){
            current = current->left ;
        }else{
            current = current->right ;
        }
    }
    if(find == 1){
        return current ;
    }else{
        return NULL ;
    }
}

template <typename T>
int BinarySearchTree<T>::deleteNode(T value){//The interface of deletenode
    TreeNode<T> *delNode = this->search(value) ;
    if(delNode == NULL){
        cout << "not find" << endl ;
        return 1 ;
    }
    this->deleteNode(delNode) ;
    cout << "Node " << value << "has been deletaed." << endl ;
    return 0 ;
}

template <typename T>
int BinarySearchTree<T>::deleteNode(TreeNode<T> *delNode){
    //search the node which should delete
    TreeNode<T> *deleteTarget ;
    if(delNode->left==NULL && delNode->right==NULL){//The node has no child
        deleteTarget = delNode ;
    }else if(delNode->left != NULL){//The left subtree is not empty,find the predecessor
        deleteTarget = this->predecessor(delNode) ;
    }else if(delNode->right != NULL){//The right subtree is not empty,find the successor
        deleteTarget = this->successor(delNode) ;
    }

    TreeNode<T> * deleteTargetChild = NULL ;
    if(deleteTarget->left != NULL){
        deleteTargetChild = deleteTarget->left ;
    }else if(deleteTarget->right != NULL){
        deleteTargetChild = deleteTarget->right ;
    }

    if(deleteTarget != NULL){
        deleteTargetChild->parent = deleteTarget->parent ;
    }
    if(deleteTarget->parent == NULL){
        treeroot = deleteTargetChild ;
        deleteTarget->parent = NULL ;
    }else if(deleteTarget->parent->left == deleteTarget){
        deleteTarget->parent->left = deleteTargetChild ;
    }else{
        deleteTarget->parent->right = deleteTargetChild ;
    }

    if(deleteTarget != delNode){
        delNode->value = deleteTarget->value ;
    }
    treeSize-- ;
    return 0 ;
}

template <typename T>
int BinarySearchTree<T>::successor(T value){
    TreeNode<T> *position = this->search(value) ;
    if(position == NULL){
        cout << "not find" << endl;
        return 1 ;
    }
    TreeNode<T> * successorNode = this->successor(position) ;
    if(succesorNode == NULL){
        cout << value << "\'s successor is: " << successorNode->value << endl ;
    }else{
        cout << value << " has no successor." << endl ;
    }
    return 0 ;
}


//if right subtree is not empty,The successor of the  current node is the minimum value of right subtree.
//if right subtree is empty, The successor of the current node is the earliest ancestor.
template <typename T>
TreeNode<T> BinarySearchTree<T>::successor(TreeNode<T> *target){
    if(target->right != NULL){
        return minValue(target->right);
    }
    TreeNode<T> * parentNode = target->parent ;
    while(parentNode != NULL && parentNode->right == target ){
        target = parentNode ;
        parentNode = parentNode->parent ;
    }
}

template <typename T>
int BinarySearchTree<T>::predecessor(T value){
    TreeNode<T> *position = this->search(value) ;
    if(position == NULL){
        cout << "not find" << endl ;
        return 1 ;
    }
    TreeNode<T> *predecessorNode = this->predecessor(position) ;
    if(predecessorNode !== NULL){
        cout << value << "\'s predecessor is: " << predecessorNode->value << endl;
    }else{
        cout << value << " has no predecessor. " << endl ;
    }
    return 0 ;
}

template <typename T>
TreeNode<T> BinarySearchTree<T>::predecessor(TreeNode<T> *target){
    if(target->left != NULL){
        return maxValue(target->left);
    }
    TreeNode<T> * parentNode = target->parent ;
    while(parentNode != NULL && parentNode->left == target){
        target = parentNode ;
        parentNode = parentNode->parent ;
    }
    return parentNode ;
}
template <typename T>
void BinarySearchTree<T>::maxValue(){
    TreeNode *max = this->maxValue(treeroot) ;
    cout << "Max Values is: " << max->value << endl ;
}

template <typename T>
TreeNode<T> BinarySearchTree<T>::maxValue(TreeNode<T> *target){
    while(target->right != NULL){
        target = target->right ;
    }
    return target ;
}

template <typename T>
void BinarySearchTree<T>::minValue(){
    TreeNode<T>* min = this->minValue(treeroot) ;
    cout << << "Min Values is : " << min->value << endl ;
}
template <typename T>
TreeNode<T> BinarySearchTree<T>::minValue(TreeNode<T> *target){
    //TreeNode * minValueNode = target ;
    while(target->left != NULL){
        target = target->left ;
    }
    return target ;
}

template <typename T>
int BinarySearchTree<T>::getSize(){
    
}
#endif
