#include<stdio.h>

int main()
{



    return 0;
}


/*
K people are having a picnic. They are initially in N cities, conveniently numbered from 1 to N. The roads between cities are connected by M one-way roads (no road connects a city to itself).

Now they want to gather in the same city for their picnic, but (because of the one-way roads) some people may only be able to get to some cities. Help them by figuring out how many cities are reachable by all of them, and hence are possible picnic locations.

Input
Input starts with an integer T (≤ 10), denoting the number of test cases.

Each case starts with three integers K (1 ≤ K ≤ 100), N (1 ≤ N ≤ 1000), M (1 ≤ M ≤ 10000). Each of the next K lines will contain an integer (1 to N) denoting the city where the ith person lives. Each of the next M lines will contain two integers u v (1 ≤ u, v ≤ N, u ≠ v) denoting there is a road from u to v.

Output
For each case, print the case number and the number of cities that are reachable by all of them via the one-way roads.

Sample
Inputcopy	Outputcopy
1
2 4 4
2
3
1 2
1 4
2 3
3 4
Case 1: 2
*/
