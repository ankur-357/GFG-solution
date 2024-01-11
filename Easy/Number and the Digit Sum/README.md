<h2><a href="https://www.geeksforgeeks.org/problems/number-and-the-digit-sum4021/1?page=1&category=Binary%20Search&sortBy=difficulty">Number and the Digit Sum</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span id="speechify-first-word-listening-nudge-root-1" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-1" style="opacity: 1;">Given a positive</span> value N, we need to find the count of numbers smaller than or equal to N such that the difference between the number and sum of its digits is greater than or equal to the given specific value K.</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-2" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-2" style="opacity: 1;">Example 1:</span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>N = 13, K = 2
<strong>Output:</strong> 4
<strong>Explanation</strong>: 
10, 11, 12 and 13 satisfy the given condition shown below,&nbsp;
10 - sumofdigit(10) = 9 &gt;= 2
11 - sumofdigit(11) = 9 &gt;= 2
12 - sumofdigit(12) = 9 &gt;= 2
13 - sumofdigit(13) = 9 &gt;= 2&nbsp;
</span></pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-3" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-3" style="opacity: 1;"><span id="speechify-first-word-listening-nudge-root-4" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-4" style="opacity: 1;">Example 2:</span></span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: N = 10, K = 5
<strong>Output:</strong> 1
<strong>Explanation</strong>: 
Only 10 satisfies the givencondition as 
10 - sumofdigit(10) = 9 &gt;= 5</span></pre>

<p><br>
<span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-5" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-5" style="opacity: 1;"><span id="speechify-first-word-listening-nudge-root-6" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-6" style="opacity: 1;">Your Task:</span></span></strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>numberCount()</strong>which takes an integer N and an integer K as inputs and returns the count of numbers less than or equal to N such that the difference between the number and its sum of digits is greater than K.</span></p>

<p><br>
<span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-7" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-7" style="opacity: 1;">Expected Time Complexity:</span>&nbsp;</strong>Log(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-8" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-8" style="opacity: 1;">Constraints:</span></strong><br>
1 &lt;= N, K&lt;= 10<sup>9</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Algorithms</code>&nbsp;