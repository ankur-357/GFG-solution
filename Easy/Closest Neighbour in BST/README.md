<h2><a href="https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1?page=1&category=Tree,Binary%20Search%20Tree&sortBy=difficulty">Closest Neighbour in BST</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given the <strong>root of a binary search tree</strong> and a number <strong>n</strong>, find the greatest number in the binary search tree that is less than or equal to <strong>n</strong>.&nbsp;</span></p>
<p><span style="font-size: 18px;"><input alt="" src="http://contribute.geeksforgeeks.org/wp-content/uploads/g.png" type="image"></span></p>
<p><span style="font-size: 18px;"><strong>Example 1 :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input : <br></strong>n = 24
<strong>Output :</strong> <br>21
<strong>Explanation :</strong> The greatest element in the tree which 
              is less than or equal to 24, is 21. 
              (Searching will be like 5-&gt;12-&gt;21)</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2 :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong> n = 4
<strong>Output :</strong> 3
<strong>Explanation :</strong> The greatest element in the tree which 
              is less than or equal to 4, is 3. 
              (Searching will be like 5-&gt;2-&gt;3)</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your task : </strong></span></p>
<p><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findMaxForN()</strong>&nbsp;which takes the <strong>root</strong> of the BST, and the integer&nbsp;<strong>n</strong> as input paramters and returns the <strong>greatest element less than or equal</strong> to&nbsp;<strong>n</strong> in the given BST.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(Height of the BST)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>3</sup></span><br>&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;