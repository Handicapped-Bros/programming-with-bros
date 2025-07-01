#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N); //number of test cases




    return 0;
}

/*
A (
1
1-indexed) binary string
�
S of length
�
N is called a xor palindrome if the value of
�
�
⊕
�
(
�
+
1
−
�
)
S
i
​
 ⊕S
(N+1−i)
​
  is the same for all
1
≤
�
≤
�
1≤i≤N.

For example,
0
0,
1111
1111 and
0101
0101 are xor palindromes, while
1110
1110 and
110101
110101 are not.

You are given a binary string
�
S of length
�
N. Determine if it is possible to rearrange it to form a xor palindrome or not.

Input Format
The first line of input contains a single integer
�
T — the number of test cases. The description of
�
T test cases follows.
The first line of each test case contains an integer
�
N — the length of the binary string
�
S.
The second line of each test case contains the binary string
�
S containing
0
0s and
1
1s only.
Output Format
For each test case, output
YES
YES if it is possible to rearrange
�
S to convert it into a xor palindrome. Otherwise output
NO
NO.

You may print each character of
YES
YES and
NO
NO in uppercase or lowercase (for example,
yes
yes,
yEs
yEs,
Yes
Yes will be considered identical).

Constraints
1
≤
�
≤
1000
1≤T≤1000
1
≤
�
≤
1
0
5
1≤N≤10
5

�
S is a binary string, i.e, contains only the characters
0
0 and
1
1
It is guaranteed that the sum of
�
N over all test cases does not exceed
2
⋅
1
0
5
2⋅10
5
 .
Subtasks
Subtask #1 (100 points): Original constraints

Sample 1
Inputcopy	Outputcopy
4
2
00
4
0011
3
001
4
0001
YES
YES
YES
NO
Test case
1
1:
00
00 is already a xor palindrome. [The value of
�
�
⊕
�
(
�
+
1
−
�
)
S
i
​
 ⊕S
(N+1−i)
​
  is
0
0 for all
1
≤
�
≤
�
1≤i≤N.]

Test case
2
2:
0011
0011 is already a xor palindrome. [The value of
�
�
⊕
�
(
�
+
1
−
�
)
S
i
​
 ⊕S
(N+1−i)
​
  is
1
1 for all
1
≤
�
≤
�
1≤i≤N.]

Test case
3
3:
001
001 can be rearranged to form
010
010 which is a xor palindrome. [The value of
�
�
⊕
�
(
�
+
1
−
�
)
S
i
​
 ⊕S
(N+1−i)
​
  is
0
0 for all
1
≤
�
≤
�
1≤i≤N.]

Test case
4
4: It can be proved that
0001
0001 can not be rearranged to form a xor palindrome.
*/
