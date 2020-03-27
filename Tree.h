//
// Created by Acer V3-772G on 3/26/2020.
//
#ifndef LAB3_TREE_H
#define LAB3_TREE_H
#include <vector>
#include <string>

#include "Node.h"
using namespace std;


class Tree{
    friend class Node;
private:

    vector<Node> Knoten;    // Vector de noduri
    Node* Wurzel;           // Radacina

public:

    Tree();                 // Constructorul
    vector<Node> get_Tree();    // getter pt vectorul de noduri
    Node* get_Wurzel();     // getter pt radacina
    //void add_Node(Node nod);
    void insert(int v, Node tree);  // Insert
    void deletee(int v, Node tree); // Delete
    static string inorder(Node* n); // InOrder
    static string postorder(Node* n);   // PostOrder
    static string preorder(Node* n);    //PreOrder
    int countNodes();               //countNodes
    int countEdges();               //countEdges
    static int height(Node* nod);       //Height
};



#endif //LAB3_TREE_H
