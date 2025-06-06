<h2><a href="https://www.geeksforgeeks.org/problems/balance-with-respect-to-an-array5443/1?page=1&category=Binary%20Search&sortBy=difficulty">Balance with respect to an array</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span id="speechify-first-word-listening-nudge-root-1" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-1">As a programmer,</span> it is very necessary to maintain balance in the life.<br>
Here is task for you to maintain a balance. Your task is to find whether a given number <strong>x</strong> is balanced with respect to a given array <strong>a[ ]</strong>&nbsp;which is sorted in&nbsp;non-decreasing order.<br>
Given a sorted array <strong>a[ ],</strong> the ceiling of <strong>x</strong>&nbsp;is the smallest element in the array greater than or equal to <strong>x</strong>, and the floor of <strong>x</strong> is the greatest element smaller than or equal to <strong>x</strong>. The number '<strong>x</strong>' is said to be balanced if the absolute difference between&nbsp;floor of <strong>x</strong> and <strong>x</strong> is equal to the absolute difference between&nbsp;ceil of <strong>x</strong> and <strong>x</strong> <em>i.e</em>. if <strong>absolute(x - floor(x, a[])) = absolute(ceil(x, a[]) - x)</strong>.<br>
If one of floor or ceil does not exist assume '<strong>x</strong>' to be balanced.</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-2" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-2">Example 1:</span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 7  
x = 5
a[] = {1, 2, 8, 10, 10, 12, 19} 
<strong>Output:</strong> 
Balanced
<strong>Explanation</strong>: Here 2 is the floor value and 
8 is the ceil value and (5 - 2) = (8 - 5).  </span>
</pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-3" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-3"><span id="speechify-first-word-listening-nudge-root-4" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-4">Example 2:</span></span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 8  
x = 9 
a[] = {1, 2, 5, 7, 8, 11, 12, 15} 
<strong>Output:</strong> 
Not Balanced</span>
</pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-5" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-5"><span id="speechify-first-word-listening-nudge-root-6" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-6">Your Task:</span></span></strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>FindElement</strong>() that takes <strong>array a[ ], its size N&nbsp;</strong>and<strong> integer x</strong>&nbsp;as input parameters and returns the string "<strong>Balanced</strong>"&nbsp;if the absolute difference between&nbsp;floor of x and x is equal to the absolute difference between&nbsp;ceil of x and x or else returns string "<strong>Not Balanced</strong>".</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-7" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-7">Expected Time Complexity:</span></strong> O(LogN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-8" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-8">Constraints:</span></strong><br>
1 ≤ N ≤ 10<sup>6</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;