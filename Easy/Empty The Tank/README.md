<h2><a href="https://www.geeksforgeeks.org/problems/empty-the-tank3831/1?page=1&category=Binary%20Search&sortBy=difficulty">Empty The Tank</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><span id="speechify-first-word-listening-nudge-root-1" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-1">Given a tank</span> with capacity <strong>C</strong> litres which is completely filled in starting. At the end of every day, tank is filled with <strong>L</strong>&nbsp;litres of water and in the case of overflow extra water is thrown out. Now on <strong>i-th</strong> day <strong>i</strong> litres of water is taken out for drinking. We need to find out the day at which tank will become empty the first time.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: C = 5, L = 2
<strong>Output:</strong>&nbsp;4&nbsp;
<strong>Explanation</strong>: At the start of 1st day, 
water in tank = 5 and at the end of 
the 1st day = (5 - 1) = 4 At the start
of 2nd day, water in tank = 4 + 2 = 6 
but tank capacity is 5 so water = 5 and 
at the end of the 2nd day = (5 - 2) = 3 
At the start of 3rd day, water in 
tank = 3 + 2 = 5 and at the end of the 
3rd day = (5 - 3) = 2 At the start of 4th 
day, water in tank = 2 + 2 = 4 and at the 
end of the 4th day = (4 - 4) = 0 
So final answer will be 4.</span><span style="font-size:18px">
</span></pre>

<p><span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-2" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-2"><span id="speechify-first-word-listening-nudge-root-3" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-3">Example 2:</span></span></strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>C = 6, L = 1
<strong>Output:&nbsp;</strong>4
<strong>Explanation</strong>: At the start of 1st day,
water in tank = 6 and at the end of
the 1st day = (6 - 1) = 5 At the start
of 2nd day, water in tank = 5 + 1 = 6
and at the end of the 2nd day = (5 - 2)= 3
At the start of 3rd day, water in
tank = 3 + 1 = 4 and at the end of the
3rd day = (4 - 3) = 1 At the start of 4th
day, water in tank = 1 + 1 = 2 and at the
end of the 4th day = (2 - 4) &lt; 0
So final answer will be 4.</span></pre>

<p><br>
<span style="font-size:18px"><strong><span id="speechify-first-word-listening-nudge-root-4" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-4"><span id="speechify-first-word-listening-nudge-root-5" style="position: absolute; z-index: 10000;"></span><span id="speechify-first-word-listening-nudge-5">Your Task:&nbsp;&nbsp;</span></span></strong><br>
You dont need to read input or print anything. Complete the function <strong>minDaysToEmpty()&nbsp;</strong>which takes C and L&nbsp;as input parameter and returns the the day at which tank will become empty the first time.<br>
<br>
<strong>Expected Time Complexity:</strong> O(logC)<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<strong>Constraints:</strong><br>
1&lt;= C, L &lt;=10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Algorithms</code>&nbsp;