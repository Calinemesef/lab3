//
// Created by Acer V3-772G on 3/26/2020.
//
#include "Node.h"

Node::Node(int wert) {
    this->wert = wert;
    this->rechts = nullptr;
    this->links = nullptr;

}

int Node::get_wert() {
    return this->wert;
}

void Node::set_wert(int x) {
    this->wert = x;
}


/**
Node Node::get_links() {
    return reinterpret_cast<Node &&>(this->links);
}

Node Node::get_rechts() {
    return reinterpret_cast<Node &&>(this->rechts);
}
 */

