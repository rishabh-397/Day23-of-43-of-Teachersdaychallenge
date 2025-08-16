# Day23-of-43-of-Teachersdaychallenge

A. GukiZ and Contest
time limit per test2 seconds
memory limit per test256 megabytes
Professor GukiZ likes programming contests. He especially likes to rate his students on the contests he prepares. Now, he has decided to prepare a new contest.

In total, n students will attend, and before the start, every one of them has some positive integer rating. Students are indexed from 1 to n. Let's denote the rating of i-th student as ai. After the contest ends, every student will end up with some positive integer position. GukiZ expects that his students will take places according to their ratings.

He thinks that each student will take place equal to . In particular, if student A has rating strictly lower then student B, A will get the strictly better position than B, and if two students have equal ratings, they will share the same position.

GukiZ would like you to reconstruct the results by following his expectations. Help him and determine the position after the end of the contest for each of his students if everything goes as expected.

Input
The first line contains integer n (1 ≤ n ≤ 2000), number of GukiZ's students.

The second line contains n numbers a1, a2, ... an (1 ≤ ai ≤ 2000) where ai is the rating of i-th student (1 ≤ i ≤ n).

Output
In a single line, print the position after the end of the contest for each of n students in the same order as they appear in the input.

Examples

Input
3
1 3 3

Output
3 1 1

Input
1
1

Output
1

Input
5
3 5 3 4 5

Output
4 1 4 3 1


A. Kyoya and Photobooks
time limit per test2 seconds
memory limit per test256 megabytes
Kyoya Ootori is selling photobooks of the Ouran High School Host Club. He has 26 photos, labeled "a" to "z", and he has compiled them into a photo booklet with some photos in some order (possibly with some photos being duplicated). A photo booklet can be described as a string of lowercase letters, consisting of the photos in the booklet in order. He now wants to sell some "special edition" photobooks, each with one extra photo inserted anywhere in the book. He wants to make as many distinct photobooks as possible, so he can make more money. He asks Haruhi, how many distinct photobooks can he make by inserting one extra photo into the photobook he already has?

Please help Haruhi solve this problem.

Input
The first line of input will be a single string s (1 ≤ |s| ≤ 20). String s consists only of lowercase English letters.

Output
Output a single integer equal to the number of distinct photobooks Kyoya Ootori can make.

Examples

Input
a

Output
51

Input
hi

Output
76
