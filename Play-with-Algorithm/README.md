
# [算法思维](https://coding.imooc.com/class/chapter/82.html)

---
## 第二章：复杂度分析 Complexity
#### 2-1 究竟什么是大O（Big O） (19:52) 
- O表示算法执行的最低上界，n表示数据规模
- O(f(n))表示运行算法所需执行的指令数，和f(n)成正比
#### 2-2 对数据规模有一个概念 (11:26) 
- [时间复杂度为O(n)的算法的时间代价和n成正比](02-Time-Complexity/01-ON-test.cpp)
- 递归调用是有空间代价的
#### 2-3 简单的复杂度分析 (19:20) 
- O(1)
- O(sqrt(n))
- O(n)：寻找数组中的最大、最小值
- O(logn)：二分查找法
- O(nlogn)：归并排序法
- O(n^2)：选择排序法
- O(2^n) 指数级 暴力解码 不可接受
#### 2-4 亲自试验自己算法的时间复杂度 (14:53) 
- 复杂度实验，观察趋势：每次将数据规模提高两倍，看时间的变化
- [四个测试算法](02-Time-Complexity/MyAlgorithmTester.h)
- [生成数组工具](02-Time-Complexity/MyUtil.h)
- [时间复杂度测试](02-Time-Complexity/MyTimeCostTest.cpp)
#### 2-5 递归算法的复杂度分析 (14:46) 
- 如果递归函数中，只进行一次递归调用，递归深度为depth，在每个递归函数中，时间复杂度为T；则总体的时间复杂度为O(T*depth)
- 主定理
#### 2-6 均摊时间复杂度分析（Amortized Time Analysis） (15:16) 
- [MyVector](02-Time-Complexity/MyVector.h)实现中的push_back()，在均摊复杂度分析下，时间复杂度仍为O(1)
#### 2-7 避免复杂度的震荡 (11:25) 
- 应为删除元素(pop_back)后再添加元素(push_back)留出余地，否则在删除和添加元素的临界点无法进行复杂度均摊，复杂度O(1)会退化为O(n)

---
## 第三章：数组 Array
- 排序: 选择排序；插入排序；归并排序；快速排序
- 查找：二分查找法
- 数据结构：栈；堆；队列
#### 3-1 从[二分查找法](03-Using-Array/cpp/01-Binary-Search/main.cpp)看如何写出正确的程序 (15:27)
- 对于有序数列，才能使用二分查找法（排序的作用）
- 明确变量的含义
- 在循环中维护【循环不变量】
#### 3-2 改变变量定义，依然可以写出正确的算法 (12:06)
- 防止整型溢出
- 小数据量调试
- 1. 快速、准确定位出错误的位置
- 2. 方便理解代码
- 大数据量测试
#### 3-3 在LeetCode上解决第一个问题 [Move Zeros](03-Using-Array/cpp/03-Move-Zeroes/0283-Move-Zeroes.cpp) (13:27)

#### 3-4 即使简单的问题，也有很多优化的思路 (15:30)
- 完成后思考当前解决方案是否可以继续优化

