<h2><a href="https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab">Reverse Level Order Traversal</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
        1
      /   \
     3     2</span>

<span style="font-size:18px"><strong>Output:</strong> 3 2 1
<strong>Explanation:</strong>
Traversing level 1 : 3 2
Traversing level 0 : 1</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
       10
      /  \
     20   30
    / \ 
   40  60</span>

<span style="font-size:18px"><strong>Output: </strong>40 60 20 30 10
<strong>Explanation:</strong>
Traversing level 2 : 40 60
Traversing level 1 : 20 30
Traversing level 0 : 10</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You dont need to read input or print anything. Complete the function <strong>reverseLevelOrder() </strong>which takes the root of the tree as input parameter and returns a list containing the reverse level order traversal of the given tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space: </strong>O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10^4</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>FactSet</code>&nbsp;<code>Adobe</code>&nbsp;<code>Cisco</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;