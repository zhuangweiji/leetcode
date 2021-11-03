
# [算法思维](https://coding.imooc.com/class/chapter/82.html)

---
## 第二章：复杂度分析 
#### 2-1 究竟什么是大O（Big O） (19:52) 
- O表示算法执行的最低上界，n表示数据规模
- O(f(n))表示运行算法所需执行的指令数，和f(n)成正比
#### 2-2 对数据规模有一个概念 (11:26) 
- [时间复杂度为O(n)的算法的时间代价和n成正比](ComplexityExp/0_On_test1.cpp)
- 递归调用是有空间代价的
#### 2-3 简单的复杂度分析 (19:20) 
- O(1)
- O(sqrt(n))
- O(n)：寻找数组中的最大、最小值
- O(logn)：二分查找法
- O(nlogn)：归并排序法
- O(n^2)：选择排序法
#### 2-4 亲自试验自己算法的时间复杂度 (14:53) 
- 复杂度实验，观察趋势：每次将数据规模提高两倍，看时间的变化
- [四个测试算法](ComplexityExp/MyAlgorithmTester.h)
- [生成数组工具](ComplexityExp/MyUtil.h)
#### 2-5 递归算法的复杂度分析 (14:46) 
#### 2-6 均摊时间复杂度分析（Amortized Time Analysis） (15:16) 
#### 2-7 避免复杂度的震荡 (11:25) 

---
## 第三章：数组 Array
考察排序、查找、数据结构  
习题：
ID|Title|Solution|Difficulty
-|-|-|-
283|Move Zeros|cpp/py3|Easy
27|Remove Element
26|Remove Dumplicated From Sorted Array
80|Remove Dumplicated From Sorted Array 2
75|Sort Colors
88|Merge Sorted Array
215|Kth Largest Element In An Array
167|Two Sum 2
125|Valid Palindrome
344|Reverse String
345|Reverse Vowels Of A String
11|Container With Most Water
209|Minimum Size Subarray Sum
3|Longest Substring Without Repeating Characters
438|Find All Anagrams In A String
76|Minimun Window Substring


#### 3-1 从二分查找法看如何写出正确的程序 (15:27)

#### 3-2 改变变量定义，依然可以写出正确的算法 (12:06)
#### 3-3 在LeetCode上解决第一个问题 Move Zeros (13:27)
#### 3-4 即使简单的问题，也有很多优化的思路 (15:30)
#### 3-5 三路快排partition思路的应用 Sort Color (22:26)
#### 3-6 对撞指针 Two Sum II - Input Array is Sorted (19:44)
#### 3-7 滑动窗口 Minimum Size Subarray Sum (14:09)
#### 3-8 在滑动窗口中做记录 Longest Substring Without Repeating Characters (15:20)

---
## 第四章：查找表 Search Table
#### 4-1 set的使用 Intersection of Two Arrays (11:12)
#### 4-2 map的使用 Intersection of Two Arrays II (13:05)
#### 4-3 set和map不同底层实现的区别 (19:00)
#### 4-4 使用查找表的经典问题 Two Sum (16:56)
#### 4-5 灵活选择键值 4Sum II (13:25)
#### 4-6 灵活选择键值 Number of Boomerangs (14:45)
#### 4-7 查找表和滑动窗口 Contain Duplicate II (11:20)
#### 4-8 二分搜索树底层实现的顺序性 Contain Duplicate III (10:50)

---
## 第五章： 链表 Linked List
#### 5-1 链表，在节点间穿针引线 Reverse Linked List (15:44)
#### 5-2 测试你的链表程序 (16:26)
#### 5-3 设立链表的虚拟头结点 Remove Linked List Elements (17:08)
#### 5-4 复杂的穿针引线 Swap Nodes in Pairs (13:30)
#### 5-5 不仅仅是穿针引线 Delete Node in a Linked List (07:29)
#### 5-6 链表与双指针 Remove Nth Node Form End of List (16:49)

---
## 第六章：栈，对列，优先队列 Stack & Queue
#### 6-1 栈的基础应用 Valid Parentheses (16:10)
#### 6-2 栈和递归的紧密关系 Binary Tree Preorder, Inorder and #Postorder Traversal (16:03)
#### 6-3 运用栈模拟递归 (19:33)
#### 6-4 队列的典型应用 Binary Tree Level Order Traversal (10:26)
#### 6-5 BFS和图的最短路径 Perfect Squares (21:20)
#### 6-6 优先队列 (11:09)
#### 6-7 优先队列相关的算法问题 Top K Frequent Elements (15:37)
#### 6-8 两种关于 topK 问题求解思路的套路(作业)

---
## 第七章：二叉树和递归 Binary Tree & Recursion
#### 7-1 二叉树天然的递归结构 (15:58)
#### 7-2 一个简单的二叉树问题引发的血案 Invert Binary Tree (09:08)
#### 7-3 不会翻转二叉树的大神(作业)
#### 7-4 注意递归的终止条件 Path Sum (12:04)
#### 7-5 定义递归问题 Binary Tree Path (13:34)
#### 7-6 稍复杂的递归逻辑 Path Sum III (14:11)
#### 7-7 二分搜索树中的问题 Lowest Common Ancestor of a Binary Search Tree (17:46)

---
## 第八章：递归和回溯法 Recursion & Backtracking
#### 8-1 树形问题 Letter Combinations of a Phone Number (18:09)
#### 8-2 什么是回溯 (18:16)
#### 8-3 排列问题 Permutations (19:02)
#### 8-4 组合问题 Combinations (14:27)
#### 8-5 回溯法解决组合问题的优化 (17:29)
#### 8-6 二维平面上的回溯法 Word Search (21:45)
#### 8-7 floodfill算法，一类经典问题 Number of Islands- (21:27)
#### 8-8 回溯法是经典人工智能的基础 N Queens (25:17)

---
## 第九章：动态规划 Dynamic Programming
#### 9-1 什么是动态规划 (20:27)
#### 9-2 第一个动态规划问题 Climbing Stairs (14:02)
#### 9-3 发现重叠子问题 Integer Break (25:10)
#### 9-4 状态的定义和状态转移 House Robber (27:19)
#### 9-5 0-1背包问题 (32:37)
#### 9-6 0-1背包问题的优化和变种 (20:18)
#### 9-7 面试中的0-1背包问题 Partition Equal Subset Sum (27:34)
#### 9-8 LIS问题 Longest Increasing Subsequence (25:12)
#### 9-9 LCS，最短路，求动态规划的具体解以及更多 (21:00)
#### 9-10 动态规划的经典问题(作业)

---
## 第十章：贪心算法 Greedy Algorithms
#### 10-1 贪心基础 Assign Cookies (12:12)
#### 10-2 贪心算法与动态规划的关系 Non-overlapping Intervals (17:58)
#### 10-3 贪心选择性质的证明 (15:19)