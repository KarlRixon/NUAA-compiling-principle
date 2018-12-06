# klang
Learning Flex and Bison

## FILE FORMAT

A klang file consists of four parts:
* header
* typedefs
* body
* footer

## WHY USE LEFT RECURSION ?

Right recursion will try to match everything it can and therefore the output will be printed in reverse order.
Also, since bison has to keep track of EVERYTHING matched until now, this might lead to overflow in Bison's stack.
Hence we prefer left recursion
