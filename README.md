# algogroup-question2-stack
I did question 2 the stack implementation

Methodology/reasoning:
to implement my stack, i used a link list where the head of the linked list is 
the top of the stack. When you push, i just updated the head to be the new node
and node->next is the previous head node. When you pop, i just popped off the head and 
updated the new head to be head->next, which is the next element in the linked list.
I had a size variable for convenience that gets updated everytime you push or pop
something. To instantiate the Stack, you must give an initial value to what you want
the top of the stack to contain. If I had more time, I would've probably made it
so that you didn't need to initialize a value so the implementation is cleaner. So the 
stack would initialize with a nullptr as the head instead. 

I didn't write any formal tests but I tested out my implementation by creating a print
function and manually checking if the output is correct or not. You can see this 
in main(). I think my implementation seems to be working as expected.

to compile run:

$ g++ -o option2 option2.cpp

to run compiled file: 

$ ./option2

