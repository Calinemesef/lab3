//
// Created by Acer V3-772G on 3/26/2020.
//
#include "Tree.h"
#include "Node.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>


Tree::Tree(){
    this->Knoten = {};
    this->Wurzel = nullptr;
}

vector<Node> Tree::get_Tree() {
    return this->Knoten;
}
/*
void Tree::add_Node(Node nod) {
    this->Knoten.push_back(nod);
}*/

void Tree::insert(int v, Node tree) {
    if (Wurzel == nullptr)
        Wurzel = new Node(v);
    else {
        Node *next = Wurzel;
        while (!next) {
            if (next->wert > v) {
                if (next->links == nullptr) {
                    next->links = new Node(v);
                    break;
                }
                next = next->links;
            } else if (next->wert < v) {
                if (next->rechts == nullptr) {
                    next->rechts = new Node(v);
                    break;
                }
                next = next->rechts;
            }

        }
    }
}


void Tree::deletee(int v, Node tree) {
    for (auto it = this->Knoten.begin(); it != this->Knoten.end(); it++)
        if(it->get_wert() == v)
            this->Knoten.erase(it);


}

string Tree::inorder(Node *n) {
    if(n == nullptr)
        return "";
    return inorder(n->links) + to_string(n->get_wert()) + " " + inorder(n->rechts);

}

string Tree::postorder(Node *n) {
    if(n == nullptr)
        return "";
    return postorder(n->links) + postorder(n->rechts) + to_string(n->get_wert()) + " ";
}

string Tree::preorder(Node *n) {
    if(n == nullptr)
        return "";
    return to_string(n->get_wert()) + "  " + preorder(n->links) + preorder(n->rechts);
}

int Tree::countNodes() {
    return this->Knoten.size();
}

int Tree::countEdges() {
    int ct=0;
    for (auto & it : this->Knoten) {
        if (it.rechts && it.links)
            ct += 2;
        else if (it.rechts || it.links)
            ct++;
    }
    return ct/2;

}

Node *Tree::get_Wurzel() {
    return this->Wurzel;
}

int Tree::height(Node *nod) {
    if(nod == nullptr)
        return 0;
    else{
        int st= height(nod->links)+1;
        int dr= height(nod->rechts)+1;
        if(st>dr)
            return st;
        return dr;
    }
}
