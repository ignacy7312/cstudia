#include "gtest.h"
#include "dispatcher.h"
#include "list.h"
#include "comparators.h"
#include "parser.h"
#include "predicate.h"



const char * RemovalErrorMessage = "no such element";
const char * DispatcherErrorMessage = "Nonexistent command";
ParsedCommand_t command;



TEST(CorrectlyParsedCommandsAndOkList, Equal){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    command = parseCommand("isEqual 4");
    
    dispatch(&root, command);
    EXPECT_EQ(root->tail->head, 6);
    
    delete root;
    
}

TEST(CorrectlyParsedCommandsAndOkList, Greater){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);

    command = parseCommand("isGreater 8");

    dispatch(&root, command);
    EXPECT_TRUE(root->tail->tail->tail->tail == NULL);
    
    delete root;
}


TEST(CorrectlyParsedCommandsAndOkList, Less){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    
    command = parseCommand("isLess 6");

    dispatch(&root, command);
    EXPECT_EQ(root->head, 4);
    
    delete root;
}

TEST(CorrectlyParsedCommandsAndOkList, ConditionNotMetGreater){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    command = parseCommand("isGreater 10");

    testing::internal::CaptureStdout();
    dispatch(&root, command);
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output1.c_str(), RemovalErrorMessage); 
    
    delete root;
}



TEST(CorrectlyParsedCommandsAndOkList, ConditionNotMetLess){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    
    command = parseCommand("isLess 1");

    
    testing::internal::CaptureStdout();
    dispatch(&root, command);
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output1.c_str(), RemovalErrorMessage); 
    
    
    delete root;
}


TEST(CorrectlyParsedCommandsAndWrongList, ThreeComparators){
    
    
    Node_t * root = NULL;
    command = parseCommand("isEqual 2");

    testing::internal::CaptureStdout();
    dispatch(&root, command);
    std::string output1 = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output1.c_str(), RemovalErrorMessage); 

    
}



TEST(IncorrectInput, NonexistentCommand){
    const unsigned int nodeCount = 5;
	Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    
    command = parseCommand("isDasda 8");

    testing::internal::CaptureStdout();
    dispatch(&root, command);
    std::string output = testing::internal::GetCapturedStdout();
    
    EXPECT_STREQ(output.c_str(), DispatcherErrorMessage); 


    command = parseCommand("asdasdasd");
    testing::internal::CaptureStdout();
    dispatch(&root, command);
    std::string output2 = testing::internal::GetCapturedStdout();
    
    EXPECT_STREQ(output2.c_str(), DispatcherErrorMessage); 

    delete root;
}


TEST(IncorrectInput, NonexistentCommandAndEmptyList){
	
    Node_t * root = NULL;
    command = parseCommand("asdvcxbsgfdgdf");
    testing::internal::CaptureStdout();
    dispatch(&root, command);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(output.c_str(), DispatcherErrorMessage); 

}

