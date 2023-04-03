class Tree
{
private:
    static int objectCount;
public:
    Tree(){
        objectCount++;
    };
    // int getObjectCount() 
    // { return objectCount; }
    static int getObjectCount() 
    { return objectCount; }
};

int Tree:: objectCount =0;