#### 3-5 三路快排partition思路的应用 [Sort Color](03-Using-Array/cpp/05-Sort-Colors/0075-Sort-Colors.cpp) (22:26)
- 基础算法思路的应用
- 元素种类非常有限，可以使用计数排序
- 三路快排可以参见 [数据结构与算法C++精解](https://coding.imooc.com/class/chapter/71.html)

#### 3-6 对撞指针 [Two Sum II]() - Input Array is Sorted (19:44)
- 暴力搜索，O(n^2)，不可接受，没有利用源数组有序的性质
- 有序？二分搜索？O(nlogn)
- 对撞指针，nums[i] + nums[j] == target ,O(n) 

#### 3-7 滑动窗口 [Minimum Size Subarray Sum]() (14:09)
- 双索引技术 Two Pointer
- 翻转字符串等需要从数组两端开始使用对撞指针
- 查找满足要求的字串之类的问题需要从数组一端开始使用滑动窗口

#### 3-8 在滑动窗口中做记录 [Longest Substring Without Repeating Characters]() (15:20)
- 用一个数组freq[256]记录每个字符出现的频次，可以在O(1)时间复杂度做出判定

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-
3-4|283|Move Zeros|[cpp](03-Using-Array/cpp/04-Move-Zeroes-II/0283-Move-Zeroes.cpp)/py3|Easy
3-4|27|Remove Element|[cpp](03-Using-Array/cpp/04-Move-Zeroes-II/0027-Remove-Element.cpp)/py3|Easy
3-4|26|Remove Dumplicated From Sorted Array|[cpp](03-Using-Array/cpp/04-Move-Zeroes-II/0026-Remove-Duplicates-From-Sorted-Array.cpp)/py3|Easy
3-4|80|Remove Dumplicated From Sorted Array 2|[cpp](03-Using-Array/cpp/04-Move-Zeroes-II/0080-Remove-Duplicates-From-Sorted-Array-II.cpp)/py3|Medium
-|-|-|-|-
3-5|75|Sort Colors|[cpp](03-Using-Array/cpp/05-Sort-Colors/0075-Sort-Colors.cpp)/py3|Easy
3-5|88|Merge Sorted Array|[cpp](03-Using-Array/cpp/05-Sort-Colors/0088-Merge-Sorted-Array.cpp)/py3|Easy
**3-5**|**215**|**Kth Largest Element In An Array**|[cpp](03-Using-Array/cpp/05-Sort-Colors/0215-Kth-Largest-Element-In-An-Array.cpp)/py3|Medium
-|-|-|-|-
3-6|167|Two Sum 2|[cpp](03-Using-Array/cpp/06-Two-Sum-II/0167-Two-Sum.cpp)/py3|Easy
**3-6**|**125**|**Valid Palindrome**|[cpp](03-Using-Array/cpp/06-Two-Sum-II/0125-Valid-Palindrome.cpp)/py3|Easy
3-6|344|Reverse String|[cpp](03-Using-Array/cpp/06-Two-Sum-II/0344-Reverse-String.cpp)/py3|Easy
3-6|345|Reverse Vowels of a String|[cpp](03-Using-Array/cpp/06-Two-Sum-II/0345-Reverse-Vowels-Of-A-String.cpp)/py3|Easy
3-6|11|Container With Most Water|[cpp]/py3|Easy
-|-|-|-|-
3-7|209|Minimum Size Subarray Sum|[cpp](03-Using-Array/cpp/07-Minimum-Size-Subarray-Sum/0209-Mininum-Size-Subarray.cpp)/py3|Medium
-|-|-|-|-
3-8|3|Longest Substring Without Repeating Characters|[cpp](03-Using-Array/cpp/08-Longest-Substring-Without-Repeating-Characters/0003-Longest-Substring-Withouot-Repeating-Characters.cpp)/py3|Medium
3-8|438|Find All Anagrams In A String|[cpp]/py3|Easy
3-8|76|Minimun Window Substring|[cpp]/py3|Hard

---
## 第四章：查找表 Search Table
- 使用HashMap和HashSet对数据进行存储，通常就可以在O(1)的时间复杂度内完成查找
#### 4-1 set的使用 Intersection of Two Arrays (11:12)
#### 4-2 map的使用 Intersection of Two Arrays II (13:05)
#### 4-3 set和map不同底层实现的区别 (19:00)
#### 4-4 使用查找表的经典问题 Two Sum (16:56)
#### 4-5 灵活选择键值 4Sum II (13:25)
#### 4-6 灵活选择键值 Number of Boomerangs (14:45)
#### 4-7 查找表和滑动窗口 Contain Duplicate II (11:20)
#### 4-8 二分搜索树底层实现的顺序性 Contain Duplicate III (10:50)



### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-

---
## 第五章： 链表 Linked List
#### 5-1 链表，在节点间穿针引线 Reverse Linked List (15:44)
#### 5-2 测试你的链表程序 (16:26)
#### 5-3 设立链表的虚拟头结点 Remove Linked List Elements (17:08)
#### 5-4 复杂的穿针引线 Swap Nodes in Pairs (13:30)
#### 5-5 不仅仅是穿针引线 Delete Node in a Linked List (07:29)
#### 5-6 链表与双指针 Remove Nth Node Form End of List (16:49)

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-


操作链表的头节点时，通常设置虚拟头节点。
通常可以使用快慢指针对链表进行遍历，以保证可以在一趟扫描中完成任务

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

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-

无权图的最短路径可以使用队列进行广度优先搜索

---
## 第七章：二叉树和递归 Binary Tree & Recursion
#### 7-1 二叉树天然的递归结构 (15:58)
#### 7-2 一个简单的二叉树问题引发的血案 Invert Binary Tree (09:08)
#### 7-3 不会翻转二叉树的大神(作业)
#### 7-4 注意递归的终止条件 Path Sum (12:04)
#### 7-5 定义递归问题 Binary Tree Path (13:34)
#### 7-6 稍复杂的递归逻辑 Path Sum III (14:11)
#### 7-7 二分搜索树中的问题 Lowest Common Ancestor of a Binary Search Tree (17:46)

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-


递归解题：
利用二叉树其本身递归的结构
利用二叉搜索树中序遍历为有序数组的特点

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

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-


排列组合问题。回溯法的套路通常是： 已经在 [0, start) 找到部分结果，对于剩下的另一部分在 [start, n] 中使用循环和递归进行查找。"部分结果"在递归结束后需要恢复原来的状态，在查找另一部分结果之前可以分析能否剪枝。

二维平面的回溯搜索的套路是： 遍历二维数组，从每一个元素出发，记录状态，对其四个方向（如果存在的话）进行遍历递归，然后恢复状态，直到找到答案。

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

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-


动态规划就是将原问题拆解成若干子问题，同时保存子问题的答案，使得每个子问题只求解一次，最终获得原问题的答案。 [动态规划与记忆化搜索的区别](https://stackoverflow.com/questions/6184869/what-is-the-difference-between-memoization-and-dynamic-programming) 通常具有重叠子问题的问题既可以用动态规划来解决，也可以用记忆化搜索来解决。

记忆化搜索：使用递归自顶向下解决问题，没有从最基本的问题开始解决，而是假设最基本的问题已经解决。
动态规划：使用循环迭代自底向上解决问题，代码简洁，但是比较难，可以先实现记忆化搜索再改成动态规划。
动态规划有时候可以优化空间复杂度，通过覆盖子问题的答案。两者的区别可以参考 #63 和 Knapsack。

---
## 第十章：贪心算法 Greedy Algorithms
#### 10-1 贪心基础 Assign Cookies (12:12)
#### 10-2 贪心算法与动态规划的关系 Non-overlapping Intervals (17:58)
#### 10-3 贪心选择性质的证明 (15:19)

### 习题：
Section|ID|Title|Solution|Difficulty
-|-|-|-|-




动态规划和贪心算法的联系：

动态规划：
重叠子问题
最优子结构

贪心算法：
贪心选择性质
最优子结构

其实贪心算法是一种特殊的动态规划，由于其具有贪心选择性质，保证了子问题只会被计算一次，不会被多次计算，因此贪心算法其实是最简单的动态规划。

贪心算法的难点就在于如何证明具有贪心选择性质。对于背包问题和 #279 这类问题，我们可以很容易举个反例证明其不具有贪心选择性质。但是某些具有贪心选择性质的问题应该如何证明其正确性呢？

数学归纳法
反证法
反证法的套路为：假设贪心算法为 A，最优算法为 O，发现 A 能完全替代 O，且不影响求出的最优解。


----
## 其他课程
[Python3入门机器学习 经典算法与应用](https://coding.imooc.com/class/169.html)  

[高等数学](https://coding.imooc.com/class/chapter/427.html#Anchor)  
[线性代数](https://coding.imooc.com/class/260.[html)  
[统计](https://coding.imooc.com/class/371.html)

[PyTorch入门到进阶](https://coding.imooc.com/class/chapter/440.html#Anchor)  
[重学C++](https://coding.imooc.com/class/chapter/414.html#Anchor)  第十三章：了解开源架构ffmpeg的设计和使用  

[图论精讲](https://coding.imooc.com/class/chapter/370.html#Anchor)  
[音视频开发与视频直播技术](https://coding.imooc.com/learningpath/route?mc_marking=e4683132e4f74479831268d5f6d5a02f&mc_channel=lx&pathId=39)
[WebRTC源码级深度解析](https://coding.imooc.com/class/532.html)  