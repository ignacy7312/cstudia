#include "node.h"

TEST(MultipleElementList, RemovingFirstIndex){
    Node_t * root = createNode(112, NULL);
    pushBack(root, 17);
    pushBack(root, 18);
    EXPECT_EQ((*root).head, 112);
    EXPECT_EQ(root->tail->head, 17);
    
    removeByIndex(&root, 0);
    
    EXPECT_EQ((*root).head, 17);
    EXPECT_EQ(root->tail->head, 18);
    free(root);
}

TEST(MultipleElementList, LastIndex){
    Node_t * root = createNode(112, NULL);
    pushBack(root, 17);
    pushBack(root, 18);
    
    EXPECT_EQ(root->tail->tail->head, 18);
    removeByIndex(&root, 2);
    EXPECT_EQ(root->tail->head, 17);

}

TEST(MultipleElementList, MiddleIndex){
    Node_t * root = createNode(112, NULL);
    pushBack(root, 17);
    pushBack(root, 18);
    
    EXPECT_EQ(root->tail->head, 17);
    removeByIndex(&root, 1);
    EXPECT_EQ(root->head, 112);
    EXPECT_EQ(root->tail->head, 18);
}
TEST(MultipleElementList, NonexistentIndex){
    //Node_t * root = createNode(112, NULL);
    //pushBack(root, 17);
    //pushBack(root, 18);

    //removeByIndex(&root,3);
    //char * msg = "It either does not exist or provided index is out of range";
    //EXPECT_STREQ(ERROR_MESSAGE::errorMessage, msg);
}


TEST(OneElementList, RemovingFirstIndex){
    Node_t * root = createNode(112, NULL);
    EXPECT_EQ(root->head, 112);
    EXPECT_TRUE(root->tail == nullptr);
    removeByIndex(&root, 1);
    EXPECT_TRUE(&root == nullptr);

}

TEST(OneElementList, RemovingLastIndex){
    //cialo
}

TEST(OneElementList, RemovingNonexistentIndex){
    //cialo
}

TEST(EmptyList, RemovingFirstIndex){
    //cialo
}

TEST(EmptyList, RemovingAnyOtherIndex){
    //cialo
}

