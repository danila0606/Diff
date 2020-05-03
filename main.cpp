#include "tree.h"


int main() {

    try {
        istringstream str("sin(x+2)");
        Node *expression = Read_str_to_tree(str, 0);
        tree_print(expression);
        cout <<endl;
        
        Node *derivative = Diff(expression);
        tree_print(derivative);
        cout <<endl;

        CountVal(derivative, 2);

    } catch (exception &e) {
        cerr << e.what()<<endl;
        exit(1);
    }
    
    return 0;
}


