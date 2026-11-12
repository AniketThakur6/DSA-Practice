## [Tower Of Hanoi](https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks)

**Difficulty:** Medium  
**Topics:** Recursion  

**Problem Description:**

<p data-start="83" data-end="352"><span style="font-size: 14pt;">Given <strong>n</strong> disks, consider three rods: the starting rod(from), the target rod (to), and an auxiliary<strong> </strong>rod (aux).&nbsp;&nbsp;</span><span style="font-size: 14pt;">Initially disks are&nbsp;</span><span style="font-size: 14pt;"> placed on the starting rod. The smallest disk is placed on top and the largest at the bottom. </span></p><p data-start="83" data-end="352"><span style="font-size: 14pt;">Calculate the minimum number<strong data-start="384" data-end="409"> </strong>of<strong data-start="384" data-end="409"> moves</strong> required to transfer all <strong>n</strong> disks from the starting rod to the target rod, following these rules:</span></p><ul><li data-start="83" data-end="352"><span style="font-size: 18.6667px;">Only one disk can be moved at a time.</span></li><li data-start="83" data-end="352"><span style="font-size: 18.6667px;">A disk can only be placed on top of a larger disk or on an empty rod.</span></li></ul><p data-start="83" data-end="352"><span style="font-size: 14pt;">Find the minimum<strong> </strong>number of moves needed to complete the task.</span></p><p><span style="font-size: 18px;"><strong>Examples:</strong></span></p><pre><span style="font-size: 18px;"><strong>Input: </strong>n = 2
<strong>Output: </strong>3<strong>
Explanation: </strong>For n = 2, total 3 steps will be taken. Steps are as follows -<br></span><span style="font-size: 18px;">move disk 1 from rod 1 to rod 2<br></span><span style="font-size: 18px;">move disk 2 from rod 1 to rod 3<br>move disk 1 from rod 2 to rod 3<br></span></pre><pre><span style="font-size: 18px;"><strong>Input: </strong>n = 3
<strong>Output: </strong>7<strong>
Explanation: </strong>For n = 3, total 7 steps will be taken.Steps are as follows -<br>move disk 1 from rod 1 to rod 3<br>move disk 2 from rod 1 to rod 2<br>move disk 1 from rod 3 to rod 2<br>move disk 3 from rod 1 to rod 3<br>move disk 1 from rod 2 to rod 1<br>move disk 2 from rod 2 to rod 3<br>move disk 1 from rod 1 to rod 3<br></span></pre><pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 0
<strong>Output: </strong>0<strong>
Explanation: </strong>Total 0 steps will be taken.</span></pre>

**Expected Complexities:**

Time Complexity: O(2^n)  
Auxiliary Space: O(n)
