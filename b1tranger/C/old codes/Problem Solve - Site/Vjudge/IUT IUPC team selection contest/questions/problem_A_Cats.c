#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N); //number of test cases




    return 0;
}

/*
In order to test the hypothesis about the dogs, the scientists must arrange the dogs in the boxes in a specific way.

Scientists have $$$n$$$ boxes in which dogs may or may not sit. Let the current state of the boxes be denoted by the sequence $$$b_1, \dots, b_n$$$: $$$b_i = 1$$$ if there is a dog in box number $$$i$$$, and $$$b_i = 0$$$ otherwise.

Fortunately, the unlimited production of dogs has already been established, so in one day, the scientists can perform one of the following operations:

Take a new dog and place it in a box (for some $$$i$$$ such that $$$b_i = 0$$$, assign $$$b_i = 1$$$).
Remove a dog from a box and send it into retirement (for some $$$i$$$ such that $$$b_i = 1$$$, assign $$$b_i = 0$$$).
Move a dog from one box to another (for some $$$i, j$$$ such that $$$b_i = 1, b_j = 0$$$, assign $$$b_i = 0, b_j = 1$$$).
It has also been found that some boxes were immediately filled with dogs. Therefore, the scientists know the initial position of the dogs in the boxes $$$s_1, \dots, s_n$$$ and the desired position $$$f_1, \dots, f_n$$$.

Input
Each test consists of several test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. This is followed by descriptions of the test cases.

Each test case consists of three lines.

The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of boxes.

The second line of each test case contains a string $$$s$$$ of $$$n$$$ characters, where the $$$i$$$-th character is '1' if there is a dog in the $$$i$$$-th box and '0' otherwise.

The third line of each test case contains a string $$$f$$$ of $$$n$$$ characters, where the $$$i$$$-th character is '1' if there should be a dog in the $$$i$$$-th box and '0' otherwise.

It is guaranteed that in a test the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.

Output
For each test case, output a single integer on a separate line — the minimum number of operations required to obtain the desired position from the initial position. It can be shown that a solution always exists.

Sample 1
Inputcopy	Outputcopy
6
5
10010
00001
1
1
1
3
000
111
4
0101
1010
3
100
101
8
10011001
11111110
2
0
3
2
1
4
Note
In the first test case, you can first move the dog from the first box to the fifth, and then remove the dog from the fourth box.

In the second test case, there is nothing to do — the only dog is already sitting in the correct box.

In the third test case of input data, it takes three days to place a dog in each box.

*/
