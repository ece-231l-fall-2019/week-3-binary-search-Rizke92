# Results Report
------------------------------------------------------------
## Linear Search vs Binary Search
#### Complied without Optimization 
|    Algorithms    |       Time       | Time w/ Pointers |
|------------------|------------------|------------------|
|  Linear Search   | 1.70811s         | 1.04877s         |
|  Binary Search   | 0.000353734s     | 0.000348874s     |


#### Compiled with Optimization

|    Algorithms    |       Time       | Time w/ Pointers |
|------------------|------------------|------------------|
|  Linear Search   | 0.076494s        | 0.757822s        |
|  Binary Search   | 0.000344345s     | 0.000337546s     |

------------------------------------------------------------
### Summary

With the data collected, the difference between a Linear and Binary Search are quite noticeable. Which of course makes sense. The time to do a linear search directly correlates to the number elements, logarithm  #O(n)#. Where binary search on the other had divides the vector in half with each comparison, a logarithm  #O(log<sub>2</sub> n)#. Linear searches may only be more efficient with smaller vector or files.  However, the draw back to using a Binary search, is the vector needs to be sorted. On another note, it would be easier to track the location (index) of where particular elements are with a linear search.  
