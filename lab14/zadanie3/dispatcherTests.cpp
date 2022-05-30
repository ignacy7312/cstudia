#include "gtest.h"
#include "dispatcher.h"


const char * RemovalErrorMessage = "no such element";
const char * DispatcherErrorMessage = "Nonexistent command";
ParsedCommand_t command;



TEST(CorrectlyParsedCommandsAndOkList, Equal){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    command = parseCommand("isEqual 4");
    
    dispatch(&root, command);
    EXPECT_EQ(root->tail->head, 6);
    
    free(root);
    
}
/*
TEST(CorrectlyParsedCommandsAndOkList, Greater){
    const unsigned int nodeCount = 5;
	Node_t * root2 = createList(nodeCount, 2, 4, 6, 8, 10);

    command = parseCommand("isGreater 8");

    dispatch(&root2, command);
    EXPECT_TRUE(root2->tail->tail->tail->tail == NULL);
    
    free(root2);
}


TEST(CorrectlyParsedCommandsAndOkList, Less){
    const unsigned int nodeCount = 5;
	Node_t * root3 = createList(nodeCount, 2, 4, 6, 8, 10);
    
    command = parseCommand("isLess 6");

    dispatch(&root3, command);
    EXPECT_EQ(root3->head, 4);
    
    free(root3);
}
*/



TEST(WrongIndexingCorrectCommands, FalsePredicate){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    
    command = parseCommand("isLess 1");

    
    testing::internal::CaptureStdout();
    dispatch(&root, command);
    //removeIf(&root, isLess, command.argument);
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output1.c_str(), RemovalErrorMessage); 
    
    
    free(root);
}
/*

TEST(CorrectlyParsedCommandsAndWrongList, ThreeComparators){
    //creating and emptying a list
    const unsigned int nodeCount = 1;
	Node_t * root = createList(nodeCount, 2);
    removeIf(&root, isEqual, 2);

    testing::internal::CaptureStdout();
    dispatch(&root, parseCommand("isEqual 2"));
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output1.c_str(), RemovalErrorMessage); 
    dispatch(&root, parseCommand("isGreater 4"));
    std::string output2 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output2.c_str(), RemovalErrorMessage); 

    dispatch(&root, parseCommand("isLess 10"));
    std::string output3 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output3.c_str(), RemovalErrorMessage); 

    free(root);
}



TEST(IncorrectInput, NonexistentCommand){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    
    dispatch(&root, parseCommand("isDasda 8"));
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), DispatcherErrorMessage); 

    dispatch(&root, parseCommand("asdas"));
    std::string output2 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output2.c_str(), DispatcherErrorMessage); 

    free(root);
}



TEST(IncorrectInput, NonexistentCommandAndEmptyList){
    const unsigned int nodeCount = 1;
	Node_t * root = createList(nodeCount, 2);
    removeIf(&root, isEqual, 2);
    
    dispatch(&root, parseCommand("isDasda 8"));
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), DispatcherErrorMessage); 
    free(root);
}

*/