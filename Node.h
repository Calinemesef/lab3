//
// Created by Acer V3-772G on 3/26/2020.
//

#ifndef LAB3_NODE_H
#define LAB3_NODE_H

class Node{
    friend class Tree;
private:

    int wert;       // Valorea efectiva a nodului
    Node* links;    // pointer catre Fiul stang
    Node* rechts;   // pointer catre Fiul drept

public:

    explicit Node(int wert);    // Constructor
    int get_wert();             // getter
    void set_wert(int x);       // setter
    //Node get_links();
    //Node get_rechts();


};

#endif //LAB3_NODE_H
