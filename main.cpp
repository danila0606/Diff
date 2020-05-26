#include "tree.h"


int main() {

    try {
        int notation_ = 8;
        istringstream str("(x^11)/2");
        Node *expression = Read_str_to_tree(str, 0, notation_);
        tree_print(expression);
        cout <<endl;

        CountVal(expression, 1, 8);
        cout<<endl;

        Node *derivative = Diff(expression);
        tree_print(derivative);
        cout <<endl;
        CountVal(derivative, 1, 8);

    } catch (exception &e) {
        cerr << e.what()<<endl;
        exit(1);
    }


    return 0;
}


