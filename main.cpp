#include <iostream>
#include "Tree.h"
#include "Node.h"
#include <vector>
using namespace std;

int main() {
    Tree t1;

    Node n1(10);
   // cout<<n1.get_wert();
    t1.insert(10,n1);
    return 0;
}
