<h2><a href="https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1?page=2&category[]=Graph&sortBy=difficulty">Replace O's with X's</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix <strong>mat</strong> of size <strong>N x M</strong> where every element is either O or X.<br>
Replace all O with X that are surrounded by X.<br>
A O (or a set of O) is considered to be surrounded by X if there are X at locations just below, just above, just left and just right of it.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 5, m = 4
mat = {{'X', 'X', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'O', 'O', 'X'}, 
&nbsp;      {'X', 'O', 'X', 'X'}, 
&nbsp;      {'X', 'X', 'O', 'O'}}
<strong>Output:</strong> ans = {{'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'X', 'X'}, 
&nbsp;              {'X', 'X', 'O', 'O'}}
<strong>Explanation:</strong> Following the rule the above 
matrix is the resultant matrix. </span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>fill()</strong> which takes n, m and mat as input parameters ad returns a 2D array representing the resultant matrix.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n*m)<br>
<strong>Expected Auxiliary Space:</strong> O(n*m)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m ≤ 500</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Matrix</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;