
/**  Danielle Zand and Benyamin Darmoni */

#include "Tree.hpp"
using namespace ariel;
Tree::Tree()
{
    Troot=NULL;
}
Tree::Tree(Node n)
{
    Troot=&n;
}
  int Tree:: size()
    {
      
    if (Troot == NULL)  
        return 0;  
    else
       return(size(Troot->left) + 1 + size(Troot->right));
    }

    int Tree:: parent(int a)
    {
        return 0;
    }
    int Tree:: left(int a)
    {
        return 0;
    }
    int Tree:: right(int a)
    {
        return 0;
    }
    Node * Tree::insert(int a)
    {
        
        Node* NewNode = new node(); 
        NewNode->value = a;  
        NewNode->left = NULL;  
        NewNode->right = NULL;
        return (NewNode);
    }

    int Tree:: root()
    {
        return 0;
    }
    void Tree:: remove (int a)
    {
       
    }
    bool Tree:: contains(int a)
    {
  	return false;
    }
    void Tree:: print()
    {
   
    }

    
