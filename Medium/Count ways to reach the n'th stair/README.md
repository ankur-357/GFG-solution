<h2><a href="https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1?page=1&category=sliding-window&sortBy=submissions">Count ways to reach the n'th stair</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span id="speechify-first-word-listening-nudge-root-1" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-1">There are</span><strong> n</strong> stairs, a person standing at the bottom wants to reach the top. The person can climb either <strong>1 stair or 2 stairs at a time</strong>. Count the number of ways, the person can reach the top (<strong>order does matter</strong>).</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-2" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-2">Example 1:</span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 4
<strong>Output: </strong>5<strong>
Explanation:
</strong>You can reach 4th stair in 5 ways.</span> 
<span style="font-size:18px">Way 1: Climb 2 stairs at a time. </span>
<span style="font-size:18px">Way 2: Climb 1 stair at a time.</span>
<span style="font-size:18px">Way 3: Climb 2 stairs, then 1 stair
and then 1 stair.</span>
<span style="font-size:18px">Way 4: Climb 1 stair, then 2 stairs
then 1 stair.</span>
<span style="font-size:18px">Way 5: Climb 1 stair, then 1 stair and
then 2 stairs.</span>
</pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-3" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-3"><span id="speechify-first-word-listening-nudge-root-4" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-4">Example 2:</span></span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 10
<strong>Output: </strong>89 
<strong>Explanation: </strong>
There are 89 ways to reach the 10th stair.</span>
</pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-5" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-5"><span id="speechify-first-word-listening-nudge-root-6" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-6">Your Task:</span></span></strong><br>
Complete the function&nbsp;<strong>countWays()</strong>&nbsp;which takes the top stair number m as input parameters&nbsp;and returns the answer&nbsp;<strong>% 10^9+7</strong>.</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-7" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-7">Expected Time Complexity</span></strong> : O(n)<br>
<strong>Expected Auxiliary Space</strong>: O(1)</span></p>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-8" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-8">Constraints:</span></strong><br>
1 ≤ n ≤ 10<sup>4</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;