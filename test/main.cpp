#include "../src/AdjacencyMatrix.hpp"

using namespace std;
using namespace Graph;

int main(int argc, char** argv)
{
    AdjacencyMatrix* am = new AdjacencyMatrix(6);

    //am->addEdge(1,0,1);
    am->addEdge(0,1,1);

    //am->addEdge(2,1,1);
    am->addEdge(1,2,1);
    
    //am->addEdge(3,2,1);
    am->addEdge(2,3,1);
    
    //am->addEdge(4,3,1);
    am->addEdge(3,4,1);
    
    //am->addEdge(5,4,1);    
    am->addEdge(4,5,1);    
    
    //am->addEdge(0,5,1);
    am->addEdge(5,0,1);    

    int a[7] = {0,1,2,3,4,5,0};

    am->print();
    printf("%d\n", am->isCircuit(a, 7));

    return 0;
}
