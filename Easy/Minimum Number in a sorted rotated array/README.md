<h2><a href="https://www.geeksforgeeks.org/problems/minimum-number-in-a-sorted-rotated-array-1587115620/1?page=1&category=Binary%20Search&sortBy=difficulty">Minimum Number in a sorted rotated array</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span id="speechify-first-word-listening-nudge-root-1" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-1" style="opacity: 1;">Given an array</span> of distinct elements which was initially sorted.&nbsp;This array may be rotated at some unknown point. The task is to find the minimum element in the given sorted and rotated array.&nbsp;</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-2" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-2" style="opacity: 1;">Example 1:</span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
<strong>Output: </strong>1<strong>
Explanation: </strong>The array is rotated 
once anti-clockwise. So minimum 
element is at last index (n-1) 
which is 1.</span></pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-3" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-3" style="opacity: 1;"><span id="speechify-first-word-listening-nudge-root-4" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-4" style="opacity: 1;">Example 2:</span></span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
arr[] = {3,4,5,1,2}
<strong>Output: </strong>1<strong>
Explanation: </strong>The array is rotated 
and the minimum element present is
at index (n-2) which is 1.</span>
</pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-5" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-5" style="opacity: 1;"><span id="speechify-first-word-listening-nudge-root-6" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-6" style="opacity: 1;">Your Task:</span></span></strong><br>
The task is to complete the function <strong>minNumber</strong>() which takes the array arr[] and its starting and ending indices (low and high) as inputs and returns the minimum element in the given sorted and rotated array.</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-7" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-7" style="opacity: 1;">Expected Time Complexity:</span>&nbsp;</strong>O(LogN).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(LogN).</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-8" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-8" style="opacity: 1;">Constraints:</span></strong><br>
1 &lt;= N &lt;= 10<sup>7</sup><br>
1 &lt;= arr[i] &lt;= 10<sup>7</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;