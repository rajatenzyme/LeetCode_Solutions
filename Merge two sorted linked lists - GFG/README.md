# Merge two sorted linked lists
## Medium 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given two sorted linked lists consisting of <strong>N and M</strong>&nbsp;nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
<strong>Output: </strong>2 3 5 10 15 20 40<strong>
Explanation: </strong>After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
<strong>Output:</strong>1 1 2 4<strong>
Explanation: </strong>After merging the given two
linked list , we have 1, 1, 2, 4 as
output.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>sortedMerge</strong>() which takes references to the heads of two linked lists as the arguments and returns the head of merged linked list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(n+m)<br>
<strong>Expected Auxilliary Space</strong> : O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, M &lt;= 10<sup>4</sup><br>
1 &lt;= Node's data &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>