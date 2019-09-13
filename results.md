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

  With the data collected, the difference between a Linear search and a Binary sarch are quite noticeable. Which of course makes sense. The time to do a linear search directly correlates to the number elements, logarithm  **O(n)**. Where binary search on the other hand, divides the vector in half with each comparison, a logarithm  **O(log<sub>2</sub> n)**. Linear searches may only be more efficient with a smaller vector or file.  However, the draw back to using a Binary search, is the vector needs to be sorted. On another note, it would be easier to track the location *(index)* of where particular elements are, with a linear search. 

  In the Linear Search, the method that used pointers made a noticeable difference  compared to the method without. This is because the pointer is referencing the memory address of the variables, instead of making copies with each iteration. This was not the case with the Binary Search. In fact more often then not, the method with pointers took longer to execute. This could be due to the pointers having to dereference itself after each comparison, or the algorithm itself is not efficient. 
   
  There was a significant drop in the execution time of the Linear search, but this was not the case in the Binary search.  After comparing multiply results, the difference in execution times varied between the methods using and not using pointers. In the binary search there was a  +/- 10 microsecond change, and in the linear +/- millisecond  change. Sometimes the methods not using pointers actually execute faster.  
   
  This bring up several questions to experiment with. First, can the code be logically improved. Second, how will the changes in execution times, between pointer and non-pointer vary with different sized vectors. Would a much larger file produce a bigger gap, and in positive or negative way? Third. What will happen if the amount number to be found in the file changed, like 500 instead of the 237.  
   
