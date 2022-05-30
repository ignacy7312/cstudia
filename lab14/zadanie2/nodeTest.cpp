#include "node.h"
const char * errorMessage =  "It either does not exist or provided index is out of range";

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
    Node_t * root = createNode(112, NULL);
    pushBack(root, 17);
    pushBack(root, 18);
    testing::internal::CaptureStdout();
    removeByIndex(&root,3);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), errorMessage); //rzutowanie output na const char * żeby się w funkcji zgadzało
    
}


TEST(OneElementList, RemovingFirstIndex){
    Node_t * root = createNode(112, NULL);
    EXPECT_EQ(root->head, 112);
    EXPECT_TRUE(root->tail == NULL);
    removeByIndex(&root, 0);
    EXPECT_TRUE(root == NULL);

}

TEST(OneElementList, RemovingLastIndex){
    Node_t * root = createNode(112, NULL);
    EXPECT_EQ(root->head, 112);
    EXPECT_TRUE(root->tail == NULL);
    removeByIndex(&root, 0);
    EXPECT_TRUE(root == NULL);
}

TEST(OneElementList, RemovingNonexistentIndex){
    Node_t * root = createNode(112, NULL);
    testing::internal::CaptureStdout();
    removeByIndex(&root,1);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), errorMessage); //rzutowanie output na const char * żeby się w funkcji zgadzało
}

TEST(EmptyList, RemovingFirstIndex){
    Node_t * root = createNode(112, NULL);
    removeByIndex(&root,0);
    testing::internal::CaptureStdout();
    removeByIndex(&root,0);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), errorMessage); //rzutowanie output na const char * żeby się w funkcji zgadzało
}

TEST(EmptyList, RemovingAnyOtherIndex){
    Node_t * root = createNode(112, NULL);
    removeByIndex(&root,0);
    testing::internal::CaptureStdout();
    removeByIndex(&root,3);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), errorMessage); //rzutowanie output na const char * żeby się w funkcji zgadzało
}

